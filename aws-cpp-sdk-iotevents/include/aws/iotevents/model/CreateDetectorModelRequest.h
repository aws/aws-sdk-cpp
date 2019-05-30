/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/DetectorModelDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_IOTEVENTS_API CreateDetectorModelRequest : public IoTEventsRequest
  {
  public:
    CreateDetectorModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDetectorModel"; }

    Aws::String SerializePayload() const override;


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
    inline CreateDetectorModelRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline CreateDetectorModelRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline CreateDetectorModelRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>Information that defines how the detectors operate.</p>
     */
    inline const DetectorModelDefinition& GetDetectorModelDefinition() const{ return m_detectorModelDefinition; }

    /**
     * <p>Information that defines how the detectors operate.</p>
     */
    inline bool DetectorModelDefinitionHasBeenSet() const { return m_detectorModelDefinitionHasBeenSet; }

    /**
     * <p>Information that defines how the detectors operate.</p>
     */
    inline void SetDetectorModelDefinition(const DetectorModelDefinition& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = value; }

    /**
     * <p>Information that defines how the detectors operate.</p>
     */
    inline void SetDetectorModelDefinition(DetectorModelDefinition&& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = std::move(value); }

    /**
     * <p>Information that defines how the detectors operate.</p>
     */
    inline CreateDetectorModelRequest& WithDetectorModelDefinition(const DetectorModelDefinition& value) { SetDetectorModelDefinition(value); return *this;}

    /**
     * <p>Information that defines how the detectors operate.</p>
     */
    inline CreateDetectorModelRequest& WithDetectorModelDefinition(DetectorModelDefinition&& value) { SetDetectorModelDefinition(std::move(value)); return *this;}


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
    inline CreateDetectorModelRequest& WithDetectorModelDescription(const Aws::String& value) { SetDetectorModelDescription(value); return *this;}

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline CreateDetectorModelRequest& WithDetectorModelDescription(Aws::String&& value) { SetDetectorModelDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline CreateDetectorModelRequest& WithDetectorModelDescription(const char* value) { SetDetectorModelDescription(value); return *this;}


    /**
     * <p>The input attribute key used to identify a device or system in order to
     * create a detector (an instance of the detector model) and then to route each
     * input received to the appropriate detector (instance). This parameter uses a
     * JSON-path expression to specify the attribute-value pair in the message payload
     * of each input that is used to identify the device associated with the input.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The input attribute key used to identify a device or system in order to
     * create a detector (an instance of the detector model) and then to route each
     * input received to the appropriate detector (instance). This parameter uses a
     * JSON-path expression to specify the attribute-value pair in the message payload
     * of each input that is used to identify the device associated with the input.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The input attribute key used to identify a device or system in order to
     * create a detector (an instance of the detector model) and then to route each
     * input received to the appropriate detector (instance). This parameter uses a
     * JSON-path expression to specify the attribute-value pair in the message payload
     * of each input that is used to identify the device associated with the input.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The input attribute key used to identify a device or system in order to
     * create a detector (an instance of the detector model) and then to route each
     * input received to the appropriate detector (instance). This parameter uses a
     * JSON-path expression to specify the attribute-value pair in the message payload
     * of each input that is used to identify the device associated with the input.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The input attribute key used to identify a device or system in order to
     * create a detector (an instance of the detector model) and then to route each
     * input received to the appropriate detector (instance). This parameter uses a
     * JSON-path expression to specify the attribute-value pair in the message payload
     * of each input that is used to identify the device associated with the input.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The input attribute key used to identify a device or system in order to
     * create a detector (an instance of the detector model) and then to route each
     * input received to the appropriate detector (instance). This parameter uses a
     * JSON-path expression to specify the attribute-value pair in the message payload
     * of each input that is used to identify the device associated with the input.</p>
     */
    inline CreateDetectorModelRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The input attribute key used to identify a device or system in order to
     * create a detector (an instance of the detector model) and then to route each
     * input received to the appropriate detector (instance). This parameter uses a
     * JSON-path expression to specify the attribute-value pair in the message payload
     * of each input that is used to identify the device associated with the input.</p>
     */
    inline CreateDetectorModelRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The input attribute key used to identify a device or system in order to
     * create a detector (an instance of the detector model) and then to route each
     * input received to the appropriate detector (instance). This parameter uses a
     * JSON-path expression to specify the attribute-value pair in the message payload
     * of each input that is used to identify the device associated with the input.</p>
     */
    inline CreateDetectorModelRequest& WithKey(const char* value) { SetKey(value); return *this;}


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
    inline CreateDetectorModelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline CreateDetectorModelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline CreateDetectorModelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Metadata which can be used to manage the detector model.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the detector model.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the detector model.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the detector model.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the detector model.</p>
     */
    inline CreateDetectorModelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the detector model.</p>
     */
    inline CreateDetectorModelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the detector model.</p>
     */
    inline CreateDetectorModelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the detector model.</p>
     */
    inline CreateDetectorModelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet;

    DetectorModelDefinition m_detectorModelDefinition;
    bool m_detectorModelDefinitionHasBeenSet;

    Aws::String m_detectorModelDescription;
    bool m_detectorModelDescriptionHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
