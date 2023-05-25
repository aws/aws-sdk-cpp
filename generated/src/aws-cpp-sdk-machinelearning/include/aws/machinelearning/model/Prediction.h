/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/machinelearning/model/DetailsAttributes.h>
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
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/Prediction">AWS
   * API Reference</a></p>
   */
  class Prediction
  {
  public:
    AWS_MACHINELEARNING_API Prediction();
    AWS_MACHINELEARNING_API Prediction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Prediction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetPredictedLabel() const{ return m_predictedLabel; }

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline bool PredictedLabelHasBeenSet() const { return m_predictedLabelHasBeenSet; }

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline void SetPredictedLabel(const Aws::String& value) { m_predictedLabelHasBeenSet = true; m_predictedLabel = value; }

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline void SetPredictedLabel(Aws::String&& value) { m_predictedLabelHasBeenSet = true; m_predictedLabel = std::move(value); }

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
    inline Prediction& WithPredictedLabel(Aws::String&& value) { SetPredictedLabel(std::move(value)); return *this;}

    /**
     * <p>The prediction label for either a <code>BINARY</code> or
     * <code>MULTICLASS</code> <code>MLModel</code>.</p>
     */
    inline Prediction& WithPredictedLabel(const char* value) { SetPredictedLabel(value); return *this;}


    /**
     * <p>The prediction value for <code>REGRESSION</code> <code>MLModel</code>.</p>
     */
    inline double GetPredictedValue() const{ return m_predictedValue; }

    /**
     * <p>The prediction value for <code>REGRESSION</code> <code>MLModel</code>.</p>
     */
    inline bool PredictedValueHasBeenSet() const { return m_predictedValueHasBeenSet; }

    /**
     * <p>The prediction value for <code>REGRESSION</code> <code>MLModel</code>.</p>
     */
    inline void SetPredictedValue(double value) { m_predictedValueHasBeenSet = true; m_predictedValue = value; }

    /**
     * <p>The prediction value for <code>REGRESSION</code> <code>MLModel</code>.</p>
     */
    inline Prediction& WithPredictedValue(double value) { SetPredictedValue(value); return *this;}


    
    inline const Aws::Map<Aws::String, double>& GetPredictedScores() const{ return m_predictedScores; }

    
    inline bool PredictedScoresHasBeenSet() const { return m_predictedScoresHasBeenSet; }

    
    inline void SetPredictedScores(const Aws::Map<Aws::String, double>& value) { m_predictedScoresHasBeenSet = true; m_predictedScores = value; }

    
    inline void SetPredictedScores(Aws::Map<Aws::String, double>&& value) { m_predictedScoresHasBeenSet = true; m_predictedScores = std::move(value); }

    
    inline Prediction& WithPredictedScores(const Aws::Map<Aws::String, double>& value) { SetPredictedScores(value); return *this;}

    
    inline Prediction& WithPredictedScores(Aws::Map<Aws::String, double>&& value) { SetPredictedScores(std::move(value)); return *this;}

    
    inline Prediction& AddPredictedScores(const Aws::String& key, double value) { m_predictedScoresHasBeenSet = true; m_predictedScores.emplace(key, value); return *this; }

    
    inline Prediction& AddPredictedScores(Aws::String&& key, double value) { m_predictedScoresHasBeenSet = true; m_predictedScores.emplace(std::move(key), value); return *this; }

    
    inline Prediction& AddPredictedScores(const char* key, double value) { m_predictedScoresHasBeenSet = true; m_predictedScores.emplace(key, value); return *this; }


    
    inline const Aws::Map<DetailsAttributes, Aws::String>& GetDetails() const{ return m_details; }

    
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    
    inline void SetDetails(const Aws::Map<DetailsAttributes, Aws::String>& value) { m_detailsHasBeenSet = true; m_details = value; }

    
    inline void SetDetails(Aws::Map<DetailsAttributes, Aws::String>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    
    inline Prediction& WithDetails(const Aws::Map<DetailsAttributes, Aws::String>& value) { SetDetails(value); return *this;}

    
    inline Prediction& WithDetails(Aws::Map<DetailsAttributes, Aws::String>&& value) { SetDetails(std::move(value)); return *this;}

    
    inline Prediction& AddDetails(const DetailsAttributes& key, const Aws::String& value) { m_detailsHasBeenSet = true; m_details.emplace(key, value); return *this; }

    
    inline Prediction& AddDetails(DetailsAttributes&& key, const Aws::String& value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), value); return *this; }

    
    inline Prediction& AddDetails(const DetailsAttributes& key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details.emplace(key, std::move(value)); return *this; }

    
    inline Prediction& AddDetails(DetailsAttributes&& key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), std::move(value)); return *this; }

    
    inline Prediction& AddDetails(DetailsAttributes&& key, const char* value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), value); return *this; }

    
    inline Prediction& AddDetails(const DetailsAttributes& key, const char* value) { m_detailsHasBeenSet = true; m_details.emplace(key, value); return *this; }

  private:

    Aws::String m_predictedLabel;
    bool m_predictedLabelHasBeenSet = false;

    double m_predictedValue;
    bool m_predictedValueHasBeenSet = false;

    Aws::Map<Aws::String, double> m_predictedScores;
    bool m_predictedScoresHasBeenSet = false;

    Aws::Map<DetailsAttributes, Aws::String> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
