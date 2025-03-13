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
    AWS_IOT_API BehaviorModelTrainingSummary() = default;
    AWS_IOT_API BehaviorModelTrainingSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API BehaviorModelTrainingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the security profile. </p>
     */
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    BehaviorModelTrainingSummary& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the behavior. </p>
     */
    inline const Aws::String& GetBehaviorName() const { return m_behaviorName; }
    inline bool BehaviorNameHasBeenSet() const { return m_behaviorNameHasBeenSet; }
    template<typename BehaviorNameT = Aws::String>
    void SetBehaviorName(BehaviorNameT&& value) { m_behaviorNameHasBeenSet = true; m_behaviorName = std::forward<BehaviorNameT>(value); }
    template<typename BehaviorNameT = Aws::String>
    BehaviorModelTrainingSummary& WithBehaviorName(BehaviorNameT&& value) { SetBehaviorName(std::forward<BehaviorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date a training model started collecting data. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataCollectionStartDate() const { return m_trainingDataCollectionStartDate; }
    inline bool TrainingDataCollectionStartDateHasBeenSet() const { return m_trainingDataCollectionStartDateHasBeenSet; }
    template<typename TrainingDataCollectionStartDateT = Aws::Utils::DateTime>
    void SetTrainingDataCollectionStartDate(TrainingDataCollectionStartDateT&& value) { m_trainingDataCollectionStartDateHasBeenSet = true; m_trainingDataCollectionStartDate = std::forward<TrainingDataCollectionStartDateT>(value); }
    template<typename TrainingDataCollectionStartDateT = Aws::Utils::DateTime>
    BehaviorModelTrainingSummary& WithTrainingDataCollectionStartDate(TrainingDataCollectionStartDateT&& value) { SetTrainingDataCollectionStartDate(std::forward<TrainingDataCollectionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the behavior model. </p>
     */
    inline ModelStatus GetModelStatus() const { return m_modelStatus; }
    inline bool ModelStatusHasBeenSet() const { return m_modelStatusHasBeenSet; }
    inline void SetModelStatus(ModelStatus value) { m_modelStatusHasBeenSet = true; m_modelStatus = value; }
    inline BehaviorModelTrainingSummary& WithModelStatus(ModelStatus value) { SetModelStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The percentage of datapoints collected. </p>
     */
    inline double GetDatapointsCollectionPercentage() const { return m_datapointsCollectionPercentage; }
    inline bool DatapointsCollectionPercentageHasBeenSet() const { return m_datapointsCollectionPercentageHasBeenSet; }
    inline void SetDatapointsCollectionPercentage(double value) { m_datapointsCollectionPercentageHasBeenSet = true; m_datapointsCollectionPercentage = value; }
    inline BehaviorModelTrainingSummary& WithDatapointsCollectionPercentage(double value) { SetDatapointsCollectionPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date the model was last refreshed. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModelRefreshDate() const { return m_lastModelRefreshDate; }
    inline bool LastModelRefreshDateHasBeenSet() const { return m_lastModelRefreshDateHasBeenSet; }
    template<typename LastModelRefreshDateT = Aws::Utils::DateTime>
    void SetLastModelRefreshDate(LastModelRefreshDateT&& value) { m_lastModelRefreshDateHasBeenSet = true; m_lastModelRefreshDate = std::forward<LastModelRefreshDateT>(value); }
    template<typename LastModelRefreshDateT = Aws::Utils::DateTime>
    BehaviorModelTrainingSummary& WithLastModelRefreshDate(LastModelRefreshDateT&& value) { SetLastModelRefreshDate(std::forward<LastModelRefreshDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Aws::String m_behaviorName;
    bool m_behaviorNameHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataCollectionStartDate{};
    bool m_trainingDataCollectionStartDateHasBeenSet = false;

    ModelStatus m_modelStatus{ModelStatus::NOT_SET};
    bool m_modelStatusHasBeenSet = false;

    double m_datapointsCollectionPercentage{0.0};
    bool m_datapointsCollectionPercentageHasBeenSet = false;

    Aws::Utils::DateTime m_lastModelRefreshDate{};
    bool m_lastModelRefreshDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
