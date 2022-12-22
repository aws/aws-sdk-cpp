/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/OfflineStoreStatusValue.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The status of <code>OfflineStore</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OfflineStoreStatus">AWS
   * API Reference</a></p>
   */
  class OfflineStoreStatus
  {
  public:
    AWS_SAGEMAKER_API OfflineStoreStatus();
    AWS_SAGEMAKER_API OfflineStoreStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OfflineStoreStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An <code>OfflineStore</code> status.</p>
     */
    inline const OfflineStoreStatusValue& GetStatus() const{ return m_status; }

    /**
     * <p>An <code>OfflineStore</code> status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>An <code>OfflineStore</code> status.</p>
     */
    inline void SetStatus(const OfflineStoreStatusValue& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>An <code>OfflineStore</code> status.</p>
     */
    inline void SetStatus(OfflineStoreStatusValue&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>An <code>OfflineStore</code> status.</p>
     */
    inline OfflineStoreStatus& WithStatus(const OfflineStoreStatusValue& value) { SetStatus(value); return *this;}

    /**
     * <p>An <code>OfflineStore</code> status.</p>
     */
    inline OfflineStoreStatus& WithStatus(OfflineStoreStatusValue&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The justification for why the OfflineStoreStatus is Blocked (if
     * applicable).</p>
     */
    inline const Aws::String& GetBlockedReason() const{ return m_blockedReason; }

    /**
     * <p>The justification for why the OfflineStoreStatus is Blocked (if
     * applicable).</p>
     */
    inline bool BlockedReasonHasBeenSet() const { return m_blockedReasonHasBeenSet; }

    /**
     * <p>The justification for why the OfflineStoreStatus is Blocked (if
     * applicable).</p>
     */
    inline void SetBlockedReason(const Aws::String& value) { m_blockedReasonHasBeenSet = true; m_blockedReason = value; }

    /**
     * <p>The justification for why the OfflineStoreStatus is Blocked (if
     * applicable).</p>
     */
    inline void SetBlockedReason(Aws::String&& value) { m_blockedReasonHasBeenSet = true; m_blockedReason = std::move(value); }

    /**
     * <p>The justification for why the OfflineStoreStatus is Blocked (if
     * applicable).</p>
     */
    inline void SetBlockedReason(const char* value) { m_blockedReasonHasBeenSet = true; m_blockedReason.assign(value); }

    /**
     * <p>The justification for why the OfflineStoreStatus is Blocked (if
     * applicable).</p>
     */
    inline OfflineStoreStatus& WithBlockedReason(const Aws::String& value) { SetBlockedReason(value); return *this;}

    /**
     * <p>The justification for why the OfflineStoreStatus is Blocked (if
     * applicable).</p>
     */
    inline OfflineStoreStatus& WithBlockedReason(Aws::String&& value) { SetBlockedReason(std::move(value)); return *this;}

    /**
     * <p>The justification for why the OfflineStoreStatus is Blocked (if
     * applicable).</p>
     */
    inline OfflineStoreStatus& WithBlockedReason(const char* value) { SetBlockedReason(value); return *this;}

  private:

    OfflineStoreStatusValue m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_blockedReason;
    bool m_blockedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
