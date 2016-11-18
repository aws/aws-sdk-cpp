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
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceGroupConfig.h>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>Input to an AddInstanceGroups call.</p>
   */
  class AWS_EMR_API AddInstanceGroupsRequest : public EMRRequest
  {
  public:
    AddInstanceGroupsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Instance Groups to add.</p>
     */
    inline const Aws::Vector<InstanceGroupConfig>& GetInstanceGroups() const{ return m_instanceGroups; }

    /**
     * <p>Instance Groups to add.</p>
     */
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroupConfig>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Instance Groups to add.</p>
     */
    inline void SetInstanceGroups(Aws::Vector<InstanceGroupConfig>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Instance Groups to add.</p>
     */
    inline AddInstanceGroupsRequest& WithInstanceGroups(const Aws::Vector<InstanceGroupConfig>& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Instance Groups to add.</p>
     */
    inline AddInstanceGroupsRequest& WithInstanceGroups(Aws::Vector<InstanceGroupConfig>&& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Instance Groups to add.</p>
     */
    inline AddInstanceGroupsRequest& AddInstanceGroups(const InstanceGroupConfig& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>Instance Groups to add.</p>
     */
    inline AddInstanceGroupsRequest& AddInstanceGroups(InstanceGroupConfig&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = value; }

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = value; }

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline void SetJobFlowId(const char* value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId.assign(value); }

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline AddInstanceGroupsRequest& WithJobFlowId(const Aws::String& value) { SetJobFlowId(value); return *this;}

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline AddInstanceGroupsRequest& WithJobFlowId(Aws::String&& value) { SetJobFlowId(value); return *this;}

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline AddInstanceGroupsRequest& WithJobFlowId(const char* value) { SetJobFlowId(value); return *this;}

  private:
    Aws::Vector<InstanceGroupConfig> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet;
    Aws::String m_jobFlowId;
    bool m_jobFlowIdHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
