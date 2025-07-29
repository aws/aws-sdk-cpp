/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ServiceEnvironmentState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/CapacityLimit.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class UpdateServiceEnvironmentRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API UpdateServiceEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceEnvironment"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or ARN of the service environment to update.</p>
     */
    inline const Aws::String& GetServiceEnvironment() const { return m_serviceEnvironment; }
    inline bool ServiceEnvironmentHasBeenSet() const { return m_serviceEnvironmentHasBeenSet; }
    template<typename ServiceEnvironmentT = Aws::String>
    void SetServiceEnvironment(ServiceEnvironmentT&& value) { m_serviceEnvironmentHasBeenSet = true; m_serviceEnvironment = std::forward<ServiceEnvironmentT>(value); }
    template<typename ServiceEnvironmentT = Aws::String>
    UpdateServiceEnvironmentRequest& WithServiceEnvironment(ServiceEnvironmentT&& value) { SetServiceEnvironment(std::forward<ServiceEnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the service environment. </p>
     */
    inline ServiceEnvironmentState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ServiceEnvironmentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateServiceEnvironmentRequest& WithState(ServiceEnvironmentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity limits for the service environment. This defines the maximum
     * resources that can be used by service jobs in this environment.</p>
     */
    inline const Aws::Vector<CapacityLimit>& GetCapacityLimits() const { return m_capacityLimits; }
    inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
    template<typename CapacityLimitsT = Aws::Vector<CapacityLimit>>
    void SetCapacityLimits(CapacityLimitsT&& value) { m_capacityLimitsHasBeenSet = true; m_capacityLimits = std::forward<CapacityLimitsT>(value); }
    template<typename CapacityLimitsT = Aws::Vector<CapacityLimit>>
    UpdateServiceEnvironmentRequest& WithCapacityLimits(CapacityLimitsT&& value) { SetCapacityLimits(std::forward<CapacityLimitsT>(value)); return *this;}
    template<typename CapacityLimitsT = CapacityLimit>
    UpdateServiceEnvironmentRequest& AddCapacityLimits(CapacityLimitsT&& value) { m_capacityLimitsHasBeenSet = true; m_capacityLimits.emplace_back(std::forward<CapacityLimitsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serviceEnvironment;
    bool m_serviceEnvironmentHasBeenSet = false;

    ServiceEnvironmentState m_state{ServiceEnvironmentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<CapacityLimit> m_capacityLimits;
    bool m_capacityLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
