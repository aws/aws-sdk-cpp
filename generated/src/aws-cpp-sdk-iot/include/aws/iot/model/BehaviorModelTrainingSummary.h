/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/ModelStatus.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p> The summary of an ML Detect behavior model. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/BehaviorModelTrainingSummary">AWS
   * API Reference</a></p>
   */
  class BehaviorModelTrainingSummary
  {
  public:
    AWS_IOT_API BehaviorModelTrainingSummary();
    AWS_IOT_API BehaviorModelTrainingSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API BehaviorModelTrainingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the security profile. </p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }
    inline BehaviorModelTrainingSummary& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}
    inline BehaviorModelTrainingSummary& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}
    inline BehaviorModelTrainingSummary& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the behavior. </p>
     */
    inline const Aws::String& GetBehaviorName() const{ return m_behaviorName; }
    inline bool BehaviorNameHasBeenSet() const { return m_behaviorNameHasBeenSet; }
    inline void SetBehaviorName(const Aws::String& value) { m_behaviorNameHasBeenSet = true; m_behaviorName = value; }
    inline void SetBehaviorName(Aws::String&& value) { m_behaviorNameHasBeenSet = true; m_behaviorName = std::move(value); }
    inline void SetBehaviorName(const char* value) { m_behaviorNameHasBeenSet = true; m_behaviorName.assign(value); }
    inline BehaviorModelTrainingSummary& WithBehaviorName(const Aws::String& value) { SetBehaviorName(value); return *this;}
    inline BehaviorModelTrainingSummary& WithBehaviorName(Aws::String&& value) { SetBehaviorName(std::move(value)); return *this;}
    inline BehaviorModelTrainingSummary& WithBehaviorName(const char* value) { SetBehaviorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date a training model started collecting data. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataCollectionStartDate() const{ return m_trainingDataCollectionStartDate; }
    inline bool TrainingDataCollectionStartDateHasBeenSet() const { return m_trainingDataCollectionStartDateHasBeenSet; }
    inline void SetTrainingDataCollectionStartDate(const Aws::Utils::DateTime& value) { m_trainingDataCollectionStartDateHasBeenSet = true; m_trainingDataCollectionStartDate = value; }
    inline void SetTrainingDataCollectionStartDate(Aws::Utils::DateTime&& value) { m_trainingDataCollectionStartDateHasBeenSet = true; m_trainingDataCollectionStartDate = std::move(value); }
    inline BehaviorModelTrainingSummary& WithTrainingDataCollectionStartDate(const Aws::Utils::DateTime& value) { SetTrainingDataCollectionStartDate(value); return *this;}
    inline BehaviorModelTrainingSummary& WithTrainingDataCollectionStartDate(Aws::Utils::DateTime&& value) { SetTrainingDataCollectionStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the behavior model. </p>
     */
    inline const ModelStatus& GetModelStatus() const{ return m_modelStatus; }
    inline bool ModelStatusHasBeenSet() const { return m_modelStatusHasBeenSet; }
    inline void SetModelStatus(const ModelStatus& value) { m_modelStatusHasBeenSet = true; m_modelStatus = value; }
    inline void SetModelStatus(ModelStatus&& value) { m_modelStatusHasBeenSet = true; m_modelStatus = std::move(value); }
    inline BehaviorModelTrainingSummary& WithModelStatus(const ModelStatus& value) { SetModelStatus(value); return *this;}
    inline BehaviorModelTrainingSummary& WithModelStatus(ModelStatus&& value) { SetModelStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The percentage of datapoints collected. </p>
     */
    inline double GetDatapointsCollectionPercentage() const{ return m_datapointsCollectionPercentage; }
    inline bool DatapointsCollectionPercentageHasBeenSet() const { return m_datapointsCollectionPercentageHasBeenSet; }
    inline void SetDatapointsCollectionPercentage(double value) { m_datapointsCollectionPercentageHasBeenSet = true; m_datapointsCollectionPercentage = value; }
    inline BehaviorModelTrainingSummary& WithDatapointsCollectionPercentage(double value) { SetDatapointsCollectionPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date the model was last refreshed. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModelRefreshDate() const{ return m_lastModelRefreshDate; }
    inline bool LastModelRefreshDateHasBeenSet() const { return m_lastModelRefreshDateHasBeenSet; }
    inline void SetLastModelRefreshDate(const Aws::Utils::DateTime& value) { m_lastModelRefreshDateHasBeenSet = true; m_lastModelRefreshDate = value; }
    inline void SetLastModelRefreshDate(Aws::Utils::DateTime&& value) { m_lastModelRefreshDateHasBeenSet = true; m_lastModelRefreshDate = std::move(value); }
    inline BehaviorModelTrainingSummary& WithLastModelRefreshDate(const Aws::Utils::DateTime& value) { SetLastModelRefreshDate(value); return *this;}
    inline BehaviorModelTrainingSummary& WithLastModelRefreshDate(Aws::Utils::DateTime&& value) { SetLastModelRefreshDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Aws::String m_behaviorName;
    bool m_behaviorNameHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataCollectionStartDate;
    bool m_trainingDataCollectionStartDateHasBeenSet = false;

    ModelStatus m_modelStatus;
    bool m_modelStatusHasBeenSet = false;

    double m_datapointsCollectionPercentage;
    bool m_datapointsCollectionPercentageHasBeenSet = false;

    Aws::Utils::DateTime m_lastModelRefreshDate;
    bool m_lastModelRefreshDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
