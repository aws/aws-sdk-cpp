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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/frauddetector/model/ModelEndpointDataBlob.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API GetPredictionRequest : public FraudDetectorRequest
  {
  public:
    GetPredictionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPrediction"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The detector ID. </p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID. </p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID. </p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID. </p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID. </p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID. </p>
     */
    inline GetPredictionRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID. </p>
     */
    inline GetPredictionRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID. </p>
     */
    inline GetPredictionRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The detector version ID.</p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }

    /**
     * <p>The detector version ID.</p>
     */
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }

    /**
     * <p>The detector version ID.</p>
     */
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = value; }

    /**
     * <p>The detector version ID.</p>
     */
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::move(value); }

    /**
     * <p>The detector version ID.</p>
     */
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId.assign(value); }

    /**
     * <p>The detector version ID.</p>
     */
    inline GetPredictionRequest& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}

    /**
     * <p>The detector version ID.</p>
     */
    inline GetPredictionRequest& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}

    /**
     * <p>The detector version ID.</p>
     */
    inline GetPredictionRequest& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}


    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline GetPredictionRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline GetPredictionRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline GetPredictionRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventAttributes() const{ return m_eventAttributes; }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline bool EventAttributesHasBeenSet() const { return m_eventAttributesHasBeenSet; }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline void SetEventAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_eventAttributesHasBeenSet = true; m_eventAttributes = value; }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline void SetEventAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_eventAttributesHasBeenSet = true; m_eventAttributes = std::move(value); }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline GetPredictionRequest& WithEventAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetEventAttributes(value); return *this;}

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline GetPredictionRequest& WithEventAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetEventAttributes(std::move(value)); return *this;}

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline GetPredictionRequest& AddEventAttributes(const Aws::String& key, const Aws::String& value) { m_eventAttributesHasBeenSet = true; m_eventAttributes.emplace(key, value); return *this; }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline GetPredictionRequest& AddEventAttributes(Aws::String&& key, const Aws::String& value) { m_eventAttributesHasBeenSet = true; m_eventAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline GetPredictionRequest& AddEventAttributes(const Aws::String& key, Aws::String&& value) { m_eventAttributesHasBeenSet = true; m_eventAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline GetPredictionRequest& AddEventAttributes(Aws::String&& key, Aws::String&& value) { m_eventAttributesHasBeenSet = true; m_eventAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline GetPredictionRequest& AddEventAttributes(const char* key, Aws::String&& value) { m_eventAttributesHasBeenSet = true; m_eventAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline GetPredictionRequest& AddEventAttributes(Aws::String&& key, const char* value) { m_eventAttributesHasBeenSet = true; m_eventAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Names of variables you defined in Amazon Fraud Detector to represent event
     * data elements and their corresponding values for the event you are sending for
     * evaluation.</p>
     */
    inline GetPredictionRequest& AddEventAttributes(const char* key, const char* value) { m_eventAttributesHasBeenSet = true; m_eventAttributes.emplace(key, value); return *this; }


    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline const Aws::Map<Aws::String, ModelEndpointDataBlob>& GetExternalModelEndpointDataBlobs() const{ return m_externalModelEndpointDataBlobs; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline bool ExternalModelEndpointDataBlobsHasBeenSet() const { return m_externalModelEndpointDataBlobsHasBeenSet; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline void SetExternalModelEndpointDataBlobs(const Aws::Map<Aws::String, ModelEndpointDataBlob>& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs = value; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline void SetExternalModelEndpointDataBlobs(Aws::Map<Aws::String, ModelEndpointDataBlob>&& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs = std::move(value); }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetPredictionRequest& WithExternalModelEndpointDataBlobs(const Aws::Map<Aws::String, ModelEndpointDataBlob>& value) { SetExternalModelEndpointDataBlobs(value); return *this;}

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetPredictionRequest& WithExternalModelEndpointDataBlobs(Aws::Map<Aws::String, ModelEndpointDataBlob>&& value) { SetExternalModelEndpointDataBlobs(std::move(value)); return *this;}

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetPredictionRequest& AddExternalModelEndpointDataBlobs(const Aws::String& key, const ModelEndpointDataBlob& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(key, value); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetPredictionRequest& AddExternalModelEndpointDataBlobs(Aws::String&& key, const ModelEndpointDataBlob& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetPredictionRequest& AddExternalModelEndpointDataBlobs(const Aws::String& key, ModelEndpointDataBlob&& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetPredictionRequest& AddExternalModelEndpointDataBlobs(Aws::String&& key, ModelEndpointDataBlob&& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetPredictionRequest& AddExternalModelEndpointDataBlobs(const char* key, ModelEndpointDataBlob&& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetPredictionRequest& AddExternalModelEndpointDataBlobs(const char* key, const ModelEndpointDataBlob& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(key, value); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_eventAttributes;
    bool m_eventAttributesHasBeenSet;

    Aws::Map<Aws::String, ModelEndpointDataBlob> m_externalModelEndpointDataBlobs;
    bool m_externalModelEndpointDataBlobsHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
