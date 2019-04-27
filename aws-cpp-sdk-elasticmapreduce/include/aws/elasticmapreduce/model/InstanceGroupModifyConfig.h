/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ShrinkPolicy.h>
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
  class AWS_EMR_API InstanceGroupModifyConfig
  {
  public:
    InstanceGroupModifyConfig();
    InstanceGroupModifyConfig(Aws::Utils::Json::JsonView jsonValue);
    InstanceGroupModifyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::move(value); }

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId.assign(value); }

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline InstanceGroupModifyConfig& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline InstanceGroupModifyConfig& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
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
    bool m_instanceGroupIdHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    Aws::Vector<Aws::String> m_eC2InstanceIdsToTerminate;
    bool m_eC2InstanceIdsToTerminateHasBeenSet;

    ShrinkPolicy m_shrinkPolicy;
    bool m_shrinkPolicyHasBeenSet;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
