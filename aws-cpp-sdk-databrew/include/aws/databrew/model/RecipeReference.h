/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents the name and version of a DataBrew recipe.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/RecipeReference">AWS
   * API Reference</a></p>
   */
  class RecipeReference
  {
  public:
    AWS_GLUEDATABREW_API RecipeReference();
    AWS_GLUEDATABREW_API RecipeReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API RecipeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the recipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recipe.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the recipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the recipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the recipe.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the recipe.</p>
     */
    inline RecipeReference& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recipe.</p>
     */
    inline RecipeReference& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recipe.</p>
     */
    inline RecipeReference& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier for the version for the recipe. </p>
     */
    inline const Aws::String& GetRecipeVersion() const{ return m_recipeVersion; }

    /**
     * <p>The identifier for the version for the recipe. </p>
     */
    inline bool RecipeVersionHasBeenSet() const { return m_recipeVersionHasBeenSet; }

    /**
     * <p>The identifier for the version for the recipe. </p>
     */
    inline void SetRecipeVersion(const Aws::String& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = value; }

    /**
     * <p>The identifier for the version for the recipe. </p>
     */
    inline void SetRecipeVersion(Aws::String&& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = std::move(value); }

    /**
     * <p>The identifier for the version for the recipe. </p>
     */
    inline void SetRecipeVersion(const char* value) { m_recipeVersionHasBeenSet = true; m_recipeVersion.assign(value); }

    /**
     * <p>The identifier for the version for the recipe. </p>
     */
    inline RecipeReference& WithRecipeVersion(const Aws::String& value) { SetRecipeVersion(value); return *this;}

    /**
     * <p>The identifier for the version for the recipe. </p>
     */
    inline RecipeReference& WithRecipeVersion(Aws::String&& value) { SetRecipeVersion(std::move(value)); return *this;}

    /**
     * <p>The identifier for the version for the recipe. </p>
     */
    inline RecipeReference& WithRecipeVersion(const char* value) { SetRecipeVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recipeVersion;
    bool m_recipeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
