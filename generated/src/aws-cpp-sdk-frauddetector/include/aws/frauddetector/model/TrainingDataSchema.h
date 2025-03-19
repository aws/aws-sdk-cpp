/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/LabelSchema.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The training data schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TrainingDataSchema">AWS
   * API Reference</a></p>
   */
  class TrainingDataSchema
  {
  public:
    AWS_FRAUDDETECTOR_API TrainingDataSchema() = default;
    AWS_FRAUDDETECTOR_API TrainingDataSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingDataSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The training data schema variables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetModelVariables() const { return m_modelVariables; }
    inline bool ModelVariablesHasBeenSet() const { return m_modelVariablesHasBeenSet; }
    template<typename ModelVariablesT = Aws::Vector<Aws::String>>
    void SetModelVariables(ModelVariablesT&& value) { m_modelVariablesHasBeenSet = true; m_modelVariables = std::forward<ModelVariablesT>(value); }
    template<typename ModelVariablesT = Aws::Vector<Aws::String>>
    TrainingDataSchema& WithModelVariables(ModelVariablesT&& value) { SetModelVariables(std::forward<ModelVariablesT>(value)); return *this;}
    template<typename ModelVariablesT = Aws::String>
    TrainingDataSchema& AddModelVariables(ModelVariablesT&& value) { m_modelVariablesHasBeenSet = true; m_modelVariables.emplace_back(std::forward<ModelVariablesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const LabelSchema& GetLabelSchema() const { return m_labelSchema; }
    inline bool LabelSchemaHasBeenSet() const { return m_labelSchemaHasBeenSet; }
    template<typename LabelSchemaT = LabelSchema>
    void SetLabelSchema(LabelSchemaT&& value) { m_labelSchemaHasBeenSet = true; m_labelSchema = std::forward<LabelSchemaT>(value); }
    template<typename LabelSchemaT = LabelSchema>
    TrainingDataSchema& WithLabelSchema(LabelSchemaT&& value) { SetLabelSchema(std::forward<LabelSchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_modelVariables;
    bool m_modelVariablesHasBeenSet = false;

    LabelSchema m_labelSchema;
    bool m_labelSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
