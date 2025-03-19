/**
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
    AWS_IOTEVENTS_API CreateDetectorModelRequest() = default;

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
    inline const Aws::String& GetDetectorModelName() const { return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    template<typename DetectorModelNameT = Aws::String>
    void SetDetectorModelName(DetectorModelNameT&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::forward<DetectorModelNameT>(value); }
    template<typename DetectorModelNameT = Aws::String>
    CreateDetectorModelRequest& WithDetectorModelName(DetectorModelNameT&& value) { SetDetectorModelName(std::forward<DetectorModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that defines how the detectors operate.</p>
     */
    inline const DetectorModelDefinition& GetDetectorModelDefinition() const { return m_detectorModelDefinition; }
    inline bool DetectorModelDefinitionHasBeenSet() const { return m_detectorModelDefinitionHasBeenSet; }
    template<typename DetectorModelDefinitionT = DetectorModelDefinition>
    void SetDetectorModelDefinition(DetectorModelDefinitionT&& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = std::forward<DetectorModelDefinitionT>(value); }
    template<typename DetectorModelDefinitionT = DetectorModelDefinition>
    CreateDetectorModelRequest& WithDetectorModelDefinition(DetectorModelDefinitionT&& value) { SetDetectorModelDefinition(std::forward<DetectorModelDefinitionT>(value)); return *this;}
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
    CreateDetectorModelRequest& WithDetectorModelDescription(DetectorModelDescriptionT&& value) { SetDetectorModelDescription(std::forward<DetectorModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input attribute key used to identify a device or system to create a
     * detector (an instance of the detector model) and then to route each input
     * received to the appropriate detector (instance). This parameter uses a JSON-path
     * expression in the message payload of each input to specify the attribute-value
     * pair that is used to identify the device associated with the input.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    CreateDetectorModelRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
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
    CreateDetectorModelRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the detector model.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDetectorModelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDetectorModelRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline EvaluationMethod GetEvaluationMethod() const { return m_evaluationMethod; }
    inline bool EvaluationMethodHasBeenSet() const { return m_evaluationMethodHasBeenSet; }
    inline void SetEvaluationMethod(EvaluationMethod value) { m_evaluationMethodHasBeenSet = true; m_evaluationMethod = value; }
    inline CreateDetectorModelRequest& WithEvaluationMethod(EvaluationMethod value) { SetEvaluationMethod(value); return *this;}
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

    EvaluationMethod m_evaluationMethod{EvaluationMethod::NOT_SET};
    bool m_evaluationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
