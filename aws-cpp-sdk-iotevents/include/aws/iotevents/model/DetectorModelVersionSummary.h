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
    AWS_IOTEVENTS_API DetectorModelVersionSummary();
    AWS_IOTEVENTS_API DetectorModelVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DetectorModelVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model.</p>
     */
    inline DetectorModelVersionSummary& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline DetectorModelVersionSummary& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline DetectorModelVersionSummary& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>The ID of the detector model version.</p>
     */
    inline const Aws::String& GetDetectorModelVersion() const{ return m_detectorModelVersion; }

    /**
     * <p>The ID of the detector model version.</p>
     */
    inline bool DetectorModelVersionHasBeenSet() const { return m_detectorModelVersionHasBeenSet; }

    /**
     * <p>The ID of the detector model version.</p>
     */
    inline void SetDetectorModelVersion(const Aws::String& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = value; }

    /**
     * <p>The ID of the detector model version.</p>
     */
    inline void SetDetectorModelVersion(Aws::String&& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = std::move(value); }

    /**
     * <p>The ID of the detector model version.</p>
     */
    inline void SetDetectorModelVersion(const char* value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion.assign(value); }

    /**
     * <p>The ID of the detector model version.</p>
     */
    inline DetectorModelVersionSummary& WithDetectorModelVersion(const Aws::String& value) { SetDetectorModelVersion(value); return *this;}

    /**
     * <p>The ID of the detector model version.</p>
     */
    inline DetectorModelVersionSummary& WithDetectorModelVersion(Aws::String&& value) { SetDetectorModelVersion(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector model version.</p>
     */
    inline DetectorModelVersionSummary& WithDetectorModelVersion(const char* value) { SetDetectorModelVersion(value); return *this;}


    /**
     * <p>The ARN of the detector model version.</p>
     */
    inline const Aws::String& GetDetectorModelArn() const{ return m_detectorModelArn; }

    /**
     * <p>The ARN of the detector model version.</p>
     */
    inline bool DetectorModelArnHasBeenSet() const { return m_detectorModelArnHasBeenSet; }

    /**
     * <p>The ARN of the detector model version.</p>
     */
    inline void SetDetectorModelArn(const Aws::String& value) { m_detectorModelArnHasBeenSet = true; m_detectorModelArn = value; }

    /**
     * <p>The ARN of the detector model version.</p>
     */
    inline void SetDetectorModelArn(Aws::String&& value) { m_detectorModelArnHasBeenSet = true; m_detectorModelArn = std::move(value); }

    /**
     * <p>The ARN of the detector model version.</p>
     */
    inline void SetDetectorModelArn(const char* value) { m_detectorModelArnHasBeenSet = true; m_detectorModelArn.assign(value); }

    /**
     * <p>The ARN of the detector model version.</p>
     */
    inline DetectorModelVersionSummary& WithDetectorModelArn(const Aws::String& value) { SetDetectorModelArn(value); return *this;}

    /**
     * <p>The ARN of the detector model version.</p>
     */
    inline DetectorModelVersionSummary& WithDetectorModelArn(Aws::String&& value) { SetDetectorModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the detector model version.</p>
     */
    inline DetectorModelVersionSummary& WithDetectorModelArn(const char* value) { SetDetectorModelArn(value); return *this;}


    /**
     * <p>The ARN of the role that grants the detector model permission to perform its
     * tasks.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants the detector model permission to perform its
     * tasks.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants the detector model permission to perform its
     * tasks.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants the detector model permission to perform its
     * tasks.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants the detector model permission to perform its
     * tasks.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants the detector model permission to perform its
     * tasks.</p>
     */
    inline DetectorModelVersionSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants the detector model permission to perform its
     * tasks.</p>
     */
    inline DetectorModelVersionSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants the detector model permission to perform its
     * tasks.</p>
     */
    inline DetectorModelVersionSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The time the detector model version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the detector model version was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the detector model version was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the detector model version was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the detector model version was created.</p>
     */
    inline DetectorModelVersionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the detector model version was created.</p>
     */
    inline DetectorModelVersionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the detector model version was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time the detector model version was updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time the detector model version was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the detector model version was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time the detector model version was updated.</p>
     */
    inline DetectorModelVersionSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the detector model version was updated.</p>
     */
    inline DetectorModelVersionSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The status of the detector model version.</p>
     */
    inline const DetectorModelVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the detector model version.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the detector model version.</p>
     */
    inline void SetStatus(const DetectorModelVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the detector model version.</p>
     */
    inline void SetStatus(DetectorModelVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the detector model version.</p>
     */
    inline DetectorModelVersionSummary& WithStatus(const DetectorModelVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the detector model version.</p>
     */
    inline DetectorModelVersionSummary& WithStatus(DetectorModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline const EvaluationMethod& GetEvaluationMethod() const{ return m_evaluationMethod; }

    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline bool EvaluationMethodHasBeenSet() const { return m_evaluationMethodHasBeenSet; }

    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline void SetEvaluationMethod(const EvaluationMethod& value) { m_evaluationMethodHasBeenSet = true; m_evaluationMethod = value; }

    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline void SetEvaluationMethod(EvaluationMethod&& value) { m_evaluationMethodHasBeenSet = true; m_evaluationMethod = std::move(value); }

    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline DetectorModelVersionSummary& WithEvaluationMethod(const EvaluationMethod& value) { SetEvaluationMethod(value); return *this;}

    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline DetectorModelVersionSummary& WithEvaluationMethod(EvaluationMethod&& value) { SetEvaluationMethod(std::move(value)); return *this;}

  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_detectorModelVersion;
    bool m_detectorModelVersionHasBeenSet = false;

    Aws::String m_detectorModelArn;
    bool m_detectorModelArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    DetectorModelVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    EvaluationMethod m_evaluationMethod;
    bool m_evaluationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
