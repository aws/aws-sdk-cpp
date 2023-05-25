/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/databrew/model/RecipeStep.h>
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
   * <p>Represents one or more actions to be performed on a DataBrew
   * dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Recipe">AWS API
   * Reference</a></p>
   */
  class Recipe
  {
  public:
    AWS_GLUEDATABREW_API Recipe();
    AWS_GLUEDATABREW_API Recipe(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Recipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the recipe.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the recipe.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the recipe.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the recipe.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the recipe.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the recipe.</p>
     */
    inline Recipe& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the recipe.</p>
     */
    inline Recipe& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the recipe.</p>
     */
    inline Recipe& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline Recipe& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline Recipe& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the recipe.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the recipe.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the recipe.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the recipe.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the recipe.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the recipe.</p>
     */
    inline Recipe& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the recipe.</p>
     */
    inline Recipe& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the recipe.</p>
     */
    inline Recipe& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The last modification date and time of the recipe.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last modification date and time of the recipe.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The last modification date and time of the recipe.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last modification date and time of the recipe.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last modification date and time of the recipe.</p>
     */
    inline Recipe& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last modification date and time of the recipe.</p>
     */
    inline Recipe& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The name of the project that the recipe is associated with.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project that the recipe is associated with.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project that the recipe is associated with.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project that the recipe is associated with.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project that the recipe is associated with.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project that the recipe is associated with.</p>
     */
    inline Recipe& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project that the recipe is associated with.</p>
     */
    inline Recipe& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project that the recipe is associated with.</p>
     */
    inline Recipe& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who published the recipe.</p>
     */
    inline const Aws::String& GetPublishedBy() const{ return m_publishedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who published the recipe.</p>
     */
    inline bool PublishedByHasBeenSet() const { return m_publishedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who published the recipe.</p>
     */
    inline void SetPublishedBy(const Aws::String& value) { m_publishedByHasBeenSet = true; m_publishedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who published the recipe.</p>
     */
    inline void SetPublishedBy(Aws::String&& value) { m_publishedByHasBeenSet = true; m_publishedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who published the recipe.</p>
     */
    inline void SetPublishedBy(const char* value) { m_publishedByHasBeenSet = true; m_publishedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who published the recipe.</p>
     */
    inline Recipe& WithPublishedBy(const Aws::String& value) { SetPublishedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who published the recipe.</p>
     */
    inline Recipe& WithPublishedBy(Aws::String&& value) { SetPublishedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who published the recipe.</p>
     */
    inline Recipe& WithPublishedBy(const char* value) { SetPublishedBy(value); return *this;}


    /**
     * <p>The date and time when the recipe was published.</p>
     */
    inline const Aws::Utils::DateTime& GetPublishedDate() const{ return m_publishedDate; }

    /**
     * <p>The date and time when the recipe was published.</p>
     */
    inline bool PublishedDateHasBeenSet() const { return m_publishedDateHasBeenSet; }

    /**
     * <p>The date and time when the recipe was published.</p>
     */
    inline void SetPublishedDate(const Aws::Utils::DateTime& value) { m_publishedDateHasBeenSet = true; m_publishedDate = value; }

    /**
     * <p>The date and time when the recipe was published.</p>
     */
    inline void SetPublishedDate(Aws::Utils::DateTime&& value) { m_publishedDateHasBeenSet = true; m_publishedDate = std::move(value); }

    /**
     * <p>The date and time when the recipe was published.</p>
     */
    inline Recipe& WithPublishedDate(const Aws::Utils::DateTime& value) { SetPublishedDate(value); return *this;}

    /**
     * <p>The date and time when the recipe was published.</p>
     */
    inline Recipe& WithPublishedDate(Aws::Utils::DateTime&& value) { SetPublishedDate(std::move(value)); return *this;}


    /**
     * <p>The description of the recipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the recipe.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the recipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the recipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the recipe.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the recipe.</p>
     */
    inline Recipe& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the recipe.</p>
     */
    inline Recipe& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the recipe.</p>
     */
    inline Recipe& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique name for the recipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name for the recipe.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name for the recipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name for the recipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name for the recipe.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name for the recipe.</p>
     */
    inline Recipe& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name for the recipe.</p>
     */
    inline Recipe& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name for the recipe.</p>
     */
    inline Recipe& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the recipe.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recipe.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recipe.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recipe.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the recipe.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the recipe.</p>
     */
    inline Recipe& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the recipe.</p>
     */
    inline Recipe& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the recipe.</p>
     */
    inline Recipe& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A list of steps that are defined by the recipe.</p>
     */
    inline const Aws::Vector<RecipeStep>& GetSteps() const{ return m_steps; }

    /**
     * <p>A list of steps that are defined by the recipe.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>A list of steps that are defined by the recipe.</p>
     */
    inline void SetSteps(const Aws::Vector<RecipeStep>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>A list of steps that are defined by the recipe.</p>
     */
    inline void SetSteps(Aws::Vector<RecipeStep>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>A list of steps that are defined by the recipe.</p>
     */
    inline Recipe& WithSteps(const Aws::Vector<RecipeStep>& value) { SetSteps(value); return *this;}

    /**
     * <p>A list of steps that are defined by the recipe.</p>
     */
    inline Recipe& WithSteps(Aws::Vector<RecipeStep>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>A list of steps that are defined by the recipe.</p>
     */
    inline Recipe& AddSteps(const RecipeStep& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>A list of steps that are defined by the recipe.</p>
     */
    inline Recipe& AddSteps(RecipeStep&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline Recipe& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline Recipe& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline Recipe& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline Recipe& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline Recipe& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline Recipe& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline Recipe& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline Recipe& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the recipe.</p>
     */
    inline Recipe& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The identifier for the version for the recipe. Must be one of the
     * following:</p> <ul> <li> <p>Numeric version (<code>X.Y</code>) - <code>X</code>
     * and <code>Y</code> stand for major and minor version numbers. The maximum length
     * of each is 6 digits, and neither can be negative values. Both <code>X</code> and
     * <code>Y</code> are required, and "0.0" isn't a valid version.</p> </li> <li> <p>
     * <code>LATEST_WORKING</code> - the most recent valid version being developed in a
     * DataBrew project.</p> </li> <li> <p> <code>LATEST_PUBLISHED</code> - the most
     * recent published version.</p> </li> </ul>
     */
    inline const Aws::String& GetRecipeVersion() const{ return m_recipeVersion; }

    /**
     * <p>The identifier for the version for the recipe. Must be one of the
     * following:</p> <ul> <li> <p>Numeric version (<code>X.Y</code>) - <code>X</code>
     * and <code>Y</code> stand for major and minor version numbers. The maximum length
     * of each is 6 digits, and neither can be negative values. Both <code>X</code> and
     * <code>Y</code> are required, and "0.0" isn't a valid version.</p> </li> <li> <p>
     * <code>LATEST_WORKING</code> - the most recent valid version being developed in a
     * DataBrew project.</p> </li> <li> <p> <code>LATEST_PUBLISHED</code> - the most
     * recent published version.</p> </li> </ul>
     */
    inline bool RecipeVersionHasBeenSet() const { return m_recipeVersionHasBeenSet; }

    /**
     * <p>The identifier for the version for the recipe. Must be one of the
     * following:</p> <ul> <li> <p>Numeric version (<code>X.Y</code>) - <code>X</code>
     * and <code>Y</code> stand for major and minor version numbers. The maximum length
     * of each is 6 digits, and neither can be negative values. Both <code>X</code> and
     * <code>Y</code> are required, and "0.0" isn't a valid version.</p> </li> <li> <p>
     * <code>LATEST_WORKING</code> - the most recent valid version being developed in a
     * DataBrew project.</p> </li> <li> <p> <code>LATEST_PUBLISHED</code> - the most
     * recent published version.</p> </li> </ul>
     */
    inline void SetRecipeVersion(const Aws::String& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = value; }

    /**
     * <p>The identifier for the version for the recipe. Must be one of the
     * following:</p> <ul> <li> <p>Numeric version (<code>X.Y</code>) - <code>X</code>
     * and <code>Y</code> stand for major and minor version numbers. The maximum length
     * of each is 6 digits, and neither can be negative values. Both <code>X</code> and
     * <code>Y</code> are required, and "0.0" isn't a valid version.</p> </li> <li> <p>
     * <code>LATEST_WORKING</code> - the most recent valid version being developed in a
     * DataBrew project.</p> </li> <li> <p> <code>LATEST_PUBLISHED</code> - the most
     * recent published version.</p> </li> </ul>
     */
    inline void SetRecipeVersion(Aws::String&& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = std::move(value); }

    /**
     * <p>The identifier for the version for the recipe. Must be one of the
     * following:</p> <ul> <li> <p>Numeric version (<code>X.Y</code>) - <code>X</code>
     * and <code>Y</code> stand for major and minor version numbers. The maximum length
     * of each is 6 digits, and neither can be negative values. Both <code>X</code> and
     * <code>Y</code> are required, and "0.0" isn't a valid version.</p> </li> <li> <p>
     * <code>LATEST_WORKING</code> - the most recent valid version being developed in a
     * DataBrew project.</p> </li> <li> <p> <code>LATEST_PUBLISHED</code> - the most
     * recent published version.</p> </li> </ul>
     */
    inline void SetRecipeVersion(const char* value) { m_recipeVersionHasBeenSet = true; m_recipeVersion.assign(value); }

    /**
     * <p>The identifier for the version for the recipe. Must be one of the
     * following:</p> <ul> <li> <p>Numeric version (<code>X.Y</code>) - <code>X</code>
     * and <code>Y</code> stand for major and minor version numbers. The maximum length
     * of each is 6 digits, and neither can be negative values. Both <code>X</code> and
     * <code>Y</code> are required, and "0.0" isn't a valid version.</p> </li> <li> <p>
     * <code>LATEST_WORKING</code> - the most recent valid version being developed in a
     * DataBrew project.</p> </li> <li> <p> <code>LATEST_PUBLISHED</code> - the most
     * recent published version.</p> </li> </ul>
     */
    inline Recipe& WithRecipeVersion(const Aws::String& value) { SetRecipeVersion(value); return *this;}

    /**
     * <p>The identifier for the version for the recipe. Must be one of the
     * following:</p> <ul> <li> <p>Numeric version (<code>X.Y</code>) - <code>X</code>
     * and <code>Y</code> stand for major and minor version numbers. The maximum length
     * of each is 6 digits, and neither can be negative values. Both <code>X</code> and
     * <code>Y</code> are required, and "0.0" isn't a valid version.</p> </li> <li> <p>
     * <code>LATEST_WORKING</code> - the most recent valid version being developed in a
     * DataBrew project.</p> </li> <li> <p> <code>LATEST_PUBLISHED</code> - the most
     * recent published version.</p> </li> </ul>
     */
    inline Recipe& WithRecipeVersion(Aws::String&& value) { SetRecipeVersion(std::move(value)); return *this;}

    /**
     * <p>The identifier for the version for the recipe. Must be one of the
     * following:</p> <ul> <li> <p>Numeric version (<code>X.Y</code>) - <code>X</code>
     * and <code>Y</code> stand for major and minor version numbers. The maximum length
     * of each is 6 digits, and neither can be negative values. Both <code>X</code> and
     * <code>Y</code> are required, and "0.0" isn't a valid version.</p> </li> <li> <p>
     * <code>LATEST_WORKING</code> - the most recent valid version being developed in a
     * DataBrew project.</p> </li> <li> <p> <code>LATEST_PUBLISHED</code> - the most
     * recent published version.</p> </li> </ul>
     */
    inline Recipe& WithRecipeVersion(const char* value) { SetRecipeVersion(value); return *this;}

  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_publishedBy;
    bool m_publishedByHasBeenSet = false;

    Aws::Utils::DateTime m_publishedDate;
    bool m_publishedDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<RecipeStep> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_recipeVersion;
    bool m_recipeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
