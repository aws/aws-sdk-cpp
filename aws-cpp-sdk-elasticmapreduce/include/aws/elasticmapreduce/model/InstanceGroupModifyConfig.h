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
    AWS_EMR_API InstanceGroupModifyConfig();
    AWS_EMR_API InstanceGroupModifyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroupModifyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique ID of the instance group to modify.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }

    /**
     * <p>Unique ID of the instance group to modify.</p>
     */
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }

    /**
     * <p>Unique ID of the instance group to modify.</p>
     */
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

    /**
     * <p>Unique ID of the instance group to modify.</p>
     */
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::move(value); }

    /**
     * <p>Unique ID of the instance group to modify.</p>
     */
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId.assign(value); }

    /**
     * <p>Unique ID of the instance group to modify.</p>
     */
    inline InstanceGroupModifyConfig& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}

    /**
     * <p>Unique ID of the instance group to modify.</p>
     */
    inline InstanceGroupModifyConfig& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}

    /**
     * <p>Unique ID of the instance group to modify.</p>
     */
    inline InstanceGroupModifyConfig& WithInstanceGroupId(const char* value) { SetInstanceGroupId(value); return *this;}


    /**
     * <p>Target size for the instance group.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>Target size for the instance group.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>Target size for the instance group.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>Target size for the instance group.</p>
     */
    inline InstanceGroupModifyConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The EC2 InstanceIds to terminate. After you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEC2InstanceIdsToTerminate() const{ return m_eC2InstanceIdsToTerminate; }

    /**
     * <p>The EC2 InstanceIds to terminate. After you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline bool EC2InstanceIdsToTerminateHasBeenSet() const { return m_eC2InstanceIdsToTerminateHasBeenSet; }

    /**
     * <p>The EC2 InstanceIds to terminate. After you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline void SetEC2InstanceIdsToTerminate(const Aws::Vector<Aws::String>& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate = value; }

    /**
     * <p>The EC2 InstanceIds to terminate. After you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline void SetEC2InstanceIdsToTerminate(Aws::Vector<Aws::String>&& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate = std::move(value); }

    /**
     * <p>The EC2 InstanceIds to terminate. After you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline InstanceGroupModifyConfig& WithEC2InstanceIdsToTerminate(const Aws::Vector<Aws::String>& value) { SetEC2InstanceIdsToTerminate(value); return *this;}

    /**
     * <p>The EC2 InstanceIds to terminate. After you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline InstanceGroupModifyConfig& WithEC2InstanceIdsToTerminate(Aws::Vector<Aws::String>&& value) { SetEC2InstanceIdsToTerminate(std::move(value)); return *this;}

    /**
     * <p>The EC2 InstanceIds to terminate. After you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline InstanceGroupModifyConfig& AddEC2InstanceIdsToTerminate(const Aws::String& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate.push_back(value); return *this; }

    /**
     * <p>The EC2 InstanceIds to terminate. After you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline InstanceGroupModifyConfig& AddEC2InstanceIdsToTerminate(Aws::String&& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 InstanceIds to terminate. After you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline InstanceGroupModifyConfig& AddEC2InstanceIdsToTerminate(const char* value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate.push_back(value); return *this; }


    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline const ShrinkPolicy& GetShrinkPolicy() const{ return m_shrinkPolicy; }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline bool ShrinkPolicyHasBeenSet() const { return m_shrinkPolicyHasBeenSet; }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline void SetShrinkPolicy(const ShrinkPolicy& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = value; }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline void SetShrinkPolicy(ShrinkPolicy&& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = std::move(value); }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline InstanceGroupModifyConfig& WithShrinkPolicy(const ShrinkPolicy& value) { SetShrinkPolicy(value); return *this;}

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline InstanceGroupModifyConfig& WithShrinkPolicy(ShrinkPolicy&& value) { SetShrinkPolicy(std::move(value)); return *this;}


    /**
     * <p>Type of reconfiguration requested. Valid values are MERGE and OVERWRITE.</p>
     */
    inline const ReconfigurationType& GetReconfigurationType() const{ return m_reconfigurationType; }

    /**
     * <p>Type of reconfiguration requested. Valid values are MERGE and OVERWRITE.</p>
     */
    inline bool ReconfigurationTypeHasBeenSet() const { return m_reconfigurationTypeHasBeenSet; }

    /**
     * <p>Type of reconfiguration requested. Valid values are MERGE and OVERWRITE.</p>
     */
    inline void SetReconfigurationType(const ReconfigurationType& value) { m_reconfigurationTypeHasBeenSet = true; m_reconfigurationType = value; }

    /**
     * <p>Type of reconfiguration requested. Valid values are MERGE and OVERWRITE.</p>
     */
    inline void SetReconfigurationType(ReconfigurationType&& value) { m_reconfigurationTypeHasBeenSet = true; m_reconfigurationType = std::move(value); }

    /**
     * <p>Type of reconfiguration requested. Valid values are MERGE and OVERWRITE.</p>
     */
    inline InstanceGroupModifyConfig& WithReconfigurationType(const ReconfigurationType& value) { SetReconfigurationType(value); return *this;}

    /**
     * <p>Type of reconfiguration requested. Valid values are MERGE and OVERWRITE.</p>
     */
    inline InstanceGroupModifyConfig& WithReconfigurationType(ReconfigurationType&& value) { SetReconfigurationType(std::move(value)); return *this;}


    /**
     * <p>A list of new or modified configurations to apply for an instance group.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>A list of new or modified configurations to apply for an instance group.</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>A list of new or modified configurations to apply for an instance group.</p>
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>A list of new or modified configurations to apply for an instance group.</p>
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>A list of new or modified configurations to apply for an instance group.</p>
     */
    inline InstanceGroupModifyConfig& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>A list of new or modified configurations to apply for an instance group.</p>
     */
    inline InstanceGroupModifyConfig& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of new or modified configurations to apply for an instance group.</p>
     */
    inline InstanceGroupModifyConfig& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>A list of new or modified configurations to apply for an instance group.</p>
     */
    inline InstanceGroupModifyConfig& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_eC2InstanceIdsToTerminate;
    bool m_eC2InstanceIdsToTerminateHasBeenSet = false;

    ShrinkPolicy m_shrinkPolicy;
    bool m_shrinkPolicyHasBeenSet = false;

    ReconfigurationType m_reconfigurationType;
    bool m_reconfigurationTypeHasBeenSet = false;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
