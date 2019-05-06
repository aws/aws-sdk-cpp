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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/ResourceGroupTag.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A collection of keys and an array of possible values,
     * '[{"key":"key1","values":["Value1","Value2"]},{"key":"Key2","values":["Value3"]}]'.</p>
     * <p>For example,'[{"key":"Name","values":["TestEC2Instance"]}]'.</p>
     */
    inline const Aws::Vector<ResourceGroupTag>& GetResourceGroupTags() const{ return m_resourceGroupTags; }

    /**
     * <p>A collection of keys and an array of possible values,
     * '[{"key":"key1","values":["Value1","Value2"]},{"key":"Key2","values":["Value3"]}]'.</p>
     * <p>For example,'[{"key":"Name","values":["TestEC2Instance"]}]'.</p>
     */
    inline bool ResourceGroupTagsHasBeenSet() const { return m_resourceGroupTagsHasBeenSet; }

    /**
     * <p>A collection of keys and an array of possible values,
     * '[{"key":"key1","values":["Value1","Value2"]},{"key":"Key2","values":["Value3"]}]'.</p>
     * <p>For example,'[{"key":"Name","values":["TestEC2Instance"]}]'.</p>
     */
    inline void SetResourceGroupTags(const Aws::Vector<ResourceGroupTag>& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags = value; }

    /**
     * <p>A collection of keys and an array of possible values,
     * '[{"key":"key1","values":["Value1","Value2"]},{"key":"Key2","values":["Value3"]}]'.</p>
     * <p>For example,'[{"key":"Name","values":["TestEC2Instance"]}]'.</p>
     */
    inline void SetResourceGroupTags(Aws::Vector<ResourceGroupTag>&& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags = std::move(value); }

    /**
     * <p>A collection of keys and an array of possible values,
     * '[{"key":"key1","values":["Value1","Value2"]},{"key":"Key2","values":["Value3"]}]'.</p>
     * <p>For example,'[{"key":"Name","values":["TestEC2Instance"]}]'.</p>
     */
    inline CreateResourceGroupRequest& WithResourceGroupTags(const Aws::Vector<ResourceGroupTag>& value) { SetResourceGroupTags(value); return *this;}

    /**
     * <p>A collection of keys and an array of possible values,
     * '[{"key":"key1","values":["Value1","Value2"]},{"key":"Key2","values":["Value3"]}]'.</p>
     * <p>For example,'[{"key":"Name","values":["TestEC2Instance"]}]'.</p>
     */
    inline CreateResourceGroupRequest& WithResourceGroupTags(Aws::Vector<ResourceGroupTag>&& value) { SetResourceGroupTags(std::move(value)); return *this;}

    /**
     * <p>A collection of keys and an array of possible values,
     * '[{"key":"key1","values":["Value1","Value2"]},{"key":"Key2","values":["Value3"]}]'.</p>
     * <p>For example,'[{"key":"Name","values":["TestEC2Instance"]}]'.</p>
     */
    inline CreateResourceGroupRequest& AddResourceGroupTags(const ResourceGroupTag& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags.push_back(value); return *this; }

    /**
     * <p>A collection of keys and an array of possible values,
     * '[{"key":"key1","values":["Value1","Value2"]},{"key":"Key2","values":["Value3"]}]'.</p>
     * <p>For example,'[{"key":"Name","values":["TestEC2Instance"]}]'.</p>
     */
    inline CreateResourceGroupRequest& AddResourceGroupTags(ResourceGroupTag&& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResourceGroupTag> m_resourceGroupTags;
    bool m_resourceGroupTagsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
