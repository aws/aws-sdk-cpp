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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides information about a recipe. Each recipe provides an algorithm that
   * Amazon Personalize uses in model training when you use the <a>CreateSolution</a>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Recipe">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API Recipe
  {
  public:
    Recipe();
    Recipe(Aws::Utils::Json::JsonView jsonValue);
    Recipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Recipe& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recipe.</p>
     */
    inline Recipe& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recipe.</p>
     */
    inline Recipe& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the recipe.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe.</p>
     */
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe.</p>
     */
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe.</p>
     */
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe.</p>
     */
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe.</p>
     */
    inline Recipe& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe.</p>
     */
    inline Recipe& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe.</p>
     */
    inline Recipe& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that Amazon Personalize uses
     * to train the model.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that Amazon Personalize uses
     * to train the model.</p>
     */
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that Amazon Personalize uses
     * to train the model.</p>
     */
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that Amazon Personalize uses
     * to train the model.</p>
     */
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that Amazon Personalize uses
     * to train the model.</p>
     */
    inline void SetAlgorithmArn(const char* value) { m_algorithmArnHasBeenSet = true; m_algorithmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that Amazon Personalize uses
     * to train the model.</p>
     */
    inline Recipe& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that Amazon Personalize uses
     * to train the model.</p>
     */
    inline Recipe& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that Amazon Personalize uses
     * to train the model.</p>
     */
    inline Recipe& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}


    /**
     * <p>The ARN of the FeatureTransformation object.</p>
     */
    inline const Aws::String& GetFeatureTransformationArn() const{ return m_featureTransformationArn; }

    /**
     * <p>The ARN of the FeatureTransformation object.</p>
     */
    inline bool FeatureTransformationArnHasBeenSet() const { return m_featureTransformationArnHasBeenSet; }

    /**
     * <p>The ARN of the FeatureTransformation object.</p>
     */
    inline void SetFeatureTransformationArn(const Aws::String& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = value; }

    /**
     * <p>The ARN of the FeatureTransformation object.</p>
     */
    inline void SetFeatureTransformationArn(Aws::String&& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = std::move(value); }

    /**
     * <p>The ARN of the FeatureTransformation object.</p>
     */
    inline void SetFeatureTransformationArn(const char* value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn.assign(value); }

    /**
     * <p>The ARN of the FeatureTransformation object.</p>
     */
    inline Recipe& WithFeatureTransformationArn(const Aws::String& value) { SetFeatureTransformationArn(value); return *this;}

    /**
     * <p>The ARN of the FeatureTransformation object.</p>
     */
    inline Recipe& WithFeatureTransformationArn(Aws::String&& value) { SetFeatureTransformationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the FeatureTransformation object.</p>
     */
    inline Recipe& WithFeatureTransformationArn(const char* value) { SetFeatureTransformationArn(value); return *this;}


    /**
     * <p>The status of the recipe.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the recipe.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the recipe.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the recipe.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the recipe.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the recipe.</p>
     */
    inline Recipe& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the recipe.</p>
     */
    inline Recipe& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the recipe.</p>
     */
    inline Recipe& WithStatus(const char* value) { SetStatus(value); return *this;}


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
     * <p>The date and time (in Unix format) that the recipe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time (in Unix format) that the recipe was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix format) that the recipe was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time (in Unix format) that the recipe was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix format) that the recipe was created.</p>
     */
    inline Recipe& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix format) that the recipe was created.</p>
     */
    inline Recipe& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>One of the following values:</p> <ul> <li> <p>PERSONALIZED_RANKING</p> </li>
     * <li> <p>RELATED_ITEMS</p> </li> <li> <p>USER_PERSONALIZATION</p> </li> </ul>
     */
    inline const Aws::String& GetRecipeType() const{ return m_recipeType; }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>PERSONALIZED_RANKING</p> </li>
     * <li> <p>RELATED_ITEMS</p> </li> <li> <p>USER_PERSONALIZATION</p> </li> </ul>
     */
    inline bool RecipeTypeHasBeenSet() const { return m_recipeTypeHasBeenSet; }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>PERSONALIZED_RANKING</p> </li>
     * <li> <p>RELATED_ITEMS</p> </li> <li> <p>USER_PERSONALIZATION</p> </li> </ul>
     */
    inline void SetRecipeType(const Aws::String& value) { m_recipeTypeHasBeenSet = true; m_recipeType = value; }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>PERSONALIZED_RANKING</p> </li>
     * <li> <p>RELATED_ITEMS</p> </li> <li> <p>USER_PERSONALIZATION</p> </li> </ul>
     */
    inline void SetRecipeType(Aws::String&& value) { m_recipeTypeHasBeenSet = true; m_recipeType = std::move(value); }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>PERSONALIZED_RANKING</p> </li>
     * <li> <p>RELATED_ITEMS</p> </li> <li> <p>USER_PERSONALIZATION</p> </li> </ul>
     */
    inline void SetRecipeType(const char* value) { m_recipeTypeHasBeenSet = true; m_recipeType.assign(value); }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>PERSONALIZED_RANKING</p> </li>
     * <li> <p>RELATED_ITEMS</p> </li> <li> <p>USER_PERSONALIZATION</p> </li> </ul>
     */
    inline Recipe& WithRecipeType(const Aws::String& value) { SetRecipeType(value); return *this;}

    /**
     * <p>One of the following values:</p> <ul> <li> <p>PERSONALIZED_RANKING</p> </li>
     * <li> <p>RELATED_ITEMS</p> </li> <li> <p>USER_PERSONALIZATION</p> </li> </ul>
     */
    inline Recipe& WithRecipeType(Aws::String&& value) { SetRecipeType(std::move(value)); return *this;}

    /**
     * <p>One of the following values:</p> <ul> <li> <p>PERSONALIZED_RANKING</p> </li>
     * <li> <p>RELATED_ITEMS</p> </li> <li> <p>USER_PERSONALIZATION</p> </li> </ul>
     */
    inline Recipe& WithRecipeType(const char* value) { SetRecipeType(value); return *this;}


    /**
     * <p>The date and time (in Unix format) that the recipe was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix format) that the recipe was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix format) that the recipe was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix format) that the recipe was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix format) that the recipe was last updated.</p>
     */
    inline Recipe& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix format) that the recipe was last updated.</p>
     */
    inline Recipe& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet;

    Aws::String m_featureTransformationArn;
    bool m_featureTransformationArnHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    Aws::String m_recipeType;
    bool m_recipeTypeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
