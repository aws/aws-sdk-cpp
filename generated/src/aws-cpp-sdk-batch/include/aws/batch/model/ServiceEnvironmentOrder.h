/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
   * <p>Specifies the order of a service environment for a job queue. This determines
   * the priority order when multiple service environments are associated with the
   * same job queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceEnvironmentOrder">AWS
   * API Reference</a></p>
   */
  class ServiceEnvironmentOrder
  {
  public:
    AWS_BATCH_API ServiceEnvironmentOrder() = default;
    AWS_BATCH_API ServiceEnvironmentOrder(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ServiceEnvironmentOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The order of the service environment. Job queues with a higher priority are
     * evaluated first when associated with the same service environment.</p>
     */
    inline int GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }
    inline ServiceEnvironmentOrder& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the service environment.</p>
     */
    inline const Aws::String& GetServiceEnvironment() const { return m_serviceEnvironment; }
    inline bool ServiceEnvironmentHasBeenSet() const { return m_serviceEnvironmentHasBeenSet; }
    template<typename ServiceEnvironmentT = Aws::String>
    void SetServiceEnvironment(ServiceEnvironmentT&& value) { m_serviceEnvironmentHasBeenSet = true; m_serviceEnvironment = std::forward<ServiceEnvironmentT>(value); }
    template<typename ServiceEnvironmentT = Aws::String>
    ServiceEnvironmentOrder& WithServiceEnvironment(ServiceEnvironmentT&& value) { SetServiceEnvironment(std::forward<ServiceEnvironmentT>(value)); return *this;}
    ///@}
  private:

    int m_order{0};
    bool m_orderHasBeenSet = false;

    Aws::String m_serviceEnvironment;
    bool m_serviceEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
