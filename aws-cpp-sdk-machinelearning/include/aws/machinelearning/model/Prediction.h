/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/machinelearning/model/DetailsAttributes.h>

namespace Aws
{
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
   * <p>The output from a <code>Predict</code> operation: </p> <ul> <li> <p>
   * <code>Details</code> - Contains the following attributes:
   * <code>DetailsAttributes.PREDICTIVE_MODEL_TYPE - REGRESSION | BINARY |
   * MULTICLASS</code> <code>DetailsAttributes.ALGORITHM - SGD</code> </p> </li> <li>
   * <p> <code>PredictedLabel</code> - Present for either a <code>BINARY</code> or
   * <code>MULTICLASS</code> <code>MLModel</code> request. </p> </li> <li> <p>
   * <code>PredictedScores</code> - Contains the raw classification score
   * corresponding to each label. </p> </li> <li> <p> <code>PredictedValue</code> -
   * Present for a <code>REGRESSION</code> <code>MLModel</code> request. </p> </li>
   * </ul>
   */
  class AWS_MACHINELEARNING_API Prediction
  {
  public:
    Prediction();
    Prediction(const Aws::Utils::Json::JsonValue& jsonValue);
    Prediction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetPredictedLabel() const{ return m_predictedLabel; }

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline void SetPredictedLabel(const Aws::String& value) { m_predictedLabelHasBeenSet = true; m_predictedLabel = value; }

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline void SetPredictedLabel(Aws::String&& value) { m_predictedLabelHasBeenSet = true; m_predictedLabel = value; }

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline void SetPredictedLabel(const char* value) { m_predictedLabelHasBeenSet = true; m_predictedLabel.assign(value); }

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline Prediction& WithPredictedLabel(const Aws::String& value) { SetPredictedLabel(value); return *this;}

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline Prediction& WithPredictedLabel(Aws::String&& value) { SetPredictedLabel(value); return *this;}

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline Prediction& WithPredictedLabel(const char* value) { SetPredictedLabel(value); return *this;}

    /**
     * The prediction value for <code>REGRESSION</code> <code>MLModel</code>.
     */
    inline double GetPredictedValue() const{ return m_predictedValue; }

    /**
     * The prediction value for <code>REGRESSION</code> <code>MLModel</code>.
     */
    inline void SetPredictedValue(double value) { m_predictedValueHasBeenSet = true; m_predictedValue = value; }

    /**
     * The prediction value for <code>REGRESSION</code> <code>MLModel</code>.
     */
    inline Prediction& WithPredictedValue(double value) { SetPredictedValue(value); return *this;}

    
    inline const Aws::Map<Aws::String, double>& GetPredictedScores() const{ return m_predictedScores; }

    
    inline void SetPredictedScores(const Aws::Map<Aws::String, double>& value) { m_predictedScoresHasBeenSet = true; m_predictedScores = value; }

    
    inline void SetPredictedScores(Aws::Map<Aws::String, double>&& value) { m_predictedScoresHasBeenSet = true; m_predictedScores = value; }

    
    inline Prediction& WithPredictedScores(const Aws::Map<Aws::String, double>& value) { SetPredictedScores(value); return *this;}

    
    inline Prediction& WithPredictedScores(Aws::Map<Aws::String, double>&& value) { SetPredictedScores(value); return *this;}

    
    inline Prediction& AddPredictedScores(const Aws::String& key, double value) { m_predictedScoresHasBeenSet = true; m_predictedScores[key] = value; return *this; }

    
    inline Prediction& AddPredictedScores(Aws::String&& key, double value) { m_predictedScoresHasBeenSet = true; m_predictedScores[key] = value; return *this; }

    
    inline Prediction& AddPredictedScores(const char* key, double value) { m_predictedScoresHasBeenSet = true; m_predictedScores[key] = value; return *this; }

    
    inline const Aws::Map<DetailsAttributes, Aws::String>& GetDetails() const{ return m_details; }

    
    inline void SetDetails(const Aws::Map<DetailsAttributes, Aws::String>& value) { m_detailsHasBeenSet = true; m_details = value; }

    
    inline void SetDetails(Aws::Map<DetailsAttributes, Aws::String>&& value) { m_detailsHasBeenSet = true; m_details = value; }

    
    inline Prediction& WithDetails(const Aws::Map<DetailsAttributes, Aws::String>& value) { SetDetails(value); return *this;}

    
    inline Prediction& WithDetails(Aws::Map<DetailsAttributes, Aws::String>&& value) { SetDetails(value); return *this;}

    
    inline Prediction& AddDetails(const DetailsAttributes& key, const Aws::String& value) { m_detailsHasBeenSet = true; m_details[key] = value; return *this; }

    
    inline Prediction& AddDetails(DetailsAttributes&& key, const Aws::String& value) { m_detailsHasBeenSet = true; m_details[key] = value; return *this; }

    
    inline Prediction& AddDetails(const DetailsAttributes& key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details[key] = value; return *this; }

    
    inline Prediction& AddDetails(DetailsAttributes&& key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details[key] = value; return *this; }

    
    inline Prediction& AddDetails(DetailsAttributes&& key, const char* value) { m_detailsHasBeenSet = true; m_details[key] = value; return *this; }

    
    inline Prediction& AddDetails(const DetailsAttributes& key, const char* value) { m_detailsHasBeenSet = true; m_details[key] = value; return *this; }

  private:
    Aws::String m_predictedLabel;
    bool m_predictedLabelHasBeenSet;
    double m_predictedValue;
    bool m_predictedValueHasBeenSet;
    Aws::Map<Aws::String, double> m_predictedScores;
    bool m_predictedScoresHasBeenSet;
    Aws::Map<DetailsAttributes, Aws::String> m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
