/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>A reference to a Glue DataBrew recipe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RecipeReference">AWS
   * API Reference</a></p>
   */
  class RecipeReference
  {
  public:
    AWS_GLUE_API RecipeReference();
    AWS_GLUE_API RecipeReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RecipeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the DataBrew recipe.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }

    /**
     * <p>The ARN of the DataBrew recipe.</p>
     */
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }

    /**
     * <p>The ARN of the DataBrew recipe.</p>
     */
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }

    /**
     * <p>The ARN of the DataBrew recipe.</p>
     */
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }

    /**
     * <p>The ARN of the DataBrew recipe.</p>
     */
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }

    /**
     * <p>The ARN of the DataBrew recipe.</p>
     */
    inline RecipeReference& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}

    /**
     * <p>The ARN of the DataBrew recipe.</p>
     */
    inline RecipeReference& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the DataBrew recipe.</p>
     */
    inline RecipeReference& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}


    /**
     * <p>The RecipeVersion of the DataBrew recipe.</p>
     */
    inline const Aws::String& GetRecipeVersion() const{ return m_recipeVersion; }

    /**
     * <p>The RecipeVersion of the DataBrew recipe.</p>
     */
    inline bool RecipeVersionHasBeenSet() const { return m_recipeVersionHasBeenSet; }

    /**
     * <p>The RecipeVersion of the DataBrew recipe.</p>
     */
    inline void SetRecipeVersion(const Aws::String& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = value; }

    /**
     * <p>The RecipeVersion of the DataBrew recipe.</p>
     */
    inline void SetRecipeVersion(Aws::String&& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = std::move(value); }

    /**
     * <p>The RecipeVersion of the DataBrew recipe.</p>
     */
    inline void SetRecipeVersion(const char* value) { m_recipeVersionHasBeenSet = true; m_recipeVersion.assign(value); }

    /**
     * <p>The RecipeVersion of the DataBrew recipe.</p>
     */
    inline RecipeReference& WithRecipeVersion(const Aws::String& value) { SetRecipeVersion(value); return *this;}

    /**
     * <p>The RecipeVersion of the DataBrew recipe.</p>
     */
    inline RecipeReference& WithRecipeVersion(Aws::String&& value) { SetRecipeVersion(std::move(value)); return *this;}

    /**
     * <p>The RecipeVersion of the DataBrew recipe.</p>
     */
    inline RecipeReference& WithRecipeVersion(const char* value) { SetRecipeVersion(value); return *this;}

  private:

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    Aws::String m_recipeVersion;
    bool m_recipeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
