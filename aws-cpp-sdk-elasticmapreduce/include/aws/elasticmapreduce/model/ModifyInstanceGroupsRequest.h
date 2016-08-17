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
#include <aws/elasticmapreduce/model/InstanceGroupModifyConfig.h>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>Change the size of some instance groups.</p>
   */
  class AWS_EMR_API ModifyInstanceGroupsRequest : public EMRRequest
  {
  public:
    ModifyInstanceGroupsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Instance groups to change.</p>
     */
    inline const Aws::Vector<InstanceGroupModifyConfig>& GetInstanceGroups() const{ return m_instanceGroups; }

    /**
     * <p>Instance groups to change.</p>
     */
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroupModifyConfig>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Instance groups to change.</p>
     */
    inline void SetInstanceGroups(Aws::Vector<InstanceGroupModifyConfig>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Instance groups to change.</p>
     */
    inline ModifyInstanceGroupsRequest& WithInstanceGroups(const Aws::Vector<InstanceGroupModifyConfig>& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Instance groups to change.</p>
     */
    inline ModifyInstanceGroupsRequest& WithInstanceGroups(Aws::Vector<InstanceGroupModifyConfig>&& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Instance groups to change.</p>
     */
    inline ModifyInstanceGroupsRequest& AddInstanceGroups(const InstanceGroupModifyConfig& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>Instance groups to change.</p>
     */
    inline ModifyInstanceGroupsRequest& AddInstanceGroups(InstanceGroupModifyConfig&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

  private:
    Aws::Vector<InstanceGroupModifyConfig> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
