/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/MembershipModelTrainingPaymentConfig.h>
#include <aws/cleanrooms/model/MembershipModelInferencePaymentConfig.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MembershipMLPaymentConfig">AWS
   * API Reference</a></p>
   */
  class MembershipMLPaymentConfig
  {
  public:
    AWS_CLEANROOMS_API MembershipMLPaymentConfig();
    AWS_CLEANROOMS_API MembershipMLPaymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MembershipMLPaymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The payment responsibilities accepted by the member for model training.</p>
     */
    inline const MembershipModelTrainingPaymentConfig& GetModelTraining() const{ return m_modelTraining; }
    inline bool ModelTrainingHasBeenSet() const { return m_modelTrainingHasBeenSet; }
    inline void SetModelTraining(const MembershipModelTrainingPaymentConfig& value) { m_modelTrainingHasBeenSet = true; m_modelTraining = value; }
    inline void SetModelTraining(MembershipModelTrainingPaymentConfig&& value) { m_modelTrainingHasBeenSet = true; m_modelTraining = std::move(value); }
    inline MembershipMLPaymentConfig& WithModelTraining(const MembershipModelTrainingPaymentConfig& value) { SetModelTraining(value); return *this;}
    inline MembershipMLPaymentConfig& WithModelTraining(MembershipModelTrainingPaymentConfig&& value) { SetModelTraining(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment responsibilities accepted by the member for model inference.</p>
     */
    inline const MembershipModelInferencePaymentConfig& GetModelInference() const{ return m_modelInference; }
    inline bool ModelInferenceHasBeenSet() const { return m_modelInferenceHasBeenSet; }
    inline void SetModelInference(const MembershipModelInferencePaymentConfig& value) { m_modelInferenceHasBeenSet = true; m_modelInference = value; }
    inline void SetModelInference(MembershipModelInferencePaymentConfig&& value) { m_modelInferenceHasBeenSet = true; m_modelInference = std::move(value); }
    inline MembershipMLPaymentConfig& WithModelInference(const MembershipModelInferencePaymentConfig& value) { SetModelInference(value); return *this;}
    inline MembershipMLPaymentConfig& WithModelInference(MembershipModelInferencePaymentConfig&& value) { SetModelInference(std::move(value)); return *this;}
    ///@}
  private:

    MembershipModelTrainingPaymentConfig m_modelTraining;
    bool m_modelTrainingHasBeenSet = false;

    MembershipModelInferencePaymentConfig m_modelInference;
    bool m_modelInferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
