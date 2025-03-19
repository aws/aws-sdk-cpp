/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotevents/model/DetectorModelVersionStatus.h>
#include <aws/iotevents/model/EvaluationMethod.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Information about the detector model version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DetectorModelVersionSummary">AWS
   * API Reference</a></p>
   */
  class DetectorModelVersionSummary
  {
  public:
    AWS_IOTEVENTS_API DetectorModelVersionSummary() = default;
    AWS_IOTEVENTS_API DetectorModelVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DetectorModelVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const { return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    template<typename DetectorModelNameT = Aws::String>
    void SetDetectorModelName(DetectorModelNameT&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::forward<DetectorModelNameT>(value); }
    template<typename DetectorModelNameT = Aws::String>
    DetectorModelVersionSummary& WithDetectorModelName(DetectorModelNameT&& value) { SetDetectorModelName(std::forward<DetectorModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the detector model version.</p>
     */
    inline const Aws::String& GetDetectorModelVersion() const { return m_detectorModelVersion; }
    inline bool DetectorModelVersionHasBeenSet() const { return m_detectorModelVersionHasBeenSet; }
    template<typename DetectorModelVersionT = Aws::String>
    void SetDetectorModelVersion(DetectorModelVersionT&& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = std::forward<DetectorModelVersionT>(value); }
    template<typename DetectorModelVersionT = Aws::String>
    DetectorModelVersionSummary& WithDetectorModelVersion(DetectorModelVersionT&& value) { SetDetectorModelVersion(std::forward<DetectorModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the detector model version.</p>
     */
    inline const Aws::String& GetDetectorModelArn() const { return m_detectorModelArn; }
    inline bool DetectorModelArnHasBeenSet() const { return m_detectorModelArnHasBeenSet; }
    template<typename DetectorModelArnT = Aws::String>
    void SetDetectorModelArn(DetectorModelArnT&& value) { m_detectorModelArnHasBeenSet = true; m_detectorModelArn = std::forward<DetectorModelArnT>(value); }
    template<typename DetectorModelArnT = Aws::String>
    DetectorModelVersionSummary& WithDetectorModelArn(DetectorModelArnT&& value) { SetDetectorModelArn(std::forward<DetectorModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants the detector model permission to perform its
     * tasks.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DetectorModelVersionSummary& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector model version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DetectorModelVersionSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the detector model version was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    DetectorModelVersionSummary& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the detector model version.</p>
     */
    inline DetectorModelVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DetectorModelVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DetectorModelVersionSummary& WithStatus(DetectorModelVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline EvaluationMethod GetEvaluationMethod() const { return m_evaluationMethod; }
    inline bool EvaluationMethodHasBeenSet() const { return m_evaluationMethodHasBeenSet; }
    inline void SetEvaluationMethod(EvaluationMethod value) { m_evaluationMethodHasBeenSet = true; m_evaluationMethod = value; }
    inline DetectorModelVersionSummary& WithEvaluationMethod(EvaluationMethod value) { SetEvaluationMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_detectorModelVersion;
    bool m_detectorModelVersionHasBeenSet = false;

    Aws::String m_detectorModelArn;
    bool m_detectorModelArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    DetectorModelVersionStatus m_status{DetectorModelVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    EvaluationMethod m_evaluationMethod{EvaluationMethod::NOT_SET};
    bool m_evaluationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
