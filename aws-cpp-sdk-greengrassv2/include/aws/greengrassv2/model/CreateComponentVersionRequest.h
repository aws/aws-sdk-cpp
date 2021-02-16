/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/Array.h>
#include <aws/greengrassv2/model/LambdaFunctionRecipeSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASSV2_API CreateComponentVersionRequest : public GreengrassV2Request
  {
  public:
    CreateComponentVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComponentVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The recipe to use to create the component. The recipe defines the component's
     * metadata, parameters, dependencies, lifecycle, artifacts, and platform
     * compatibility.</p> <p>You must specify either <code>inlineRecipe</code> or
     * <code>lambdaFunction</code>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetInlineRecipe() const{ return m_inlineRecipe; }

    /**
     * <p>The recipe to use to create the component. The recipe defines the component's
     * metadata, parameters, dependencies, lifecycle, artifacts, and platform
     * compatibility.</p> <p>You must specify either <code>inlineRecipe</code> or
     * <code>lambdaFunction</code>.</p>
     */
    inline bool InlineRecipeHasBeenSet() const { return m_inlineRecipeHasBeenSet; }

    /**
     * <p>The recipe to use to create the component. The recipe defines the component's
     * metadata, parameters, dependencies, lifecycle, artifacts, and platform
     * compatibility.</p> <p>You must specify either <code>inlineRecipe</code> or
     * <code>lambdaFunction</code>.</p>
     */
    inline void SetInlineRecipe(const Aws::Utils::ByteBuffer& value) { m_inlineRecipeHasBeenSet = true; m_inlineRecipe = value; }

    /**
     * <p>The recipe to use to create the component. The recipe defines the component's
     * metadata, parameters, dependencies, lifecycle, artifacts, and platform
     * compatibility.</p> <p>You must specify either <code>inlineRecipe</code> or
     * <code>lambdaFunction</code>.</p>
     */
    inline void SetInlineRecipe(Aws::Utils::ByteBuffer&& value) { m_inlineRecipeHasBeenSet = true; m_inlineRecipe = std::move(value); }

    /**
     * <p>The recipe to use to create the component. The recipe defines the component's
     * metadata, parameters, dependencies, lifecycle, artifacts, and platform
     * compatibility.</p> <p>You must specify either <code>inlineRecipe</code> or
     * <code>lambdaFunction</code>.</p>
     */
    inline CreateComponentVersionRequest& WithInlineRecipe(const Aws::Utils::ByteBuffer& value) { SetInlineRecipe(value); return *this;}

    /**
     * <p>The recipe to use to create the component. The recipe defines the component's
     * metadata, parameters, dependencies, lifecycle, artifacts, and platform
     * compatibility.</p> <p>You must specify either <code>inlineRecipe</code> or
     * <code>lambdaFunction</code>.</p>
     */
    inline CreateComponentVersionRequest& WithInlineRecipe(Aws::Utils::ByteBuffer&& value) { SetInlineRecipe(std::move(value)); return *this;}


    /**
     * <p>The parameters to create a component from a Lambda function.</p> <p>You must
     * specify either <code>inlineRecipe</code> or <code>lambdaFunction</code>.</p>
     */
    inline const LambdaFunctionRecipeSource& GetLambdaFunction() const{ return m_lambdaFunction; }

    /**
     * <p>The parameters to create a component from a Lambda function.</p> <p>You must
     * specify either <code>inlineRecipe</code> or <code>lambdaFunction</code>.</p>
     */
    inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }

    /**
     * <p>The parameters to create a component from a Lambda function.</p> <p>You must
     * specify either <code>inlineRecipe</code> or <code>lambdaFunction</code>.</p>
     */
    inline void SetLambdaFunction(const LambdaFunctionRecipeSource& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = value; }

    /**
     * <p>The parameters to create a component from a Lambda function.</p> <p>You must
     * specify either <code>inlineRecipe</code> or <code>lambdaFunction</code>.</p>
     */
    inline void SetLambdaFunction(LambdaFunctionRecipeSource&& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = std::move(value); }

    /**
     * <p>The parameters to create a component from a Lambda function.</p> <p>You must
     * specify either <code>inlineRecipe</code> or <code>lambdaFunction</code>.</p>
     */
    inline CreateComponentVersionRequest& WithLambdaFunction(const LambdaFunctionRecipeSource& value) { SetLambdaFunction(value); return *this;}

    /**
     * <p>The parameters to create a component from a Lambda function.</p> <p>You must
     * specify either <code>inlineRecipe</code> or <code>lambdaFunction</code>.</p>
     */
    inline CreateComponentVersionRequest& WithLambdaFunction(LambdaFunctionRecipeSource&& value) { SetLambdaFunction(std::move(value)); return *this;}


    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateComponentVersionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateComponentVersionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateComponentVersionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateComponentVersionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateComponentVersionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateComponentVersionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateComponentVersionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateComponentVersionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>AWS IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateComponentVersionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Utils::ByteBuffer m_inlineRecipe;
    bool m_inlineRecipeHasBeenSet;

    LambdaFunctionRecipeSource m_lambdaFunction;
    bool m_lambdaFunctionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
