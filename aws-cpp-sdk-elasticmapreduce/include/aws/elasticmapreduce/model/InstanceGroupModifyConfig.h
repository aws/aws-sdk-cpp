/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>Modify an instance group size.</p>
   */
  class AWS_EMR_API InstanceGroupModifyConfig
  {
  public:
    InstanceGroupModifyConfig();
    InstanceGroupModifyConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceGroupModifyConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

    /**
     * <p>Unique ID of the instance group to expand or shrink.</p>
     */
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

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
    inline InstanceGroupModifyConfig& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(value); return *this;}

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
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>Target size for the instance group.</p>
     */
    inline InstanceGroupModifyConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

    /**
     * <p>The EC2 InstanceIds to terminate. Once you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEC2InstanceIdsToTerminate() const{ return m_eC2InstanceIdsToTerminate; }

    /**
     * <p>The EC2 InstanceIds to terminate. Once you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline void SetEC2InstanceIdsToTerminate(const Aws::Vector<Aws::String>& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate = value; }

    /**
     * <p>The EC2 InstanceIds to terminate. Once you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline void SetEC2InstanceIdsToTerminate(Aws::Vector<Aws::String>&& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate = value; }

    /**
     * <p>The EC2 InstanceIds to terminate. Once you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline InstanceGroupModifyConfig& WithEC2InstanceIdsToTerminate(const Aws::Vector<Aws::String>& value) { SetEC2InstanceIdsToTerminate(value); return *this;}

    /**
     * <p>The EC2 InstanceIds to terminate. Once you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline InstanceGroupModifyConfig& WithEC2InstanceIdsToTerminate(Aws::Vector<Aws::String>&& value) { SetEC2InstanceIdsToTerminate(value); return *this;}

    /**
     * <p>The EC2 InstanceIds to terminate. Once you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline InstanceGroupModifyConfig& AddEC2InstanceIdsToTerminate(const Aws::String& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate.push_back(value); return *this; }

    /**
     * <p>The EC2 InstanceIds to terminate. Once you terminate the instances, the
     * instance group will not return to its original requested size.</p>
     */
    inline InstanceGroupModifyConfig& AddEC2InstanceIdsToTerminate(Aws::String&& value) { m_eC2InstanceIdsToTerminateHasBeenSet = true; m_eC2InstanceIdsToTerminate.push_back(value); return *this; }

    /**
     * <p>The EC2 InstanceIds to terminate. Once you terminate the instances, the
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
    inline void SetShrinkPolicy(const ShrinkPolicy& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = value; }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline void SetShrinkPolicy(ShrinkPolicy&& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = value; }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline InstanceGroupModifyConfig& WithShrinkPolicy(const ShrinkPolicy& value) { SetShrinkPolicy(value); return *this;}

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline InstanceGroupModifyConfig& WithShrinkPolicy(ShrinkPolicy&& value) { SetShrinkPolicy(value); return *this;}

  private:
    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet;
    int m_instanceCount;
    bool m_instanceCountHasBeenSet;
    Aws::Vector<Aws::String> m_eC2InstanceIdsToTerminate;
    bool m_eC2InstanceIdsToTerminateHasBeenSet;
    ShrinkPolicy m_shrinkPolicy;
    bool m_shrinkPolicyHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
