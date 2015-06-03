/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/Tag.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /*
  */
  class AWS_AUTOSCALING_API CreateOrUpdateTagsRequest : public AutoScalingRequest
  {
  public:
    CreateOrUpdateTagsRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The tag to be created or updated. Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. The resource type and resource ID identify the type and name of resource for which the tag is created. Currently, <code>auto-scaling-group</code> is the only supported resource type. The valid value for the resource ID is <i>groupname</i>. </p> <p>The <code>PropagateAtLaunch</code> flag defines whether the new tag will be applied to instances launched by the group. Valid values are <code>true</code> or <code>false</code>. However, instances that are already running will not get the new or updated tag. Likewise, when you modify a tag, the updated version will be applied only to new instances launched by the group after the change. Running instances that had the previous version of the tag will continue to have the older tag. </p> <p>When you create a tag and a tag of the same name already exists, the operation overwrites the previous tag definition, but you will not get an error message. </p>
    */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    /*
     <p> The tag to be created or updated. Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. The resource type and resource ID identify the type and name of resource for which the tag is created. Currently, <code>auto-scaling-group</code> is the only supported resource type. The valid value for the resource ID is <i>groupname</i>. </p> <p>The <code>PropagateAtLaunch</code> flag defines whether the new tag will be applied to instances launched by the group. Valid values are <code>true</code> or <code>false</code>. However, instances that are already running will not get the new or updated tag. Likewise, when you modify a tag, the updated version will be applied only to new instances launched by the group after the change. Running instances that had the previous version of the tag will continue to have the older tag. </p> <p>When you create a tag and a tag of the same name already exists, the operation overwrites the previous tag definition, but you will not get an error message. </p>
    */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /*
     <p> The tag to be created or updated. Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. The resource type and resource ID identify the type and name of resource for which the tag is created. Currently, <code>auto-scaling-group</code> is the only supported resource type. The valid value for the resource ID is <i>groupname</i>. </p> <p>The <code>PropagateAtLaunch</code> flag defines whether the new tag will be applied to instances launched by the group. Valid values are <code>true</code> or <code>false</code>. However, instances that are already running will not get the new or updated tag. Likewise, when you modify a tag, the updated version will be applied only to new instances launched by the group after the change. Running instances that had the previous version of the tag will continue to have the older tag. </p> <p>When you create a tag and a tag of the same name already exists, the operation overwrites the previous tag definition, but you will not get an error message. </p>
    */
    inline CreateOrUpdateTagsRequest&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /*
     <p> The tag to be created or updated. Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. The resource type and resource ID identify the type and name of resource for which the tag is created. Currently, <code>auto-scaling-group</code> is the only supported resource type. The valid value for the resource ID is <i>groupname</i>. </p> <p>The <code>PropagateAtLaunch</code> flag defines whether the new tag will be applied to instances launched by the group. Valid values are <code>true</code> or <code>false</code>. However, instances that are already running will not get the new or updated tag. Likewise, when you modify a tag, the updated version will be applied only to new instances launched by the group after the change. Running instances that had the previous version of the tag will continue to have the older tag. </p> <p>When you create a tag and a tag of the same name already exists, the operation overwrites the previous tag definition, but you will not get an error message. </p>
    */
    inline CreateOrUpdateTagsRequest& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

  private:
    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
