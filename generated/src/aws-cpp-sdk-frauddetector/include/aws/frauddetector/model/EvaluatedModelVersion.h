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
    AWS_FRAUDDETECTOR_API EvaluatedModelVersion() = default;
    AWS_FRAUDDETECTOR_API EvaluatedModelVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EvaluatedModelVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The model ID. </p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    EvaluatedModelVersion& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The model version. </p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    EvaluatedModelVersion& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type. </p> <p>Valid values: <code>ONLINE_FRAUD_INSIGHTS</code> |
     * <code>TRANSACTION_FRAUD_INSIGHTS</code> </p>
     */
    inline const Aws::String& GetModelType() const { return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    template<typename ModelTypeT = Aws::String>
    void SetModelType(ModelTypeT&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::forward<ModelTypeT>(value); }
    template<typename ModelTypeT = Aws::String>
    EvaluatedModelVersion& WithModelType(ModelTypeT&& value) { SetModelType(std::forward<ModelTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Evaluations generated for the model version. </p>
     */
    inline const Aws::Vector<ModelVersionEvaluation>& GetEvaluations() const { return m_evaluations; }
    inline bool EvaluationsHasBeenSet() const { return m_evaluationsHasBeenSet; }
    template<typename EvaluationsT = Aws::Vector<ModelVersionEvaluation>>
    void SetEvaluations(EvaluationsT&& value) { m_evaluationsHasBeenSet = true; m_evaluations = std::forward<EvaluationsT>(value); }
    template<typename EvaluationsT = Aws::Vector<ModelVersionEvaluation>>
    EvaluatedModelVersion& WithEvaluations(EvaluationsT&& value) { SetEvaluations(std::forward<EvaluationsT>(value)); return *this;}
    template<typename EvaluationsT = ModelVersionEvaluation>
    EvaluatedModelVersion& AddEvaluations(EvaluationsT&& value) { m_evaluationsHasBeenSet = true; m_evaluations.emplace_back(std::forward<EvaluationsT>(value)); return *this; }
    ///@}
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
