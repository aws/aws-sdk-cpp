/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/DetectorModelDefinition.h>
#include <aws/iotevents/model/EvaluationMethod.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class UpdateDetectorModelRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API UpdateDetectorModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDetectorModel"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the detector model that is updated.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }
    inline UpdateDetectorModelRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}
    inline UpdateDetectorModelRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}
    inline UpdateDetectorModelRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline const DetectorModelDefinition& GetDetectorModelDefinition() const{ return m_detectorModelDefinition; }
    inline bool DetectorModelDefinitionHasBeenSet() const { return m_detectorModelDefinitionHasBeenSet; }
    inline void SetDetectorModelDefinition(const DetectorModelDefinition& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = value; }
    inline void SetDetectorModelDefinition(DetectorModelDefinition&& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = std::move(value); }
    inline UpdateDetectorModelRequest& WithDetectorModelDefinition(const DetectorModelDefinition& value) { SetDetectorModelDefinition(value); return *this;}
    inline UpdateDetectorModelRequest& WithDetectorModelDefinition(DetectorModelDefinition&& value) { SetDetectorModelDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelDescription() const{ return m_detectorModelDescription; }
    inline bool DetectorModelDescriptionHasBeenSet() const { return m_detectorModelDescriptionHasBeenSet; }
    inline void SetDetectorModelDescription(const Aws::String& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = value; }
    inline void SetDetectorModelDescription(Aws::String&& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = std::move(value); }
    inline void SetDetectorModelDescription(const char* value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription.assign(value); }
    inline UpdateDetectorModelRequest& WithDetectorModelDescription(const Aws::String& value) { SetDetectorModelDescription(value); return *this;}
    inline UpdateDetectorModelRequest& WithDetectorModelDescription(Aws::String&& value) { SetDetectorModelDescription(std::move(value)); return *this;}
    inline UpdateDetectorModelRequest& WithDetectorModelDescription(const char* value) { SetDetectorModelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateDetectorModelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateDetectorModelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateDetectorModelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline const EvaluationMethod& GetEvaluationMethod() const{ return m_evaluationMethod; }
    inline bool EvaluationMethodHasBeenSet() const { return m_evaluationMethodHasBeenSet; }
    inline void SetEvaluationMethod(const EvaluationMethod& value) { m_evaluationMethodHasBeenSet = true; m_evaluationMethod = value; }
    inline void SetEvaluationMethod(EvaluationMethod&& value) { m_evaluationMethodHasBeenSet = true; m_evaluationMethod = std::move(value); }
    inline UpdateDetectorModelRequest& WithEvaluationMethod(const EvaluationMethod& value) { SetEvaluationMethod(value); return *this;}
    inline UpdateDetectorModelRequest& WithEvaluationMethod(EvaluationMethod&& value) { SetEvaluationMethod(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    DetectorModelDefinition m_detectorModelDefinition;
    bool m_detectorModelDefinitionHasBeenSet = false;

    Aws::String m_detectorModelDescription;
    bool m_detectorModelDescriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    EvaluationMethod m_evaluationMethod;
    bool m_evaluationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
