/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/ModelVersionEvaluation.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The model version evaluated for generating prediction. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/EvaluatedModelVersion">AWS
   * API Reference</a></p>
   */
  class EvaluatedModelVersion
  {
  public:
    AWS_FRAUDDETECTOR_API EvaluatedModelVersion();
    AWS_FRAUDDETECTOR_API EvaluatedModelVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EvaluatedModelVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The model ID. </p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p> The model ID. </p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p> The model ID. </p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p> The model ID. </p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p> The model ID. </p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p> The model ID. </p>
     */
    inline EvaluatedModelVersion& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p> The model ID. </p>
     */
    inline EvaluatedModelVersion& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p> The model ID. </p>
     */
    inline EvaluatedModelVersion& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p> The model version. </p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p> The model version. </p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p> The model version. </p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p> The model version. </p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p> The model version. </p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p> The model version. </p>
     */
    inline EvaluatedModelVersion& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p> The model version. </p>
     */
    inline EvaluatedModelVersion& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p> The model version. </p>
     */
    inline EvaluatedModelVersion& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>The model type. </p> <p>Valid values: <code>ONLINE_FRAUD_INSIGHTS</code> |
     * <code>TRANSACTION_FRAUD_INSIGHTS</code> </p>
     */
    inline const Aws::String& GetModelType() const{ return m_modelType; }

    /**
     * <p>The model type. </p> <p>Valid values: <code>ONLINE_FRAUD_INSIGHTS</code> |
     * <code>TRANSACTION_FRAUD_INSIGHTS</code> </p>
     */
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }

    /**
     * <p>The model type. </p> <p>Valid values: <code>ONLINE_FRAUD_INSIGHTS</code> |
     * <code>TRANSACTION_FRAUD_INSIGHTS</code> </p>
     */
    inline void SetModelType(const Aws::String& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }

    /**
     * <p>The model type. </p> <p>Valid values: <code>ONLINE_FRAUD_INSIGHTS</code> |
     * <code>TRANSACTION_FRAUD_INSIGHTS</code> </p>
     */
    inline void SetModelType(Aws::String&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }

    /**
     * <p>The model type. </p> <p>Valid values: <code>ONLINE_FRAUD_INSIGHTS</code> |
     * <code>TRANSACTION_FRAUD_INSIGHTS</code> </p>
     */
    inline void SetModelType(const char* value) { m_modelTypeHasBeenSet = true; m_modelType.assign(value); }

    /**
     * <p>The model type. </p> <p>Valid values: <code>ONLINE_FRAUD_INSIGHTS</code> |
     * <code>TRANSACTION_FRAUD_INSIGHTS</code> </p>
     */
    inline EvaluatedModelVersion& WithModelType(const Aws::String& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type. </p> <p>Valid values: <code>ONLINE_FRAUD_INSIGHTS</code> |
     * <code>TRANSACTION_FRAUD_INSIGHTS</code> </p>
     */
    inline EvaluatedModelVersion& WithModelType(Aws::String&& value) { SetModelType(std::move(value)); return *this;}

    /**
     * <p>The model type. </p> <p>Valid values: <code>ONLINE_FRAUD_INSIGHTS</code> |
     * <code>TRANSACTION_FRAUD_INSIGHTS</code> </p>
     */
    inline EvaluatedModelVersion& WithModelType(const char* value) { SetModelType(value); return *this;}


    /**
     * <p> Evaluations generated for the model version. </p>
     */
    inline const Aws::Vector<ModelVersionEvaluation>& GetEvaluations() const{ return m_evaluations; }

    /**
     * <p> Evaluations generated for the model version. </p>
     */
    inline bool EvaluationsHasBeenSet() const { return m_evaluationsHasBeenSet; }

    /**
     * <p> Evaluations generated for the model version. </p>
     */
    inline void SetEvaluations(const Aws::Vector<ModelVersionEvaluation>& value) { m_evaluationsHasBeenSet = true; m_evaluations = value; }

    /**
     * <p> Evaluations generated for the model version. </p>
     */
    inline void SetEvaluations(Aws::Vector<ModelVersionEvaluation>&& value) { m_evaluationsHasBeenSet = true; m_evaluations = std::move(value); }

    /**
     * <p> Evaluations generated for the model version. </p>
     */
    inline EvaluatedModelVersion& WithEvaluations(const Aws::Vector<ModelVersionEvaluation>& value) { SetEvaluations(value); return *this;}

    /**
     * <p> Evaluations generated for the model version. </p>
     */
    inline EvaluatedModelVersion& WithEvaluations(Aws::Vector<ModelVersionEvaluation>&& value) { SetEvaluations(std::move(value)); return *this;}

    /**
     * <p> Evaluations generated for the model version. </p>
     */
    inline EvaluatedModelVersion& AddEvaluations(const ModelVersionEvaluation& value) { m_evaluationsHasBeenSet = true; m_evaluations.push_back(value); return *this; }

    /**
     * <p> Evaluations generated for the model version. </p>
     */
    inline EvaluatedModelVersion& AddEvaluations(ModelVersionEvaluation&& value) { m_evaluationsHasBeenSet = true; m_evaluations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_modelType;
    bool m_modelTypeHasBeenSet = false;

    Aws::Vector<ModelVersionEvaluation> m_evaluations;
    bool m_evaluationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
