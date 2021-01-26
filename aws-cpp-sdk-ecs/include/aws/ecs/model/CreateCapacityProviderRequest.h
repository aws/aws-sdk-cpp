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
  class AWS_ECS_API CreateCapacityProviderRequest : public ECSRequest
  {
  public:
    CreateCapacityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityProvider"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the capacity provider. Up to 255 characters are allowed,
     * including letters (upper and lowercase), numbers, underscores, and hyphens. The
     * name cannot be prefixed with "<code>aws</code>", "<code>ecs</code>", or
     * "<code>fargate</code>".</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the capacity provider. Up to 255 characters are allowed,
     * including letters (upper and lowercase), numbers, underscores, and hyphens. The
     * name cannot be prefixed with "<code>aws</code>", "<code>ecs</code>", or
     * "<code>fargate</code>".</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the capacity provider. Up to 255 characters are allowed,
     * including letters (upper and lowercase), numbers, underscores, and hyphens. The
     * name cannot be prefixed with "<code>aws</code>", "<code>ecs</code>", or
     * "<code>fargate</code>".</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the capacity provider. Up to 255 characters are allowed,
     * including letters (upper and lowercase), numbers, underscores, and hyphens. The
     * name cannot be prefixed with "<code>aws</code>", "<code>ecs</code>", or
     * "<code>fargate</code>".</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the capacity provider. Up to 255 characters are allowed,
     * including letters (upper and lowercase), numbers, underscores, and hyphens. The
     * name cannot be prefixed with "<code>aws</code>", "<code>ecs</code>", or
     * "<code>fargate</code>".</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the capacity provider. Up to 255 characters are allowed,
     * including letters (upper and lowercase), numbers, underscores, and hyphens. The
     * name cannot be prefixed with "<code>aws</code>", "<code>ecs</code>", or
     * "<code>fargate</code>".</p>
     */
    inline CreateCapacityProviderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the capacity provider. Up to 255 characters are allowed,
     * including letters (upper and lowercase), numbers, underscores, and hyphens. The
     * name cannot be prefixed with "<code>aws</code>", "<code>ecs</code>", or
     * "<code>fargate</code>".</p>
     */
    inline CreateCapacityProviderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the capacity provider. Up to 255 characters are allowed,
     * including letters (upper and lowercase), numbers, underscores, and hyphens. The
     * name cannot be prefixed with "<code>aws</code>", "<code>ecs</code>", or
     * "<code>fargate</code>".</p>
     */
    inline CreateCapacityProviderRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The details of the Auto Scaling group for the capacity provider.</p>
     */
    inline const AutoScalingGroupProvider& GetAutoScalingGroupProvider() const{ return m_autoScalingGroupProvider; }

    /**
     * <p>The details of the Auto Scaling group for the capacity provider.</p>
     */
    inline bool AutoScalingGroupProviderHasBeenSet() const { return m_autoScalingGroupProviderHasBeenSet; }

    /**
     * <p>The details of the Auto Scaling group for the capacity provider.</p>
     */
    inline void SetAutoScalingGroupProvider(const AutoScalingGroupProvider& value) { m_autoScalingGroupProviderHasBeenSet = true; m_autoScalingGroupProvider = value; }

    /**
     * <p>The details of the Auto Scaling group for the capacity provider.</p>
     */
    inline void SetAutoScalingGroupProvider(AutoScalingGroupProvider&& value) { m_autoScalingGroupProviderHasBeenSet = true; m_autoScalingGroupProvider = std::move(value); }

    /**
     * <p>The details of the Auto Scaling group for the capacity provider.</p>
     */
    inline CreateCapacityProviderRequest& WithAutoScalingGroupProvider(const AutoScalingGroupProvider& value) { SetAutoScalingGroupProvider(value); return *this;}

    /**
     * <p>The details of the Auto Scaling group for the capacity provider.</p>
     */
    inline CreateCapacityProviderRequest& WithAutoScalingGroupProvider(AutoScalingGroupProvider&& value) { SetAutoScalingGroupProvider(std::move(value)); return *this;}


    /**
     * <p>The metadata that you apply to the capacity provider to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for AWS use. You
     * cannot edit or delete tag keys or values with this prefix. Tags with this prefix
     * do not count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the capacity provider to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for AWS use. You
     * cannot edit or delete tag keys or values with this prefix. Tags with this prefix
     * do not count against your tags per resource limit.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the capacity provider to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for AWS use. You
     * cannot edit or delete tag keys or values with this prefix. Tags with this prefix
     * do not count against your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the capacity provider to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for AWS use. You
     * cannot edit or delete tag keys or values with this prefix. Tags with this prefix
     * do not count against your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the capacity provider to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for AWS use. You
     * cannot edit or delete tag keys or values with this prefix. Tags with this prefix
     * do not count against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateCapacityProviderRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the capacity provider to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for AWS use. You
     * cannot edit or delete tag keys or values with this prefix. Tags with this prefix
     * do not count against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateCapacityProviderRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the capacity provider to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for AWS use. You
     * cannot edit or delete tag keys or values with this prefix. Tags with this prefix
     * do not count against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateCapacityProviderRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the capacity provider to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for AWS use. You
     * cannot edit or delete tag keys or values with this prefix. Tags with this prefix
     * do not count against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateCapacityProviderRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    AutoScalingGroupProvider m_autoScalingGroupProvider;
    bool m_autoScalingGroupProviderHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
