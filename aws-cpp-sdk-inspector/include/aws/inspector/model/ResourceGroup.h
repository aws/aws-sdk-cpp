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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about a resource group. The resource group defines a set
   * of tags that, when queried, identify the AWS resources that comprise the
   * application.</p> <p>This data type is used as the response element in the
   * <a>DescribeResourceGroup</a> action.</p>
   */
  class AWS_INSPECTOR_API ResourceGroup
  {
  public:
    ResourceGroup();
    ResourceGroup(const Aws::Utils::Json::JsonValue& jsonValue);
    ResourceGroup& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN of the resource group. </p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }

    /**
     * <p>The ARN of the resource group. </p>
     */
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN of the resource group. </p>
     */
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN of the resource group. </p>
     */
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn.assign(value); }

    /**
     * <p>The ARN of the resource group. </p>
     */
    inline ResourceGroup& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN of the resource group. </p>
     */
    inline ResourceGroup& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN of the resource group. </p>
     */
    inline ResourceGroup& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The tags (key and value pairs) of the resource group.</p> <p>This data type
     * property is used in the <a>CreateResourceGroup</a> action.</p> <p>A collection
     * of keys and an array of possible values in JSON format.</p> <p>For example, [{
     * "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline const Aws::String& GetResourceGroupTags() const{ return m_resourceGroupTags; }

    /**
     * <p>The tags (key and value pairs) of the resource group.</p> <p>This data type
     * property is used in the <a>CreateResourceGroup</a> action.</p> <p>A collection
     * of keys and an array of possible values in JSON format.</p> <p>For example, [{
     * "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline void SetResourceGroupTags(const Aws::String& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags = value; }

    /**
     * <p>The tags (key and value pairs) of the resource group.</p> <p>This data type
     * property is used in the <a>CreateResourceGroup</a> action.</p> <p>A collection
     * of keys and an array of possible values in JSON format.</p> <p>For example, [{
     * "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline void SetResourceGroupTags(Aws::String&& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags = value; }

    /**
     * <p>The tags (key and value pairs) of the resource group.</p> <p>This data type
     * property is used in the <a>CreateResourceGroup</a> action.</p> <p>A collection
     * of keys and an array of possible values in JSON format.</p> <p>For example, [{
     * "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline void SetResourceGroupTags(const char* value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags.assign(value); }

    /**
     * <p>The tags (key and value pairs) of the resource group.</p> <p>This data type
     * property is used in the <a>CreateResourceGroup</a> action.</p> <p>A collection
     * of keys and an array of possible values in JSON format.</p> <p>For example, [{
     * "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline ResourceGroup& WithResourceGroupTags(const Aws::String& value) { SetResourceGroupTags(value); return *this;}

    /**
     * <p>The tags (key and value pairs) of the resource group.</p> <p>This data type
     * property is used in the <a>CreateResourceGroup</a> action.</p> <p>A collection
     * of keys and an array of possible values in JSON format.</p> <p>For example, [{
     * "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline ResourceGroup& WithResourceGroupTags(Aws::String&& value) { SetResourceGroupTags(value); return *this;}

    /**
     * <p>The tags (key and value pairs) of the resource group.</p> <p>This data type
     * property is used in the <a>CreateResourceGroup</a> action.</p> <p>A collection
     * of keys and an array of possible values in JSON format.</p> <p>For example, [{
     * "key1" : ["Value1","Value2"]},{"Key2": ["Value3"]}]</p>
     */
    inline ResourceGroup& WithResourceGroupTags(const char* value) { SetResourceGroupTags(value); return *this;}

  private:
    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet;
    Aws::String m_resourceGroupTags;
    bool m_resourceGroupTagsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
