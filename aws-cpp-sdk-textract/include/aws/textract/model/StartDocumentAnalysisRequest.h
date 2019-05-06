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
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/model/DocumentLocation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/NotificationChannel.h>
#include <aws/textract/model/FeatureType.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class AWS_TEXTRACT_API StartDocumentAnalysisRequest : public TextractRequest
  {
  public:
    StartDocumentAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDocumentAnalysis"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The location of the document to be processed.</p>
     */
    inline const DocumentLocation& GetDocumentLocation() const{ return m_documentLocation; }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline bool DocumentLocationHasBeenSet() const { return m_documentLocationHasBeenSet; }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline void SetDocumentLocation(const DocumentLocation& value) { m_documentLocationHasBeenSet = true; m_documentLocation = value; }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline void SetDocumentLocation(DocumentLocation&& value) { m_documentLocationHasBeenSet = true; m_documentLocation = std::move(value); }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline StartDocumentAnalysisRequest& WithDocumentLocation(const DocumentLocation& value) { SetDocumentLocation(value); return *this;}

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline StartDocumentAnalysisRequest& WithDocumentLocation(DocumentLocation&& value) { SetDocumentLocation(std::move(value)); return *this;}


    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected fields and the associated text. To perform both types of
     * analysis, add TABLES and FORMS to <code>FeatureTypes</code>. All selectable
     * elements (<code>SELECTION_ELEMENT</code>) that are detected are returned,
     * whatever the value of <code>FeatureTypes</code>. </p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected fields and the associated text. To perform both types of
     * analysis, add TABLES and FORMS to <code>FeatureTypes</code>. All selectable
     * elements (<code>SELECTION_ELEMENT</code>) that are detected are returned,
     * whatever the value of <code>FeatureTypes</code>. </p>
     */
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected fields and the associated text. To perform both types of
     * analysis, add TABLES and FORMS to <code>FeatureTypes</code>. All selectable
     * elements (<code>SELECTION_ELEMENT</code>) that are detected are returned,
     * whatever the value of <code>FeatureTypes</code>. </p>
     */
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypesHasBeenSet = true; m_featureTypes = value; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected fields and the associated text. To perform both types of
     * analysis, add TABLES and FORMS to <code>FeatureTypes</code>. All selectable
     * elements (<code>SELECTION_ELEMENT</code>) that are detected are returned,
     * whatever the value of <code>FeatureTypes</code>. </p>
     */
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::move(value); }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected fields and the associated text. To perform both types of
     * analysis, add TABLES and FORMS to <code>FeatureTypes</code>. All selectable
     * elements (<code>SELECTION_ELEMENT</code>) that are detected are returned,
     * whatever the value of <code>FeatureTypes</code>. </p>
     */
    inline StartDocumentAnalysisRequest& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected fields and the associated text. To perform both types of
     * analysis, add TABLES and FORMS to <code>FeatureTypes</code>. All selectable
     * elements (<code>SELECTION_ELEMENT</code>) that are detected are returned,
     * whatever the value of <code>FeatureTypes</code>. </p>
     */
    inline StartDocumentAnalysisRequest& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected fields and the associated text. To perform both types of
     * analysis, add TABLES and FORMS to <code>FeatureTypes</code>. All selectable
     * elements (<code>SELECTION_ELEMENT</code>) that are detected are returned,
     * whatever the value of <code>FeatureTypes</code>. </p>
     */
    inline StartDocumentAnalysisRequest& AddFeatureTypes(const FeatureType& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected fields and the associated text. To perform both types of
     * analysis, add TABLES and FORMS to <code>FeatureTypes</code>. All selectable
     * elements (<code>SELECTION_ELEMENT</code>) that are detected are returned,
     * whatever the value of <code>FeatureTypes</code>. </p>
     */
    inline StartDocumentAnalysisRequest& AddFeatureTypes(FeatureType&& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline StartDocumentAnalysisRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline StartDocumentAnalysisRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline StartDocumentAnalysisRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTagHasBeenSet = true; m_jobTag = value; }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::move(value); }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline void SetJobTag(const char* value) { m_jobTagHasBeenSet = true; m_jobTag.assign(value); }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline StartDocumentAnalysisRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline StartDocumentAnalysisRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline StartDocumentAnalysisRequest& WithJobTag(const char* value) { SetJobTag(value); return *this;}


    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline const NotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline void SetNotificationChannel(const NotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline void SetNotificationChannel(NotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline StartDocumentAnalysisRequest& WithNotificationChannel(const NotificationChannel& value) { SetNotificationChannel(value); return *this;}

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline StartDocumentAnalysisRequest& WithNotificationChannel(NotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}

  private:

    DocumentLocation m_documentLocation;
    bool m_documentLocationHasBeenSet;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
