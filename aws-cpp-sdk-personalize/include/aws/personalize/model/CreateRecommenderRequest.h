/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/RecommenderConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class CreateRecommenderRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateRecommenderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecommender"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the recommender.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recommender.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the recommender.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the recommender.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the recommender.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the recommender.</p>
     */
    inline CreateRecommenderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recommender.</p>
     */
    inline CreateRecommenderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recommender.</p>
     */
    inline CreateRecommenderRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the destination domain dataset group for
     * the recommender.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination domain dataset group for
     * the recommender.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination domain dataset group for
     * the recommender.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination domain dataset group for
     * the recommender.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination domain dataset group for
     * the recommender.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination domain dataset group for
     * the recommender.</p>
     */
    inline CreateRecommenderRequest& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination domain dataset group for
     * the recommender.</p>
     */
    inline CreateRecommenderRequest& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination domain dataset group for
     * the recommender.</p>
     */
    inline CreateRecommenderRequest& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the recipe that the recommender will use.
     * For a recommender, a recipe is a Domain dataset group use case. Only Domain
     * dataset group use cases can be used to create a recommender. For information
     * about use cases see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
     * recommender use cases</a>. </p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe that the recommender will use.
     * For a recommender, a recipe is a Domain dataset group use case. Only Domain
     * dataset group use cases can be used to create a recommender. For information
     * about use cases see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
     * recommender use cases</a>. </p>
     */
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe that the recommender will use.
     * For a recommender, a recipe is a Domain dataset group use case. Only Domain
     * dataset group use cases can be used to create a recommender. For information
     * about use cases see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
     * recommender use cases</a>. </p>
     */
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe that the recommender will use.
     * For a recommender, a recipe is a Domain dataset group use case. Only Domain
     * dataset group use cases can be used to create a recommender. For information
     * about use cases see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
     * recommender use cases</a>. </p>
     */
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe that the recommender will use.
     * For a recommender, a recipe is a Domain dataset group use case. Only Domain
     * dataset group use cases can be used to create a recommender. For information
     * about use cases see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
     * recommender use cases</a>. </p>
     */
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe that the recommender will use.
     * For a recommender, a recipe is a Domain dataset group use case. Only Domain
     * dataset group use cases can be used to create a recommender. For information
     * about use cases see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
     * recommender use cases</a>. </p>
     */
    inline CreateRecommenderRequest& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe that the recommender will use.
     * For a recommender, a recipe is a Domain dataset group use case. Only Domain
     * dataset group use cases can be used to create a recommender. For information
     * about use cases see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
     * recommender use cases</a>. </p>
     */
    inline CreateRecommenderRequest& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe that the recommender will use.
     * For a recommender, a recipe is a Domain dataset group use case. Only Domain
     * dataset group use cases can be used to create a recommender. For information
     * about use cases see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
     * recommender use cases</a>. </p>
     */
    inline CreateRecommenderRequest& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}


    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline const RecommenderConfig& GetRecommenderConfig() const{ return m_recommenderConfig; }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline void SetRecommenderConfig(const RecommenderConfig& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = value; }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline void SetRecommenderConfig(RecommenderConfig&& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = std::move(value); }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline CreateRecommenderRequest& WithRecommenderConfig(const RecommenderConfig& value) { SetRecommenderConfig(value); return *this;}

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline CreateRecommenderRequest& WithRecommenderConfig(RecommenderConfig&& value) { SetRecommenderConfig(std::move(value)); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the recommender.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the recommender.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the recommender.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the recommender.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the recommender.</p>
     */
    inline CreateRecommenderRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the recommender.</p>
     */
    inline CreateRecommenderRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the recommender.</p>
     */
    inline CreateRecommenderRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the recommender.</p>
     */
    inline CreateRecommenderRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    RecommenderConfig m_recommenderConfig;
    bool m_recommenderConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
