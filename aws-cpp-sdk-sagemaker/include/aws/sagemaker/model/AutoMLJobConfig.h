/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
#include <aws/sagemaker/model/AutoMLSecurityConfig.h>
#include <aws/sagemaker/model/AutoMLDataSplitConfig.h>
#include <aws/sagemaker/model/AutoMLCandidateGenerationConfig.h>
#include <aws/sagemaker/model/AutoMLMode.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A collection of settings used for an AutoML job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLJobConfig
  {
  public:
    AWS_SAGEMAKER_API AutoMLJobConfig();
    AWS_SAGEMAKER_API AutoMLJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long an AutoML job is allowed to run, or how many candidates a job is
     * allowed to generate.</p>
     */
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const{ return m_completionCriteria; }

    /**
     * <p>How long an AutoML job is allowed to run, or how many candidates a job is
     * allowed to generate.</p>
     */
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }

    /**
     * <p>How long an AutoML job is allowed to run, or how many candidates a job is
     * allowed to generate.</p>
     */
    inline void SetCompletionCriteria(const AutoMLJobCompletionCriteria& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = value; }

    /**
     * <p>How long an AutoML job is allowed to run, or how many candidates a job is
     * allowed to generate.</p>
     */
    inline void SetCompletionCriteria(AutoMLJobCompletionCriteria&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::move(value); }

    /**
     * <p>How long an AutoML job is allowed to run, or how many candidates a job is
     * allowed to generate.</p>
     */
    inline AutoMLJobConfig& WithCompletionCriteria(const AutoMLJobCompletionCriteria& value) { SetCompletionCriteria(value); return *this;}

    /**
     * <p>How long an AutoML job is allowed to run, or how many candidates a job is
     * allowed to generate.</p>
     */
    inline AutoMLJobConfig& WithCompletionCriteria(AutoMLJobCompletionCriteria&& value) { SetCompletionCriteria(std::move(value)); return *this;}


    /**
     * <p>The security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline const AutoMLSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }

    /**
     * <p>The security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }

    /**
     * <p>The security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline void SetSecurityConfig(const AutoMLSecurityConfig& value) { m_securityConfigHasBeenSet = true; m_securityConfig = value; }

    /**
     * <p>The security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline void SetSecurityConfig(AutoMLSecurityConfig&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::move(value); }

    /**
     * <p>The security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline AutoMLJobConfig& WithSecurityConfig(const AutoMLSecurityConfig& value) { SetSecurityConfig(value); return *this;}

    /**
     * <p>The security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline AutoMLJobConfig& WithSecurityConfig(AutoMLSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration for splitting the input training dataset.</p> <p>Type:
     * AutoMLDataSplitConfig</p>
     */
    inline const AutoMLDataSplitConfig& GetDataSplitConfig() const{ return m_dataSplitConfig; }

    /**
     * <p>The configuration for splitting the input training dataset.</p> <p>Type:
     * AutoMLDataSplitConfig</p>
     */
    inline bool DataSplitConfigHasBeenSet() const { return m_dataSplitConfigHasBeenSet; }

    /**
     * <p>The configuration for splitting the input training dataset.</p> <p>Type:
     * AutoMLDataSplitConfig</p>
     */
    inline void SetDataSplitConfig(const AutoMLDataSplitConfig& value) { m_dataSplitConfigHasBeenSet = true; m_dataSplitConfig = value; }

    /**
     * <p>The configuration for splitting the input training dataset.</p> <p>Type:
     * AutoMLDataSplitConfig</p>
     */
    inline void SetDataSplitConfig(AutoMLDataSplitConfig&& value) { m_dataSplitConfigHasBeenSet = true; m_dataSplitConfig = std::move(value); }

    /**
     * <p>The configuration for splitting the input training dataset.</p> <p>Type:
     * AutoMLDataSplitConfig</p>
     */
    inline AutoMLJobConfig& WithDataSplitConfig(const AutoMLDataSplitConfig& value) { SetDataSplitConfig(value); return *this;}

    /**
     * <p>The configuration for splitting the input training dataset.</p> <p>Type:
     * AutoMLDataSplitConfig</p>
     */
    inline AutoMLJobConfig& WithDataSplitConfig(AutoMLDataSplitConfig&& value) { SetDataSplitConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration for generating a candidate for an AutoML job (optional).
     * </p>
     */
    inline const AutoMLCandidateGenerationConfig& GetCandidateGenerationConfig() const{ return m_candidateGenerationConfig; }

    /**
     * <p>The configuration for generating a candidate for an AutoML job (optional).
     * </p>
     */
    inline bool CandidateGenerationConfigHasBeenSet() const { return m_candidateGenerationConfigHasBeenSet; }

    /**
     * <p>The configuration for generating a candidate for an AutoML job (optional).
     * </p>
     */
    inline void SetCandidateGenerationConfig(const AutoMLCandidateGenerationConfig& value) { m_candidateGenerationConfigHasBeenSet = true; m_candidateGenerationConfig = value; }

    /**
     * <p>The configuration for generating a candidate for an AutoML job (optional).
     * </p>
     */
    inline void SetCandidateGenerationConfig(AutoMLCandidateGenerationConfig&& value) { m_candidateGenerationConfigHasBeenSet = true; m_candidateGenerationConfig = std::move(value); }

    /**
     * <p>The configuration for generating a candidate for an AutoML job (optional).
     * </p>
     */
    inline AutoMLJobConfig& WithCandidateGenerationConfig(const AutoMLCandidateGenerationConfig& value) { SetCandidateGenerationConfig(value); return *this;}

    /**
     * <p>The configuration for generating a candidate for an AutoML job (optional).
     * </p>
     */
    inline AutoMLJobConfig& WithCandidateGenerationConfig(AutoMLCandidateGenerationConfig&& value) { SetCandidateGenerationConfig(std::move(value)); return *this;}


    /**
     * <p>The method that Autopilot uses to train the data. You can either specify the
     * mode manually or let Autopilot choose for you based on the dataset size by
     * selecting <code>AUTO</code>. In <code>AUTO</code> mode, Autopilot chooses
     * <code>ENSEMBLING</code> for datasets smaller than 100 MB, and
     * <code>HYPERPARAMETER_TUNING</code> for larger ones.</p> <p>The
     * <code>ENSEMBLING</code> mode uses a multi-stack ensemble model to predict
     * classification and regression tasks directly from your dataset. This machine
     * learning mode combines several base models to produce an optimal predictive
     * model. It then uses a stacking ensemble method to combine predictions from
     * contributing members. A multi-stack ensemble model can provide better
     * performance over a single model by combining the predictive capabilities of
     * multiple models. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>ENSEMBLING</code> mode.</p> <p>The <code>HYPERPARAMETER_TUNING</code>
     * (HPO) mode uses the best hyperparameters to train the best version of a model.
     * HPO will automatically select an algorithm for the type of problem you want to
     * solve. Then HPO finds the best hyperparameters according to your objective
     * metric. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>HYPERPARAMETER_TUNING</code> mode.</p>
     */
    inline const AutoMLMode& GetMode() const{ return m_mode; }

    /**
     * <p>The method that Autopilot uses to train the data. You can either specify the
     * mode manually or let Autopilot choose for you based on the dataset size by
     * selecting <code>AUTO</code>. In <code>AUTO</code> mode, Autopilot chooses
     * <code>ENSEMBLING</code> for datasets smaller than 100 MB, and
     * <code>HYPERPARAMETER_TUNING</code> for larger ones.</p> <p>The
     * <code>ENSEMBLING</code> mode uses a multi-stack ensemble model to predict
     * classification and regression tasks directly from your dataset. This machine
     * learning mode combines several base models to produce an optimal predictive
     * model. It then uses a stacking ensemble method to combine predictions from
     * contributing members. A multi-stack ensemble model can provide better
     * performance over a single model by combining the predictive capabilities of
     * multiple models. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>ENSEMBLING</code> mode.</p> <p>The <code>HYPERPARAMETER_TUNING</code>
     * (HPO) mode uses the best hyperparameters to train the best version of a model.
     * HPO will automatically select an algorithm for the type of problem you want to
     * solve. Then HPO finds the best hyperparameters according to your objective
     * metric. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>HYPERPARAMETER_TUNING</code> mode.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The method that Autopilot uses to train the data. You can either specify the
     * mode manually or let Autopilot choose for you based on the dataset size by
     * selecting <code>AUTO</code>. In <code>AUTO</code> mode, Autopilot chooses
     * <code>ENSEMBLING</code> for datasets smaller than 100 MB, and
     * <code>HYPERPARAMETER_TUNING</code> for larger ones.</p> <p>The
     * <code>ENSEMBLING</code> mode uses a multi-stack ensemble model to predict
     * classification and regression tasks directly from your dataset. This machine
     * learning mode combines several base models to produce an optimal predictive
     * model. It then uses a stacking ensemble method to combine predictions from
     * contributing members. A multi-stack ensemble model can provide better
     * performance over a single model by combining the predictive capabilities of
     * multiple models. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>ENSEMBLING</code> mode.</p> <p>The <code>HYPERPARAMETER_TUNING</code>
     * (HPO) mode uses the best hyperparameters to train the best version of a model.
     * HPO will automatically select an algorithm for the type of problem you want to
     * solve. Then HPO finds the best hyperparameters according to your objective
     * metric. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>HYPERPARAMETER_TUNING</code> mode.</p>
     */
    inline void SetMode(const AutoMLMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The method that Autopilot uses to train the data. You can either specify the
     * mode manually or let Autopilot choose for you based on the dataset size by
     * selecting <code>AUTO</code>. In <code>AUTO</code> mode, Autopilot chooses
     * <code>ENSEMBLING</code> for datasets smaller than 100 MB, and
     * <code>HYPERPARAMETER_TUNING</code> for larger ones.</p> <p>The
     * <code>ENSEMBLING</code> mode uses a multi-stack ensemble model to predict
     * classification and regression tasks directly from your dataset. This machine
     * learning mode combines several base models to produce an optimal predictive
     * model. It then uses a stacking ensemble method to combine predictions from
     * contributing members. A multi-stack ensemble model can provide better
     * performance over a single model by combining the predictive capabilities of
     * multiple models. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>ENSEMBLING</code> mode.</p> <p>The <code>HYPERPARAMETER_TUNING</code>
     * (HPO) mode uses the best hyperparameters to train the best version of a model.
     * HPO will automatically select an algorithm for the type of problem you want to
     * solve. Then HPO finds the best hyperparameters according to your objective
     * metric. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>HYPERPARAMETER_TUNING</code> mode.</p>
     */
    inline void SetMode(AutoMLMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The method that Autopilot uses to train the data. You can either specify the
     * mode manually or let Autopilot choose for you based on the dataset size by
     * selecting <code>AUTO</code>. In <code>AUTO</code> mode, Autopilot chooses
     * <code>ENSEMBLING</code> for datasets smaller than 100 MB, and
     * <code>HYPERPARAMETER_TUNING</code> for larger ones.</p> <p>The
     * <code>ENSEMBLING</code> mode uses a multi-stack ensemble model to predict
     * classification and regression tasks directly from your dataset. This machine
     * learning mode combines several base models to produce an optimal predictive
     * model. It then uses a stacking ensemble method to combine predictions from
     * contributing members. A multi-stack ensemble model can provide better
     * performance over a single model by combining the predictive capabilities of
     * multiple models. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>ENSEMBLING</code> mode.</p> <p>The <code>HYPERPARAMETER_TUNING</code>
     * (HPO) mode uses the best hyperparameters to train the best version of a model.
     * HPO will automatically select an algorithm for the type of problem you want to
     * solve. Then HPO finds the best hyperparameters according to your objective
     * metric. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>HYPERPARAMETER_TUNING</code> mode.</p>
     */
    inline AutoMLJobConfig& WithMode(const AutoMLMode& value) { SetMode(value); return *this;}

    /**
     * <p>The method that Autopilot uses to train the data. You can either specify the
     * mode manually or let Autopilot choose for you based on the dataset size by
     * selecting <code>AUTO</code>. In <code>AUTO</code> mode, Autopilot chooses
     * <code>ENSEMBLING</code> for datasets smaller than 100 MB, and
     * <code>HYPERPARAMETER_TUNING</code> for larger ones.</p> <p>The
     * <code>ENSEMBLING</code> mode uses a multi-stack ensemble model to predict
     * classification and regression tasks directly from your dataset. This machine
     * learning mode combines several base models to produce an optimal predictive
     * model. It then uses a stacking ensemble method to combine predictions from
     * contributing members. A multi-stack ensemble model can provide better
     * performance over a single model by combining the predictive capabilities of
     * multiple models. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>ENSEMBLING</code> mode.</p> <p>The <code>HYPERPARAMETER_TUNING</code>
     * (HPO) mode uses the best hyperparameters to train the best version of a model.
     * HPO will automatically select an algorithm for the type of problem you want to
     * solve. Then HPO finds the best hyperparameters according to your objective
     * metric. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-suppprt">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>HYPERPARAMETER_TUNING</code> mode.</p>
     */
    inline AutoMLJobConfig& WithMode(AutoMLMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;

    AutoMLSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    AutoMLDataSplitConfig m_dataSplitConfig;
    bool m_dataSplitConfigHasBeenSet = false;

    AutoMLCandidateGenerationConfig m_candidateGenerationConfig;
    bool m_candidateGenerationConfigHasBeenSet = false;

    AutoMLMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
