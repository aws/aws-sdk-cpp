﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/DetectorModelDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/EvaluationMethod.h>
#include <aws/iotevents/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class CreateDetectorModelRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API CreateDetectorModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDetectorModel"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }
    inline CreateDetectorModelRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}
    inline CreateDetectorModelRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}
    inline CreateDetectorModelRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that defines how the detectors operate.</p>
     */
    inline const DetectorModelDefinition& GetDetectorModelDefinition() const{ return m_detectorModelDefinition; }
    inline bool DetectorModelDefinitionHasBeenSet() const { return m_detectorModelDefinitionHasBeenSet; }
    inline void SetDetectorModelDefinition(const DetectorModelDefinition& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = value; }
    inline void SetDetectorModelDefinition(DetectorModelDefinition&& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = std::move(value); }
    inline CreateDetectorModelRequest& WithDetectorModelDefinition(const DetectorModelDefinition& value) { SetDetectorModelDefinition(value); return *this;}
    inline CreateDetectorModelRequest& WithDetectorModelDefinition(DetectorModelDefinition&& value) { SetDetectorModelDefinition(std::move(value)); return *this;}
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
    inline CreateDetectorModelRequest& WithDetectorModelDescription(const Aws::String& value) { SetDetectorModelDescription(value); return *this;}
    inline CreateDetectorModelRequest& WithDetectorModelDescription(Aws::String&& value) { SetDetectorModelDescription(std::move(value)); return *this;}
    inline CreateDetectorModelRequest& WithDetectorModelDescription(const char* value) { SetDetectorModelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input attribute key used to identify a device or system to create a
     * detector (an instance of the detector model) and then to route each input
     * received to the appropriate detector (instance). This parameter uses a JSON-path
     * expression in the message payload of each input to specify the attribute-value
     * pair that is used to identify the device associated with the input.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline CreateDetectorModelRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline CreateDetectorModelRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline CreateDetectorModelRequest& WithKey(const char* value) { SetKey(value); return *this;}
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
    inline CreateDetectorModelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateDetectorModelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateDetectorModelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the detector model.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDetectorModelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDetectorModelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDetectorModelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDetectorModelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline CreateDetectorModelRequest& WithEvaluationMethod(const EvaluationMethod& value) { SetEvaluationMethod(value); return *this;}
    inline CreateDetectorModelRequest& WithEvaluationMethod(EvaluationMethod&& value) { SetEvaluationMethod(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    DetectorModelDefinition m_detectorModelDefinition;
    bool m_detectorModelDefinitionHasBeenSet = false;

    Aws::String m_detectorModelDescription;
    bool m_detectorModelDescriptionHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EvaluationMethod m_evaluationMethod;
    bool m_evaluationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
