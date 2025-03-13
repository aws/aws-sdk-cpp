/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ShrinkPolicy.h>
#include <aws/elasticmapreduce/model/ReconfigurationType.h>
#include <aws/elasticmapreduce/model/Configuration.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Modify the size or configurations of an instance group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceGroupModifyConfig">AWS
   * API Reference</a></p>
   */
  class InstanceGroupModifyConfig
  {
  public:
    AWS_EMR_API InstanceGroupModifyConfig() = default;
    AWS_EMR_API InstanceGroupModifyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroupModifyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique ID of the instance group to modify.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const { return m_instanceGroupId; }
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }
    template<typename InstanceGroupIdT = Aws::String>
    void SetInstanceGroupId(InstanceGroupIdT&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::forward<InstanceGroupIdT>(value); }
    template<typename InstanceGroupIdT = Aws::String>
    InstanceGroupModifyConfig& WithInstanceGroupId(InstanceGroupIdT&& value) { SetInstanceGroupId(std::forward<InstanceGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target size for the instance group.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline InstanceGroupModifyConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 InstanceIds to terminate. After you terminate the instances,
     * the instance group will not return to its original requested size.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEC2InstanceIdsToTerminate() const { return m_eC2InstanceIdsToTerminate; }
    inline bool EC2InstanceIdsToTerminateHasBeenSet() const { return m_eC2InstanceIdsToTerminateHasBeenSet; }
    template<typename EC2InstanceIdsToTerminateT = Aws::Vector<Aws::String>>
    void SetEC2InstanceIdsToTerminate(EC2InstanceIdsToTerminateT&& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate = std::forward<EC2InstanceIdsToTerminateT>(value); }
    template<typename EC2InstanceIdsToTerminateT = Aws::Vector<Aws::String>>
    InstanceGroupModifyConfig& WithEC2InstanceIdsToTerminate(EC2InstanceIdsToTerminateT&& value) { SetEC2InstanceIdsToTerminate(std::forward<EC2InstanceIdsToTerminateT>(value)); return *this;}
    template<typename EC2InstanceIdsToTerminateT = Aws::String>
    InstanceGroupModifyConfig& AddEC2InstanceIdsToTerminate(EC2InstanceIdsToTerminateT&& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate.emplace_back(std::forward<EC2InstanceIdsToTerminateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline const ShrinkPolicy& GetShrinkPolicy() const { return m_shrinkPolicy; }
    inline bool ShrinkPolicyHasBeenSet() const { return m_shrinkPolicyHasBeenSet; }
    template<typename ShrinkPolicyT = ShrinkPolicy>
    void SetShrinkPolicy(ShrinkPolicyT&& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = std::forward<ShrinkPolicyT>(value); }
    template<typename ShrinkPolicyT = ShrinkPolicy>
    InstanceGroupModifyConfig& WithShrinkPolicy(ShrinkPolicyT&& value) { SetShrinkPolicy(std::forward<ShrinkPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of reconfiguration requested. Valid values are MERGE and OVERWRITE.</p>
     */
    inline ReconfigurationType GetReconfigurationType() const { return m_reconfigurationType; }
    inline bool ReconfigurationTypeHasBeenSet() const { return m_reconfigurationTypeHasBeenSet; }
    inline void SetReconfigurationType(ReconfigurationType value) { m_reconfigurationTypeHasBeenSet = true; m_reconfigurationType = value; }
    inline InstanceGroupModifyConfig& WithReconfigurationType(ReconfigurationType value) { SetReconfigurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of new or modified configurations to apply for an instance group.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const { return m_configurations; }
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    void SetConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations = std::forward<ConfigurationsT>(value); }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    InstanceGroupModifyConfig& WithConfigurations(ConfigurationsT&& value) { SetConfigurations(std::forward<ConfigurationsT>(value)); return *this;}
    template<typename ConfigurationsT = Configuration>
    InstanceGroupModifyConfig& AddConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace_back(std::forward<ConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_eC2InstanceIdsToTerminate;
    bool m_eC2InstanceIdsToTerminateHasBeenSet = false;

    ShrinkPolicy m_shrinkPolicy;
    bool m_shrinkPolicyHasBeenSet = false;

    ReconfigurationType m_reconfigurationType{ReconfigurationType::NOT_SET};
    bool m_reconfigurationTypeHasBeenSet = false;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
