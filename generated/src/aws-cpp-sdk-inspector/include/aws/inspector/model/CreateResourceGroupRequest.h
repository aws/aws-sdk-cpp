/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateResourceGroupRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API CreateResourceGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceGroup"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A collection of keys and an array of possible values,
     * '[{"key":"key1","values":["Value1","Value2"]},{"key":"Key2","values":["Value3"]}]'.</p>
     * <p>For example,'[{"key":"Name","values":["TestEC2Instance"]}]'.</p>
     */
    inline const Aws::Vector<ResourceGroupTag>& GetResourceGroupTags() const { return m_resourceGroupTags; }
    inline bool ResourceGroupTagsHasBeenSet() const { return m_resourceGroupTagsHasBeenSet; }
    template<typename ResourceGroupTagsT = Aws::Vector<ResourceGroupTag>>
    void SetResourceGroupTags(ResourceGroupTagsT&& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags = std::forward<ResourceGroupTagsT>(value); }
    template<typename ResourceGroupTagsT = Aws::Vector<ResourceGroupTag>>
    CreateResourceGroupRequest& WithResourceGroupTags(ResourceGroupTagsT&& value) { SetResourceGroupTags(std::forward<ResourceGroupTagsT>(value)); return *this;}
    template<typename ResourceGroupTagsT = ResourceGroupTag>
    CreateResourceGroupRequest& AddResourceGroupTags(ResourceGroupTagsT&& value) { m_resourceGroupTagsHasBeenSet = true; m_resourceGroupTags.emplace_back(std::forward<ResourceGroupTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ResourceGroupTag> m_resourceGroupTags;
    bool m_resourceGroupTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
