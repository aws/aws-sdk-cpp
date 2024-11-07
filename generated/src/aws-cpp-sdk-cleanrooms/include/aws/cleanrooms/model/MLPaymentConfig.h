/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ModelTrainingPaymentConfig.h>
#include <aws/cleanrooms/model/ModelInferencePaymentConfig.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>An object representing the collaboration member's machine learning payment
   * responsibilities set by the collaboration creator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MLPaymentConfig">AWS
   * API Reference</a></p>
   */
  class MLPaymentConfig
  {
  public:
    AWS_CLEANROOMS_API MLPaymentConfig();
    AWS_CLEANROOMS_API MLPaymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MLPaymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The payment responsibilities accepted by the member for model training.</p>
     */
    inline const ModelTrainingPaymentConfig& GetModelTraining() const{ return m_modelTraining; }
    inline bool ModelTrainingHasBeenSet() const { return m_modelTrainingHasBeenSet; }
    inline void SetModelTraining(const ModelTrainingPaymentConfig& value) { m_modelTrainingHasBeenSet = true; m_modelTraining = value; }
    inline void SetModelTraining(ModelTrainingPaymentConfig&& value) { m_modelTrainingHasBeenSet = true; m_modelTraining = std::move(value); }
    inline MLPaymentConfig& WithModelTraining(const ModelTrainingPaymentConfig& value) { SetModelTraining(value); return *this;}
    inline MLPaymentConfig& WithModelTraining(ModelTrainingPaymentConfig&& value) { SetModelTraining(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment responsibilities accepted by the member for model inference.</p>
     */
    inline const ModelInferencePaymentConfig& GetModelInference() const{ return m_modelInference; }
    inline bool ModelInferenceHasBeenSet() const { return m_modelInferenceHasBeenSet; }
    inline void SetModelInference(const ModelInferencePaymentConfig& value) { m_modelInferenceHasBeenSet = true; m_modelInference = value; }
    inline void SetModelInference(ModelInferencePaymentConfig&& value) { m_modelInferenceHasBeenSet = true; m_modelInference = std::move(value); }
    inline MLPaymentConfig& WithModelInference(const ModelInferencePaymentConfig& value) { SetModelInference(value); return *this;}
    inline MLPaymentConfig& WithModelInference(ModelInferencePaymentConfig&& value) { SetModelInference(std::move(value)); return *this;}
    ///@}
  private:

    ModelTrainingPaymentConfig m_modelTraining;
    bool m_modelTrainingHasBeenSet = false;

    ModelInferencePaymentConfig m_modelInference;
    bool m_modelInferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
