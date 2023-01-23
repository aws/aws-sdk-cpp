/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/RecipeOutputFormat.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GreengrassV2
{
namespace Model
{
  class GetComponentResult
  {
  public:
    AWS_GREENGRASSV2_API GetComponentResult();
    AWS_GREENGRASSV2_API GetComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API GetComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The format of the recipe.</p>
     */
    inline const RecipeOutputFormat& GetRecipeOutputFormat() const{ return m_recipeOutputFormat; }

    /**
     * <p>The format of the recipe.</p>
     */
    inline void SetRecipeOutputFormat(const RecipeOutputFormat& value) { m_recipeOutputFormat = value; }

    /**
     * <p>The format of the recipe.</p>
     */
    inline void SetRecipeOutputFormat(RecipeOutputFormat&& value) { m_recipeOutputFormat = std::move(value); }

    /**
     * <p>The format of the recipe.</p>
     */
    inline GetComponentResult& WithRecipeOutputFormat(const RecipeOutputFormat& value) { SetRecipeOutputFormat(value); return *this;}

    /**
     * <p>The format of the recipe.</p>
     */
    inline GetComponentResult& WithRecipeOutputFormat(RecipeOutputFormat&& value) { SetRecipeOutputFormat(std::move(value)); return *this;}


    /**
     * <p>The recipe of the component version.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetRecipe() const{ return m_recipe; }

    /**
     * <p>The recipe of the component version.</p>
     */
    inline void SetRecipe(const Aws::Utils::ByteBuffer& value) { m_recipe = value; }

    /**
     * <p>The recipe of the component version.</p>
     */
    inline void SetRecipe(Aws::Utils::ByteBuffer&& value) { m_recipe = std::move(value); }

    /**
     * <p>The recipe of the component version.</p>
     */
    inline GetComponentResult& WithRecipe(const Aws::Utils::ByteBuffer& value) { SetRecipe(value); return *this;}

    /**
     * <p>The recipe of the component version.</p>
     */
    inline GetComponentResult& WithRecipe(Aws::Utils::ByteBuffer&& value) { SetRecipe(std::move(value)); return *this;}


    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetComponentResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetComponentResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetComponentResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetComponentResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetComponentResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetComponentResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetComponentResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetComponentResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetComponentResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    RecipeOutputFormat m_recipeOutputFormat;

    Aws::Utils::ByteBuffer m_recipe;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
