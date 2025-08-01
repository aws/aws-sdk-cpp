/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/ServiceResourceId.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>Detailed information about an attempt to run a service job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceJobAttemptDetail">AWS
   * API Reference</a></p>
   */
  class ServiceJobAttemptDetail
  {
  public:
    AWS_BATCH_API ServiceJobAttemptDetail() = default;
    AWS_BATCH_API ServiceJobAttemptDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ServiceJobAttemptDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service resource identifier associated with the service job attempt.</p>
     */
    inline const ServiceResourceId& GetServiceResourceId() const { return m_serviceResourceId; }
    inline bool ServiceResourceIdHasBeenSet() const { return m_serviceResourceIdHasBeenSet; }
    template<typename ServiceResourceIdT = ServiceResourceId>
    void SetServiceResourceId(ServiceResourceIdT&& value) { m_serviceResourceIdHasBeenSet = true; m_serviceResourceId = std::forward<ServiceResourceIdT>(value); }
    template<typename ServiceResourceIdT = ServiceResourceId>
    ServiceJobAttemptDetail& WithServiceResourceId(ServiceResourceIdT&& value) { SetServiceResourceId(std::forward<ServiceResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the service job attempt was
     * started.</p>
     */
    inline long long GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline ServiceJobAttemptDetail& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the service job attempt stopped
     * running.</p>
     */
    inline long long GetStoppedAt() const { return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline ServiceJobAttemptDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that provides additional details for the current status of the
     * service job attempt.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ServiceJobAttemptDetail& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    ServiceResourceId m_serviceResourceId;
    bool m_serviceResourceIdHasBeenSet = false;

    long long m_startedAt{0};
    bool m_startedAtHasBeenSet = false;

    long long m_stoppedAt{0};
    bool m_stoppedAtHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
