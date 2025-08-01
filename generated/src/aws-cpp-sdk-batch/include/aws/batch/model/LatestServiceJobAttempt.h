/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/ServiceResourceId.h>
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
   * <p>Information about the latest attempt of a service job. A Service job can
   * transition from <code>SCHEDULED</code> back to <code>RUNNABLE</code> state when
   * they encounter capacity constraints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/LatestServiceJobAttempt">AWS
   * API Reference</a></p>
   */
  class LatestServiceJobAttempt
  {
  public:
    AWS_BATCH_API LatestServiceJobAttempt() = default;
    AWS_BATCH_API LatestServiceJobAttempt(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API LatestServiceJobAttempt& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    LatestServiceJobAttempt& WithServiceResourceId(ServiceResourceIdT&& value) { SetServiceResourceId(std::forward<ServiceResourceIdT>(value)); return *this;}
    ///@}
  private:

    ServiceResourceId m_serviceResourceId;
    bool m_serviceResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
