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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API CreateResourceGroupRequest : public InspectorRequest
  {
  public:
    CreateResourceGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A collection of keys and an array of possible values in JSON format.</p>
     * <p>For example, [{ "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline const Aws::String& GetResourceGroupTags() const{ return m_resourceGroupTags; }

    /**
     * <p>A collection of keys and an array of possible values in JSON format.</p>
     * <p>For example, [{ "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline void SetResourceGroupTags(const Aws::String& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags = value; }

    /**
     * <p>A collection of keys and an array of possible values in JSON format.</p>
     * <p>For example, [{ "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline void SetResourceGroupTags(Aws::String&& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags = value; }

    /**
     * <p>A collection of keys and an array of possible values in JSON format.</p>
     * <p>For example, [{ "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline void SetResourceGroupTags(const char* value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags.assign(value); }

    /**
     * <p>A collection of keys and an array of possible values in JSON format.</p>
     * <p>For example, [{ "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline CreateResourceGroupRequest& WithResourceGroupTags(const Aws::String& value) { SetResourceGroupTags(value); return *this;}

    /**
     * <p>A collection of keys and an array of possible values in JSON format.</p>
     * <p>For example, [{ "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline CreateResourceGroupRequest& WithResourceGroupTags(Aws::String&& value) { SetResourceGroupTags(value); return *this;}

    /**
     * <p>A collection of keys and an array of possible values in JSON format.</p>
     * <p>For example, [{ "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline CreateResourceGroupRequest& WithResourceGroupTags(const char* value) { SetResourceGroupTags(value); return *this;}

  private:
    Aws::String m_resourceGroupTags;
    bool m_resourceGroupTagsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
