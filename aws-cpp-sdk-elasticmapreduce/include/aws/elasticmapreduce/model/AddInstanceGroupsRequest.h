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
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceGroupConfig.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>Input to an AddInstanceGroups call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceGroupsInput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API AddInstanceGroupsRequest : public EMRRequest
  {
  public:
    AddInstanceGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddInstanceGroups"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Instance groups to add.</p>
     */
    inline const Aws::Vector<InstanceGroupConfig>& GetInstanceGroups() const{ return m_instanceGroups; }

    /**
     * <p>Instance groups to add.</p>
     */
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }

    /**
     * <p>Instance groups to add.</p>
     */
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroupConfig>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Instance groups to add.</p>
     */
    inline void SetInstanceGroups(Aws::Vector<InstanceGroupConfig>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::move(value); }

    /**
     * <p>Instance groups to add.</p>
     */
    inline AddInstanceGroupsRequest& WithInstanceGroups(const Aws::Vector<InstanceGroupConfig>& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Instance groups to add.</p>
     */
    inline AddInstanceGroupsRequest& WithInstanceGroups(Aws::Vector<InstanceGroupConfig>&& value) { SetInstanceGroups(std::move(value)); return *this;}

    /**
     * <p>Instance groups to add.</p>
     */
    inline AddInstanceGroupsRequest& AddInstanceGroups(const InstanceGroupConfig& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>Instance groups to add.</p>
     */
    inline AddInstanceGroupsRequest& AddInstanceGroups(InstanceGroupConfig&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline bool JobFlowIdHasBeenSet() const { return m_jobFlowIdHasBeenSet; }

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = value; }

    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = std::move(value); }

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
    inline AddInstanceGroupsRequest& WithJobFlowId(Aws::String&& value) { SetJobFlowId(std::move(value)); return *this;}

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
