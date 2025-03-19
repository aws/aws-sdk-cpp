/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/MLModelType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class CreateMLModelRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API CreateMLModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMLModel"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    CreateMLModelRequest& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelName() const { return m_mLModelName; }
    inline bool MLModelNameHasBeenSet() const { return m_mLModelNameHasBeenSet; }
    template<typename MLModelNameT = Aws::String>
    void SetMLModelName(MLModelNameT&& value) { m_mLModelNameHasBeenSet = true; m_mLModelName = std::forward<MLModelNameT>(value); }
    template<typename MLModelNameT = Aws::String>
    CreateMLModelRequest& WithMLModelName(MLModelNameT&& value) { SetMLModelName(std::forward<MLModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of supervised learning that this <code>MLModel</code> will
     * address. Choose from the following types:</p> <ul> <li> <p>Choose
     * <code>REGRESSION</code> if the <code>MLModel</code> will be used to predict a
     * numeric value.</p> </li> <li> <p>Choose <code>BINARY</code> if the
     * <code>MLModel</code> result has two possible values.</p> </li> <li> <p>Choose
     * <code>MULTICLASS</code> if the <code>MLModel</code> result has a limited number
     * of values.</p> </li> </ul> <p> For more information, see the <a
     * href="https://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>.</p>
     */
    inline MLModelType GetMLModelType() const { return m_mLModelType; }
    inline bool MLModelTypeHasBeenSet() const { return m_mLModelTypeHasBeenSet; }
    inline void SetMLModelType(MLModelType value) { m_mLModelTypeHasBeenSet = true; m_mLModelType = value; }
    inline CreateMLModelRequest& WithMLModelType(MLModelType value) { SetMLModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters:</p> <ul> <li> <p> <code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li> <p> <code>sgd.maxPasses</code> - The
     * number of times that the training process traverses the observations to build
     * the <code>MLModel</code>. The value is an integer that ranges from
     * <code>1</code> to <code>10000</code>. The default value is <code>10</code>.</p>
     * </li> <li> <p> <code>sgd.shuffleType</code> - Whether Amazon ML shuffles the
     * training data. Shuffling the data improves a model's ability to find the optimal
     * solution for a variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We strongly recommend
     * that you shuffle your data.</p> </li> <li> <p>
     * <code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li> <p>
     * <code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    CreateMLModelRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    CreateMLModelRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The <code>DataSource</code> that points to the training data.</p>
     */
    inline const Aws::String& GetTrainingDataSourceId() const { return m_trainingDataSourceId; }
    inline bool TrainingDataSourceIdHasBeenSet() const { return m_trainingDataSourceIdHasBeenSet; }
    template<typename TrainingDataSourceIdT = Aws::String>
    void SetTrainingDataSourceId(TrainingDataSourceIdT&& value) { m_trainingDataSourceIdHasBeenSet = true; m_trainingDataSourceId = std::forward<TrainingDataSourceIdT>(value); }
    template<typename TrainingDataSourceIdT = Aws::String>
    CreateMLModelRequest& WithTrainingDataSourceId(TrainingDataSourceIdT&& value) { SetTrainingDataSourceId(std::forward<TrainingDataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data recipe for creating the <code>MLModel</code>. You must specify
     * either the recipe or its URI. If you don't specify a recipe or its URI, Amazon
     * ML creates a default.</p>
     */
    inline const Aws::String& GetRecipe() const { return m_recipe; }
    inline bool RecipeHasBeenSet() const { return m_recipeHasBeenSet; }
    template<typename RecipeT = Aws::String>
    void SetRecipe(RecipeT&& value) { m_recipeHasBeenSet = true; m_recipe = std::forward<RecipeT>(value); }
    template<typename RecipeT = Aws::String>
    CreateMLModelRequest& WithRecipe(RecipeT&& value) { SetRecipe(std::forward<RecipeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) location and file name that
     * contains the <code>MLModel</code> recipe. You must specify either the recipe or
     * its URI. If you don't specify a recipe or its URI, Amazon ML creates a
     * default.</p>
     */
    inline const Aws::String& GetRecipeUri() const { return m_recipeUri; }
    inline bool RecipeUriHasBeenSet() const { return m_recipeUriHasBeenSet; }
    template<typename RecipeUriT = Aws::String>
    void SetRecipeUri(RecipeUriT&& value) { m_recipeUriHasBeenSet = true; m_recipeUri = std::forward<RecipeUriT>(value); }
    template<typename RecipeUriT = Aws::String>
    CreateMLModelRequest& WithRecipeUri(RecipeUriT&& value) { SetRecipeUri(std::forward<RecipeUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    Aws::String m_mLModelName;
    bool m_mLModelNameHasBeenSet = false;

    MLModelType m_mLModelType{MLModelType::NOT_SET};
    bool m_mLModelTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_trainingDataSourceId;
    bool m_trainingDataSourceIdHasBeenSet = false;

    Aws::String m_recipe;
    bool m_recipeHasBeenSet = false;

    Aws::String m_recipeUri;
    bool m_recipeUriHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
