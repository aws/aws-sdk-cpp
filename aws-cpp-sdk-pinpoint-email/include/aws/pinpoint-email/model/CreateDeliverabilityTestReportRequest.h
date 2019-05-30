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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/EmailContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/Tag.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to perform a predictive inbox placement test. Predictive inbox
   * placement tests can help you predict how your messages will be handled by
   * various email providers around the world. When you perform a predictive inbox
   * placement test, you provide a sample message that contains the content that you
   * plan to send to your customers. Amazon Pinpoint then sends that message to
   * special email addresses spread across several major email providers. After about
   * 24 hours, the test is complete, and you can use the
   * <code>GetDeliverabilityTestReport</code> operation to view the results of the
   * test.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateDeliverabilityTestReportRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API CreateDeliverabilityTestReportRequest : public PinpointEmailRequest
  {
  public:
    CreateDeliverabilityTestReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeliverabilityTestReport"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique name that helps you to identify the predictive inbox placement test
     * when you retrieve the results.</p>
     */
    inline const Aws::String& GetReportName() const{ return m_reportName; }

    /**
     * <p>A unique name that helps you to identify the predictive inbox placement test
     * when you retrieve the results.</p>
     */
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }

    /**
     * <p>A unique name that helps you to identify the predictive inbox placement test
     * when you retrieve the results.</p>
     */
    inline void SetReportName(const Aws::String& value) { m_reportNameHasBeenSet = true; m_reportName = value; }

    /**
     * <p>A unique name that helps you to identify the predictive inbox placement test
     * when you retrieve the results.</p>
     */
    inline void SetReportName(Aws::String&& value) { m_reportNameHasBeenSet = true; m_reportName = std::move(value); }

    /**
     * <p>A unique name that helps you to identify the predictive inbox placement test
     * when you retrieve the results.</p>
     */
    inline void SetReportName(const char* value) { m_reportNameHasBeenSet = true; m_reportName.assign(value); }

    /**
     * <p>A unique name that helps you to identify the predictive inbox placement test
     * when you retrieve the results.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithReportName(const Aws::String& value) { SetReportName(value); return *this;}

    /**
     * <p>A unique name that helps you to identify the predictive inbox placement test
     * when you retrieve the results.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithReportName(Aws::String&& value) { SetReportName(std::move(value)); return *this;}

    /**
     * <p>A unique name that helps you to identify the predictive inbox placement test
     * when you retrieve the results.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithReportName(const char* value) { SetReportName(value); return *this;}


    /**
     * <p>The email address that the predictive inbox placement test email was sent
     * from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>The email address that the predictive inbox placement test email was sent
     * from.</p>
     */
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }

    /**
     * <p>The email address that the predictive inbox placement test email was sent
     * from.</p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }

    /**
     * <p>The email address that the predictive inbox placement test email was sent
     * from.</p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }

    /**
     * <p>The email address that the predictive inbox placement test email was sent
     * from.</p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }

    /**
     * <p>The email address that the predictive inbox placement test email was sent
     * from.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>The email address that the predictive inbox placement test email was sent
     * from.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that the predictive inbox placement test email was sent
     * from.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}


    /**
     * <p>The HTML body of the message that you sent when you performed the predictive
     * inbox placement test.</p>
     */
    inline const EmailContent& GetContent() const{ return m_content; }

    /**
     * <p>The HTML body of the message that you sent when you performed the predictive
     * inbox placement test.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The HTML body of the message that you sent when you performed the predictive
     * inbox placement test.</p>
     */
    inline void SetContent(const EmailContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The HTML body of the message that you sent when you performed the predictive
     * inbox placement test.</p>
     */
    inline void SetContent(EmailContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The HTML body of the message that you sent when you performed the predictive
     * inbox placement test.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithContent(const EmailContent& value) { SetContent(value); return *this;}

    /**
     * <p>The HTML body of the message that you sent when you performed the predictive
     * inbox placement test.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithContent(EmailContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the predictive inbox placement test.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the predictive inbox placement test.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the predictive inbox placement test.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the predictive inbox placement test.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the predictive inbox placement test.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the predictive inbox placement test.</p>
     */
    inline CreateDeliverabilityTestReportRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the predictive inbox placement test.</p>
     */
    inline CreateDeliverabilityTestReportRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the predictive inbox placement test.</p>
     */
    inline CreateDeliverabilityTestReportRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet;

    EmailContent m_content;
    bool m_contentHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
