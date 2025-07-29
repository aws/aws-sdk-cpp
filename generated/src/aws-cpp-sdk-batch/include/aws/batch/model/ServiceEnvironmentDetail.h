/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ServiceEnvironmentType.h>
#include <aws/batch/model/ServiceEnvironmentState.h>
#include <aws/batch/model/ServiceEnvironmentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/CapacityLimit.h>
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
   * <p>Detailed information about a service environment, including its
   * configuration, state, and capacity limits.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceEnvironmentDetail">AWS
   * API Reference</a></p>
   */
  class ServiceEnvironmentDetail
  {
  public:
    AWS_BATCH_API ServiceEnvironmentDetail() = default;
    AWS_BATCH_API ServiceEnvironmentDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ServiceEnvironmentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service environment.</p>
     */
    inline const Aws::String& GetServiceEnvironmentName() const { return m_serviceEnvironmentName; }
    inline bool ServiceEnvironmentNameHasBeenSet() const { return m_serviceEnvironmentNameHasBeenSet; }
    template<typename ServiceEnvironmentNameT = Aws::String>
    void SetServiceEnvironmentName(ServiceEnvironmentNameT&& value) { m_serviceEnvironmentNameHasBeenSet = true; m_serviceEnvironmentName = std::forward<ServiceEnvironmentNameT>(value); }
    template<typename ServiceEnvironmentNameT = Aws::String>
    ServiceEnvironmentDetail& WithServiceEnvironmentName(ServiceEnvironmentNameT&& value) { SetServiceEnvironmentName(std::forward<ServiceEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service environment.</p>
     */
    inline const Aws::String& GetServiceEnvironmentArn() const { return m_serviceEnvironmentArn; }
    inline bool ServiceEnvironmentArnHasBeenSet() const { return m_serviceEnvironmentArnHasBeenSet; }
    template<typename ServiceEnvironmentArnT = Aws::String>
    void SetServiceEnvironmentArn(ServiceEnvironmentArnT&& value) { m_serviceEnvironmentArnHasBeenSet = true; m_serviceEnvironmentArn = std::forward<ServiceEnvironmentArnT>(value); }
    template<typename ServiceEnvironmentArnT = Aws::String>
    ServiceEnvironmentDetail& WithServiceEnvironmentArn(ServiceEnvironmentArnT&& value) { SetServiceEnvironmentArn(std::forward<ServiceEnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service environment. For SageMaker Training jobs, this value is
     * <code>SAGEMAKER_TRAINING</code>.</p>
     */
    inline ServiceEnvironmentType GetServiceEnvironmentType() const { return m_serviceEnvironmentType; }
    inline bool ServiceEnvironmentTypeHasBeenSet() const { return m_serviceEnvironmentTypeHasBeenSet; }
    inline void SetServiceEnvironmentType(ServiceEnvironmentType value) { m_serviceEnvironmentTypeHasBeenSet = true; m_serviceEnvironmentType = value; }
    inline ServiceEnvironmentDetail& WithServiceEnvironmentType(ServiceEnvironmentType value) { SetServiceEnvironmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the service environment. Valid values are <code>ENABLED</code>
     * and <code>DISABLED</code>.</p>
     */
    inline ServiceEnvironmentState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ServiceEnvironmentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ServiceEnvironmentDetail& WithState(ServiceEnvironmentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the service environment.</p>
     */
    inline ServiceEnvironmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceEnvironmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceEnvironmentDetail& WithStatus(ServiceEnvironmentStatus value) { SetStatus(value); return *this;}
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
    ServiceEnvironmentDetail& WithCapacityLimits(CapacityLimitsT&& value) { SetCapacityLimits(std::forward<CapacityLimitsT>(value)); return *this;}
    template<typename CapacityLimitsT = CapacityLimit>
    ServiceEnvironmentDetail& AddCapacityLimits(CapacityLimitsT&& value) { m_capacityLimitsHasBeenSet = true; m_capacityLimits.emplace_back(std::forward<CapacityLimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with the service environment. Each tag consists of a key
     * and an optional value. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ServiceEnvironmentDetail& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ServiceEnvironmentDetail& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_serviceEnvironmentName;
    bool m_serviceEnvironmentNameHasBeenSet = false;

    Aws::String m_serviceEnvironmentArn;
    bool m_serviceEnvironmentArnHasBeenSet = false;

    ServiceEnvironmentType m_serviceEnvironmentType{ServiceEnvironmentType::NOT_SET};
    bool m_serviceEnvironmentTypeHasBeenSet = false;

    ServiceEnvironmentState m_state{ServiceEnvironmentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ServiceEnvironmentStatus m_status{ServiceEnvironmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<CapacityLimit> m_capacityLimits;
    bool m_capacityLimitsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
