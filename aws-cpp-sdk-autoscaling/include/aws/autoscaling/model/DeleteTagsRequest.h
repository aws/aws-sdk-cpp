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
  class AWS_AUTOSCALING_API DeleteTagsRequest : public AutoScalingRequest
  {
  public:
    DeleteTagsRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. Valid values are: Resource type = <i>auto-scaling-group</i>, Resource ID = <i>AutoScalingGroupName</i>, key=<i>value</i>, value=<i>value</i>, propagate=<i>true</i> or <i>false</i>.</p>
    */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /*
     <p>Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. Valid values are: Resource type = <i>auto-scaling-group</i>, Resource ID = <i>AutoScalingGroupName</i>, key=<i>value</i>, value=<i>value</i>, propagate=<i>true</i> or <i>false</i>.</p>
    */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /*
     <p>Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. Valid values are: Resource type = <i>auto-scaling-group</i>, Resource ID = <i>AutoScalingGroupName</i>, key=<i>value</i>, value=<i>value</i>, propagate=<i>true</i> or <i>false</i>.</p>
    */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /*
     <p>Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. Valid values are: Resource type = <i>auto-scaling-group</i>, Resource ID = <i>AutoScalingGroupName</i>, key=<i>value</i>, value=<i>value</i>, propagate=<i>true</i> or <i>false</i>.</p>
    */
    inline DeleteTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /*
     <p>Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. Valid values are: Resource type = <i>auto-scaling-group</i>, Resource ID = <i>AutoScalingGroupName</i>, key=<i>value</i>, value=<i>value</i>, propagate=<i>true</i> or <i>false</i>.</p>
    */
    inline DeleteTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /*
     <p>Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. Valid values are: Resource type = <i>auto-scaling-group</i>, Resource ID = <i>AutoScalingGroupName</i>, key=<i>value</i>, value=<i>value</i>, propagate=<i>true</i> or <i>false</i>.</p>
    */
    inline DeleteTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /*
     <p>Each tag should be defined by its resource type, resource ID, key, value, and a propagate flag. Valid values are: Resource type = <i>auto-scaling-group</i>, Resource ID = <i>AutoScalingGroupName</i>, key=<i>value</i>, value=<i>value</i>, propagate=<i>true</i> or <i>false</i>.</p>
    */
    inline DeleteTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
