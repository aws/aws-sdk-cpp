/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ServiceEnvironmentType.h>
#include <aws/batch/model/ServiceEnvironmentState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateServiceEnvironmentRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API CreateServiceEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceEnvironment"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name for the service environment. It can be up to 128 characters long and
     * can contain letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline const Aws::String& GetServiceEnvironmentName() const { return m_serviceEnvironmentName; }
    inline bool ServiceEnvironmentNameHasBeenSet() const { return m_serviceEnvironmentNameHasBeenSet; }
    template<typename ServiceEnvironmentNameT = Aws::String>
    void SetServiceEnvironmentName(ServiceEnvironmentNameT&& value) { m_serviceEnvironmentNameHasBeenSet = true; m_serviceEnvironmentName = std::forward<ServiceEnvironmentNameT>(value); }
    template<typename ServiceEnvironmentNameT = Aws::String>
    CreateServiceEnvironmentRequest& WithServiceEnvironmentName(ServiceEnvironmentNameT&& value) { SetServiceEnvironmentName(std::forward<ServiceEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service environment. For SageMaker Training jobs, specify
     * <code>SAGEMAKER_TRAINING</code>.</p>
     */
    inline ServiceEnvironmentType GetServiceEnvironmentType() const { return m_serviceEnvironmentType; }
    inline bool ServiceEnvironmentTypeHasBeenSet() const { return m_serviceEnvironmentTypeHasBeenSet; }
    inline void SetServiceEnvironmentType(ServiceEnvironmentType value) { m_serviceEnvironmentTypeHasBeenSet = true; m_serviceEnvironmentType = value; }
    inline CreateServiceEnvironmentRequest& WithServiceEnvironmentType(ServiceEnvironmentType value) { SetServiceEnvironmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the service environment. Valid values are <code>ENABLED</code>
     * and <code>DISABLED</code>. The default value is <code>ENABLED</code>.</p>
     */
    inline ServiceEnvironmentState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ServiceEnvironmentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateServiceEnvironmentRequest& WithState(ServiceEnvironmentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity limits for the service environment. The number of instances a
     * job consumes is the total number of instances requested in the submit training
     * job request resource configuration.</p>
     */
    inline const Aws::Vector<CapacityLimit>& GetCapacityLimits() const { return m_capacityLimits; }
    inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
    template<typename CapacityLimitsT = Aws::Vector<CapacityLimit>>
    void SetCapacityLimits(CapacityLimitsT&& value) { m_capacityLimitsHasBeenSet = true; m_capacityLimits = std::forward<CapacityLimitsT>(value); }
    template<typename CapacityLimitsT = Aws::Vector<CapacityLimit>>
    CreateServiceEnvironmentRequest& WithCapacityLimits(CapacityLimitsT&& value) { SetCapacityLimits(std::forward<CapacityLimitsT>(value)); return *this;}
    template<typename CapacityLimitsT = CapacityLimit>
    CreateServiceEnvironmentRequest& AddCapacityLimits(CapacityLimitsT&& value) { m_capacityLimitsHasBeenSet = true; m_capacityLimits.emplace_back(std::forward<CapacityLimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the service environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateServiceEnvironmentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateServiceEnvironmentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_serviceEnvironmentName;
    bool m_serviceEnvironmentNameHasBeenSet = false;

    ServiceEnvironmentType m_serviceEnvironmentType{ServiceEnvironmentType::NOT_SET};
    bool m_serviceEnvironmentTypeHasBeenSet = false;

    ServiceEnvironmentState m_state{ServiceEnvironmentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<CapacityLimit> m_capacityLimits;
    bool m_capacityLimitsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
