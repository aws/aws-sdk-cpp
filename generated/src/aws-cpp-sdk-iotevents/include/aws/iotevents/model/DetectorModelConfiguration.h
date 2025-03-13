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
   * <p>Information about how the detector model is configured.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DetectorModelConfiguration">AWS
   * API Reference</a></p>
   */
  class DetectorModelConfiguration
  {
  public:
    AWS_IOTEVENTS_API DetectorModelConfiguration() = default;
    AWS_IOTEVENTS_API DetectorModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DetectorModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    DetectorModelConfiguration& WithDetectorModelName(DetectorModelNameT&& value) { SetDetectorModelName(std::forward<DetectorModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelVersion() const { return m_detectorModelVersion; }
    inline bool DetectorModelVersionHasBeenSet() const { return m_detectorModelVersionHasBeenSet; }
    template<typename DetectorModelVersionT = Aws::String>
    void SetDetectorModelVersion(DetectorModelVersionT&& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = std::forward<DetectorModelVersionT>(value); }
    template<typename DetectorModelVersionT = Aws::String>
    DetectorModelConfiguration& WithDetectorModelVersion(DetectorModelVersionT&& value) { SetDetectorModelVersion(std::forward<DetectorModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelDescription() const { return m_detectorModelDescription; }
    inline bool DetectorModelDescriptionHasBeenSet() const { return m_detectorModelDescriptionHasBeenSet; }
    template<typename DetectorModelDescriptionT = Aws::String>
    void SetDetectorModelDescription(DetectorModelDescriptionT&& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = std::forward<DetectorModelDescriptionT>(value); }
    template<typename DetectorModelDescriptionT = Aws::String>
    DetectorModelConfiguration& WithDetectorModelDescription(DetectorModelDescriptionT&& value) { SetDetectorModelDescription(std::forward<DetectorModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelArn() const { return m_detectorModelArn; }
    inline bool DetectorModelArnHasBeenSet() const { return m_detectorModelArnHasBeenSet; }
    template<typename DetectorModelArnT = Aws::String>
    void SetDetectorModelArn(DetectorModelArnT&& value) { m_detectorModelArnHasBeenSet = true; m_detectorModelArn = std::forward<DetectorModelArnT>(value); }
    template<typename DetectorModelArnT = Aws::String>
    DetectorModelConfiguration& WithDetectorModelArn(DetectorModelArnT&& value) { SetDetectorModelArn(std::forward<DetectorModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DetectorModelConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DetectorModelConfiguration& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector model was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    DetectorModelConfiguration& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the detector model.</p>
     */
    inline DetectorModelVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DetectorModelVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DetectorModelConfiguration& WithStatus(DetectorModelVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value used to identify a detector instance. When a device or system sends
     * input, a new detector instance with a unique key value is created. AWS IoT
     * Events can continue to route input to its corresponding detector instance based
     * on this identifying information. </p> <p>This parameter uses a JSON-path
     * expression to select the attribute-value pair in the message payload that is
     * used for identification. To route the message to the correct detector instance,
     * the device must send a message payload that contains the same
     * attribute-value.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    DetectorModelConfiguration& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline EvaluationMethod GetEvaluationMethod() const { return m_evaluationMethod; }
    inline bool EvaluationMethodHasBeenSet() const { return m_evaluationMethodHasBeenSet; }
    inline void SetEvaluationMethod(EvaluationMethod value) { m_evaluationMethodHasBeenSet = true; m_evaluationMethod = value; }
    inline DetectorModelConfiguration& WithEvaluationMethod(EvaluationMethod value) { SetEvaluationMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_detectorModelVersion;
    bool m_detectorModelVersionHasBeenSet = false;

    Aws::String m_detectorModelDescription;
    bool m_detectorModelDescriptionHasBeenSet = false;

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

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    EvaluationMethod m_evaluationMethod{EvaluationMethod::NOT_SET};
    bool m_evaluationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
