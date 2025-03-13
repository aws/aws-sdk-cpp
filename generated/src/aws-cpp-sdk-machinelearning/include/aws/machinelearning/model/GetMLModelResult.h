/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/machinelearning/model/EntityStatus.h>
#include <aws/machinelearning/model/RealtimeEndpointInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/machinelearning/model/MLModelType.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetMLModel</code> operation, and provides
   * detailed information about a <code>MLModel</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/GetMLModelOutput">AWS
   * API Reference</a></p>
   */
  class GetMLModelResult
  {
  public:
    AWS_MACHINELEARNING_API GetMLModelResult() = default;
    AWS_MACHINELEARNING_API GetMLModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API GetMLModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The MLModel ID, which is same as the <code>MLModelId</code> in the
     * request.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    GetMLModelResult& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the training <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetTrainingDataSourceId() const { return m_trainingDataSourceId; }
    template<typename TrainingDataSourceIdT = Aws::String>
    void SetTrainingDataSourceId(TrainingDataSourceIdT&& value) { m_trainingDataSourceIdHasBeenSet = true; m_trainingDataSourceId = std::forward<TrainingDataSourceIdT>(value); }
    template<typename TrainingDataSourceIdT = Aws::String>
    GetMLModelResult& WithTrainingDataSourceId(TrainingDataSourceIdT&& value) { SetTrainingDataSourceId(std::forward<TrainingDataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user account from which the <code>MLModel</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const { return m_createdByIamUser; }
    template<typename CreatedByIamUserT = Aws::String>
    void SetCreatedByIamUser(CreatedByIamUserT&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::forward<CreatedByIamUserT>(value); }
    template<typename CreatedByIamUserT = Aws::String>
    GetMLModelResult& WithCreatedByIamUser(CreatedByIamUserT&& value) { SetCreatedByIamUser(std::forward<CreatedByIamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the <code>MLModel</code> was created. The time is expressed in
     * epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetMLModelResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to the <code>MLModel</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetMLModelResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetMLModelResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the <code>MLModel</code>. This element can have one of
     * the following values:</p> <ul> <li> <p> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to describe a <code>MLModel</code>.</p>
     * </li> <li> <p> <code>INPROGRESS</code> - The request is processing.</p> </li>
     * <li> <p> <code>FAILED</code> - The request did not run to completion. The ML
     * model isn't usable.</p> </li> <li> <p> <code>COMPLETED</code> - The request
     * completed successfully.</p> </li> <li> <p> <code>DELETED</code> - The
     * <code>MLModel</code> is marked as deleted. It isn't usable.</p> </li> </ul>
     */
    inline EntityStatus GetStatus() const { return m_status; }
    inline void SetStatus(EntityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetMLModelResult& WithStatus(EntityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetSizeInBytes() const { return m_sizeInBytes; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }
    inline GetMLModelResult& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current endpoint of the <code>MLModel</code> </p>
     */
    inline const RealtimeEndpointInfo& GetEndpointInfo() const { return m_endpointInfo; }
    template<typename EndpointInfoT = RealtimeEndpointInfo>
    void SetEndpointInfo(EndpointInfoT&& value) { m_endpointInfoHasBeenSet = true; m_endpointInfo = std::forward<EndpointInfoT>(value); }
    template<typename EndpointInfoT = RealtimeEndpointInfo>
    GetMLModelResult& WithEndpointInfo(EndpointInfoT&& value) { SetEndpointInfo(std::forward<EndpointInfoT>(value)); return *this;}
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
     * training data. Shuffling data improves a model's ability to find the optimal
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTrainingParameters() const { return m_trainingParameters; }
    template<typename TrainingParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTrainingParameters(TrainingParametersT&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters = std::forward<TrainingParametersT>(value); }
    template<typename TrainingParametersT = Aws::Map<Aws::String, Aws::String>>
    GetMLModelResult& WithTrainingParameters(TrainingParametersT&& value) { SetTrainingParameters(std::forward<TrainingParametersT>(value)); return *this;}
    template<typename TrainingParametersKeyT = Aws::String, typename TrainingParametersValueT = Aws::String>
    GetMLModelResult& AddTrainingParameters(TrainingParametersKeyT&& key, TrainingParametersValueT&& value) {
      m_trainingParametersHasBeenSet = true; m_trainingParameters.emplace(std::forward<TrainingParametersKeyT>(key), std::forward<TrainingParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const { return m_inputDataLocationS3; }
    template<typename InputDataLocationS3T = Aws::String>
    void SetInputDataLocationS3(InputDataLocationS3T&& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = std::forward<InputDataLocationS3T>(value); }
    template<typename InputDataLocationS3T = Aws::String>
    GetMLModelResult& WithInputDataLocationS3(InputDataLocationS3T&& value) { SetInputDataLocationS3(std::forward<InputDataLocationS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the <code>MLModel</code> category. The following are the available
     * types: </p> <ul> <li> <p>REGRESSION -- Produces a numeric result. For example,
     * "What price should a house be listed at?"</p> </li> <li> <p>BINARY -- Produces
     * one of two possible results. For example, "Is this an e-commerce website?"</p>
     * </li> <li> <p>MULTICLASS -- Produces one of several possible results. For
     * example, "Is this a HIGH, LOW or MEDIUM risk trade?"</p> </li> </ul>
     */
    inline MLModelType GetMLModelType() const { return m_mLModelType; }
    inline void SetMLModelType(MLModelType value) { m_mLModelTypeHasBeenSet = true; m_mLModelType = value; }
    inline GetMLModelResult& WithMLModelType(MLModelType value) { SetMLModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scoring threshold is used in binary classification <code>MLModel</code>
     * models. It marks the boundary between a positive prediction and a negative
     * prediction.</p> <p>Output values greater than or equal to the threshold receive
     * a positive result from the MLModel, such as <code>true</code>. Output values
     * less than the threshold receive a negative response from the MLModel, such as
     * <code>false</code>.</p>
     */
    inline double GetScoreThreshold() const { return m_scoreThreshold; }
    inline void SetScoreThreshold(double value) { m_scoreThresholdHasBeenSet = true; m_scoreThreshold = value; }
    inline GetMLModelResult& WithScoreThreshold(double value) { SetScoreThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to the <code>ScoreThreshold</code>. The time
     * is expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetScoreThresholdLastUpdatedAt() const { return m_scoreThresholdLastUpdatedAt; }
    template<typename ScoreThresholdLastUpdatedAtT = Aws::Utils::DateTime>
    void SetScoreThresholdLastUpdatedAt(ScoreThresholdLastUpdatedAtT&& value) { m_scoreThresholdLastUpdatedAtHasBeenSet = true; m_scoreThresholdLastUpdatedAt = std::forward<ScoreThresholdLastUpdatedAtT>(value); }
    template<typename ScoreThresholdLastUpdatedAtT = Aws::Utils::DateTime>
    GetMLModelResult& WithScoreThresholdLastUpdatedAt(ScoreThresholdLastUpdatedAtT&& value) { SetScoreThresholdLastUpdatedAt(std::forward<ScoreThresholdLastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the file that contains logs of the <code>CreateMLModel</code>
     * operation.</p>
     */
    inline const Aws::String& GetLogUri() const { return m_logUri; }
    template<typename LogUriT = Aws::String>
    void SetLogUri(LogUriT&& value) { m_logUriHasBeenSet = true; m_logUri = std::forward<LogUriT>(value); }
    template<typename LogUriT = Aws::String>
    GetMLModelResult& WithLogUri(LogUriT&& value) { SetLogUri(std::forward<LogUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the most recent details about accessing the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetMLModelResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>MLModel</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>MLModel</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline long long GetComputeTime() const { return m_computeTime; }
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }
    inline GetMLModelResult& WithComputeTime(long long value) { SetComputeTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the <code>MLModel</code>
     * as <code>COMPLETED</code> or <code>FAILED</code>. <code>FinishedAt</code> is
     * only available when the <code>MLModel</code> is in the <code>COMPLETED</code> or
     * <code>FAILED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    GetMLModelResult& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the <code>MLModel</code>
     * as <code>INPROGRESS</code>. <code>StartedAt</code> isn't available if the
     * <code>MLModel</code> is in the <code>PENDING</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetMLModelResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipe to use when training the <code>MLModel</code>. The
     * <code>Recipe</code> provides detailed information about the observation data to
     * use during training, and manipulations to perform on the observation data during
     * training.</p> <p> <b>Note:</b> This parameter is provided as part of the verbose
     * format.</p>
     */
    inline const Aws::String& GetRecipe() const { return m_recipe; }
    template<typename RecipeT = Aws::String>
    void SetRecipe(RecipeT&& value) { m_recipeHasBeenSet = true; m_recipe = std::forward<RecipeT>(value); }
    template<typename RecipeT = Aws::String>
    GetMLModelResult& WithRecipe(RecipeT&& value) { SetRecipe(std::forward<RecipeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema used by all of the data files referenced by the
     * <code>DataSource</code>.</p> <p> <b>Note:</b> This parameter is provided as part
     * of the verbose format.</p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    GetMLModelResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMLModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    Aws::String m_trainingDataSourceId;
    bool m_trainingDataSourceIdHasBeenSet = false;

    Aws::String m_createdByIamUser;
    bool m_createdByIamUserHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EntityStatus m_status{EntityStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    long long m_sizeInBytes{0};
    bool m_sizeInBytesHasBeenSet = false;

    RealtimeEndpointInfo m_endpointInfo;
    bool m_endpointInfoHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_trainingParameters;
    bool m_trainingParametersHasBeenSet = false;

    Aws::String m_inputDataLocationS3;
    bool m_inputDataLocationS3HasBeenSet = false;

    MLModelType m_mLModelType{MLModelType::NOT_SET};
    bool m_mLModelTypeHasBeenSet = false;

    double m_scoreThreshold{0.0};
    bool m_scoreThresholdHasBeenSet = false;

    Aws::Utils::DateTime m_scoreThresholdLastUpdatedAt{};
    bool m_scoreThresholdLastUpdatedAtHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_computeTime{0};
    bool m_computeTimeHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt{};
    bool m_finishedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::String m_recipe;
    bool m_recipeHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
