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
    AWS_FRAUDDETECTOR_API TrainingDataSchema();
    AWS_FRAUDDETECTOR_API TrainingDataSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingDataSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The training data schema variables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetModelVariables() const{ return m_modelVariables; }

    /**
     * <p>The training data schema variables.</p>
     */
    inline bool ModelVariablesHasBeenSet() const { return m_modelVariablesHasBeenSet; }

    /**
     * <p>The training data schema variables.</p>
     */
    inline void SetModelVariables(const Aws::Vector<Aws::String>& value) { m_modelVariablesHasBeenSet = true; m_modelVariables = value; }

    /**
     * <p>The training data schema variables.</p>
     */
    inline void SetModelVariables(Aws::Vector<Aws::String>&& value) { m_modelVariablesHasBeenSet = true; m_modelVariables = std::move(value); }

    /**
     * <p>The training data schema variables.</p>
     */
    inline TrainingDataSchema& WithModelVariables(const Aws::Vector<Aws::String>& value) { SetModelVariables(value); return *this;}

    /**
     * <p>The training data schema variables.</p>
     */
    inline TrainingDataSchema& WithModelVariables(Aws::Vector<Aws::String>&& value) { SetModelVariables(std::move(value)); return *this;}

    /**
     * <p>The training data schema variables.</p>
     */
    inline TrainingDataSchema& AddModelVariables(const Aws::String& value) { m_modelVariablesHasBeenSet = true; m_modelVariables.push_back(value); return *this; }

    /**
     * <p>The training data schema variables.</p>
     */
    inline TrainingDataSchema& AddModelVariables(Aws::String&& value) { m_modelVariablesHasBeenSet = true; m_modelVariables.push_back(std::move(value)); return *this; }

    /**
     * <p>The training data schema variables.</p>
     */
    inline TrainingDataSchema& AddModelVariables(const char* value) { m_modelVariablesHasBeenSet = true; m_modelVariables.push_back(value); return *this; }


    
    inline const LabelSchema& GetLabelSchema() const{ return m_labelSchema; }

    
    inline bool LabelSchemaHasBeenSet() const { return m_labelSchemaHasBeenSet; }

    
    inline void SetLabelSchema(const LabelSchema& value) { m_labelSchemaHasBeenSet = true; m_labelSchema = value; }

    
    inline void SetLabelSchema(LabelSchema&& value) { m_labelSchemaHasBeenSet = true; m_labelSchema = std::move(value); }

    
    inline TrainingDataSchema& WithLabelSchema(const LabelSchema& value) { SetLabelSchema(value); return *this;}

    
    inline TrainingDataSchema& WithLabelSchema(LabelSchema&& value) { SetLabelSchema(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_modelVariables;
    bool m_modelVariablesHasBeenSet = false;

    LabelSchema m_labelSchema;
    bool m_labelSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
