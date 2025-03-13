/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/AutoScalingGroupProvider.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class CreateCapacityProviderRequest : public ECSRequest
  {
  public:
    AWS_ECS_API CreateCapacityProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityProvider"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the capacity provider. Up to 255 characters are allowed. They
     * include letters (both upper and lowercase letters), numbers, underscores (_),
     * and hyphens (-). The name can't be prefixed with "<code>aws</code>",
     * "<code>ecs</code>", or "<code>fargate</code>".</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCapacityProviderRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the Auto Scaling group for the capacity provider.</p>
     */
    inline const AutoScalingGroupProvider& GetAutoScalingGroupProvider() const { return m_autoScalingGroupProvider; }
    inline bool AutoScalingGroupProviderHasBeenSet() const { return m_autoScalingGroupProviderHasBeenSet; }
    template<typename AutoScalingGroupProviderT = AutoScalingGroupProvider>
    void SetAutoScalingGroupProvider(AutoScalingGroupProviderT&& value) { m_autoScalingGroupProviderHasBeenSet = true; m_autoScalingGroupProvider = std::forward<AutoScalingGroupProviderT>(value); }
    template<typename AutoScalingGroupProviderT = AutoScalingGroupProvider>
    CreateCapacityProviderRequest& WithAutoScalingGroupProvider(AutoScalingGroupProviderT&& value) { SetAutoScalingGroupProvider(std::forward<AutoScalingGroupProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the capacity provider to categorize and
     * organize them more conveniently. Each tag consists of a key and an optional
     * value. You define both of them.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCapacityProviderRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCapacityProviderRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AutoScalingGroupProvider m_autoScalingGroupProvider;
    bool m_autoScalingGroupProviderHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
