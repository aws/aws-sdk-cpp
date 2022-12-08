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


    /**
     * <p>The name of the detector model that is updated.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model that is updated.</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model that is updated.</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model that is updated.</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model that is updated.</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model that is updated.</p>
     */
    inline UpdateDetectorModelRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model that is updated.</p>
     */
    inline UpdateDetectorModelRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model that is updated.</p>
     */
    inline UpdateDetectorModelRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline const DetectorModelDefinition& GetDetectorModelDefinition() const{ return m_detectorModelDefinition; }

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline bool DetectorModelDefinitionHasBeenSet() const { return m_detectorModelDefinitionHasBeenSet; }

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline void SetDetectorModelDefinition(const DetectorModelDefinition& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = value; }

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline void SetDetectorModelDefinition(DetectorModelDefinition&& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = std::move(value); }

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline UpdateDetectorModelRequest& WithDetectorModelDefinition(const DetectorModelDefinition& value) { SetDetectorModelDefinition(value); return *this;}

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline UpdateDetectorModelRequest& WithDetectorModelDefinition(DetectorModelDefinition&& value) { SetDetectorModelDefinition(std::move(value)); return *this;}


    /**
     * <p>A brief description of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelDescription() const{ return m_detectorModelDescription; }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline bool DetectorModelDescriptionHasBeenSet() const { return m_detectorModelDescriptionHasBeenSet; }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline void SetDetectorModelDescription(const Aws::String& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = value; }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline void SetDetectorModelDescription(Aws::String&& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = std::move(value); }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline void SetDetectorModelDescription(const char* value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription.assign(value); }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline UpdateDetectorModelRequest& WithDetectorModelDescription(const Aws::String& value) { SetDetectorModelDescription(value); return *this;}

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline UpdateDetectorModelRequest& WithDetectorModelDescription(Aws::String&& value) { SetDetectorModelDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline UpdateDetectorModelRequest& WithDetectorModelDescription(const char* value) { SetDetectorModelDescription(value); return *this;}


    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline UpdateDetectorModelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline UpdateDetectorModelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline UpdateDetectorModelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline UpdateDetectorModelRequest& WithEvaluationMethod(const EvaluationMethod& value) { SetEvaluationMethod(value); return *this;}

    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline UpdateDetectorModelRequest& WithEvaluationMethod(EvaluationMethod&& value) { SetEvaluationMethod(std::move(value)); return *this;}

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
