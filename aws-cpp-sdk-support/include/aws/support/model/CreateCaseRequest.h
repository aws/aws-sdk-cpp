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
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CreateCaseRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API CreateCaseRequest : public SupportRequest
  {
  public:
    CreateCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCase"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The title of the AWS Support case.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The title of the AWS Support case.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The title of the AWS Support case.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The title of the AWS Support case.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The title of the AWS Support case.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The title of the AWS Support case.</p>
     */
    inline CreateCaseRequest& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The title of the AWS Support case.</p>
     */
    inline CreateCaseRequest& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The title of the AWS Support case.</p>
     */
    inline CreateCaseRequest& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline CreateCaseRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline CreateCaseRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline CreateCaseRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p> <note> <p>The availability of severity levels
     * depends on each customer's support subscription. In other words, your
     * subscription may not necessarily require the urgent level of response time.</p>
     * </note>
     */
    inline const Aws::String& GetSeverityCode() const{ return m_severityCode; }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p> <note> <p>The availability of severity levels
     * depends on each customer's support subscription. In other words, your
     * subscription may not necessarily require the urgent level of response time.</p>
     * </note>
     */
    inline bool SeverityCodeHasBeenSet() const { return m_severityCodeHasBeenSet; }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p> <note> <p>The availability of severity levels
     * depends on each customer's support subscription. In other words, your
     * subscription may not necessarily require the urgent level of response time.</p>
     * </note>
     */
    inline void SetSeverityCode(const Aws::String& value) { m_severityCodeHasBeenSet = true; m_severityCode = value; }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p> <note> <p>The availability of severity levels
     * depends on each customer's support subscription. In other words, your
     * subscription may not necessarily require the urgent level of response time.</p>
     * </note>
     */
    inline void SetSeverityCode(Aws::String&& value) { m_severityCodeHasBeenSet = true; m_severityCode = std::move(value); }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p> <note> <p>The availability of severity levels
     * depends on each customer's support subscription. In other words, your
     * subscription may not necessarily require the urgent level of response time.</p>
     * </note>
     */
    inline void SetSeverityCode(const char* value) { m_severityCodeHasBeenSet = true; m_severityCode.assign(value); }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p> <note> <p>The availability of severity levels
     * depends on each customer's support subscription. In other words, your
     * subscription may not necessarily require the urgent level of response time.</p>
     * </note>
     */
    inline CreateCaseRequest& WithSeverityCode(const Aws::String& value) { SetSeverityCode(value); return *this;}

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p> <note> <p>The availability of severity levels
     * depends on each customer's support subscription. In other words, your
     * subscription may not necessarily require the urgent level of response time.</p>
     * </note>
     */
    inline CreateCaseRequest& WithSeverityCode(Aws::String&& value) { SetSeverityCode(std::move(value)); return *this;}

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p> <note> <p>The availability of severity levels
     * depends on each customer's support subscription. In other words, your
     * subscription may not necessarily require the urgent level of response time.</p>
     * </note>
     */
    inline CreateCaseRequest& WithSeverityCode(const char* value) { SetSeverityCode(value); return *this;}


    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline const Aws::String& GetCategoryCode() const{ return m_categoryCode; }

    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline bool CategoryCodeHasBeenSet() const { return m_categoryCodeHasBeenSet; }

    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline void SetCategoryCode(const Aws::String& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = value; }

    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline void SetCategoryCode(Aws::String&& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = std::move(value); }

    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline void SetCategoryCode(const char* value) { m_categoryCodeHasBeenSet = true; m_categoryCode.assign(value); }

    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline CreateCaseRequest& WithCategoryCode(const Aws::String& value) { SetCategoryCode(value); return *this;}

    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline CreateCaseRequest& WithCategoryCode(Aws::String&& value) { SetCategoryCode(std::move(value)); return *this;}

    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline CreateCaseRequest& WithCategoryCode(const char* value) { SetCategoryCode(value); return *this;}


    /**
     * <p>The communication body text when you create an AWS Support case by calling
     * <a>CreateCase</a>.</p>
     */
    inline const Aws::String& GetCommunicationBody() const{ return m_communicationBody; }

    /**
     * <p>The communication body text when you create an AWS Support case by calling
     * <a>CreateCase</a>.</p>
     */
    inline bool CommunicationBodyHasBeenSet() const { return m_communicationBodyHasBeenSet; }

    /**
     * <p>The communication body text when you create an AWS Support case by calling
     * <a>CreateCase</a>.</p>
     */
    inline void SetCommunicationBody(const Aws::String& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = value; }

    /**
     * <p>The communication body text when you create an AWS Support case by calling
     * <a>CreateCase</a>.</p>
     */
    inline void SetCommunicationBody(Aws::String&& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = std::move(value); }

    /**
     * <p>The communication body text when you create an AWS Support case by calling
     * <a>CreateCase</a>.</p>
     */
    inline void SetCommunicationBody(const char* value) { m_communicationBodyHasBeenSet = true; m_communicationBody.assign(value); }

    /**
     * <p>The communication body text when you create an AWS Support case by calling
     * <a>CreateCase</a>.</p>
     */
    inline CreateCaseRequest& WithCommunicationBody(const Aws::String& value) { SetCommunicationBody(value); return *this;}

    /**
     * <p>The communication body text when you create an AWS Support case by calling
     * <a>CreateCase</a>.</p>
     */
    inline CreateCaseRequest& WithCommunicationBody(Aws::String&& value) { SetCommunicationBody(std::move(value)); return *this;}

    /**
     * <p>The communication body text when you create an AWS Support case by calling
     * <a>CreateCase</a>.</p>
     */
    inline CreateCaseRequest& WithCommunicationBody(const char* value) { SetCommunicationBody(value); return *this;}


    /**
     * <p>A list of email addresses that AWS Support copies on case correspondence.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const{ return m_ccEmailAddresses; }

    /**
     * <p>A list of email addresses that AWS Support copies on case correspondence.</p>
     */
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }

    /**
     * <p>A list of email addresses that AWS Support copies on case correspondence.</p>
     */
    inline void SetCcEmailAddresses(const Aws::Vector<Aws::String>& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = value; }

    /**
     * <p>A list of email addresses that AWS Support copies on case correspondence.</p>
     */
    inline void SetCcEmailAddresses(Aws::Vector<Aws::String>&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::move(value); }

    /**
     * <p>A list of email addresses that AWS Support copies on case correspondence.</p>
     */
    inline CreateCaseRequest& WithCcEmailAddresses(const Aws::Vector<Aws::String>& value) { SetCcEmailAddresses(value); return *this;}

    /**
     * <p>A list of email addresses that AWS Support copies on case correspondence.</p>
     */
    inline CreateCaseRequest& WithCcEmailAddresses(Aws::Vector<Aws::String>&& value) { SetCcEmailAddresses(std::move(value)); return *this;}

    /**
     * <p>A list of email addresses that AWS Support copies on case correspondence.</p>
     */
    inline CreateCaseRequest& AddCcEmailAddresses(const Aws::String& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }

    /**
     * <p>A list of email addresses that AWS Support copies on case correspondence.</p>
     */
    inline CreateCaseRequest& AddCcEmailAddresses(Aws::String&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of email addresses that AWS Support copies on case correspondence.</p>
     */
    inline CreateCaseRequest& AddCcEmailAddresses(const char* value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }


    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline CreateCaseRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline CreateCaseRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline CreateCaseRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>The type of issue for the case. You can specify either "customer-service" or
     * "technical." If you do not indicate a value, the default is "technical."</p>
     */
    inline const Aws::String& GetIssueType() const{ return m_issueType; }

    /**
     * <p>The type of issue for the case. You can specify either "customer-service" or
     * "technical." If you do not indicate a value, the default is "technical."</p>
     */
    inline bool IssueTypeHasBeenSet() const { return m_issueTypeHasBeenSet; }

    /**
     * <p>The type of issue for the case. You can specify either "customer-service" or
     * "technical." If you do not indicate a value, the default is "technical."</p>
     */
    inline void SetIssueType(const Aws::String& value) { m_issueTypeHasBeenSet = true; m_issueType = value; }

    /**
     * <p>The type of issue for the case. You can specify either "customer-service" or
     * "technical." If you do not indicate a value, the default is "technical."</p>
     */
    inline void SetIssueType(Aws::String&& value) { m_issueTypeHasBeenSet = true; m_issueType = std::move(value); }

    /**
     * <p>The type of issue for the case. You can specify either "customer-service" or
     * "technical." If you do not indicate a value, the default is "technical."</p>
     */
    inline void SetIssueType(const char* value) { m_issueTypeHasBeenSet = true; m_issueType.assign(value); }

    /**
     * <p>The type of issue for the case. You can specify either "customer-service" or
     * "technical." If you do not indicate a value, the default is "technical."</p>
     */
    inline CreateCaseRequest& WithIssueType(const Aws::String& value) { SetIssueType(value); return *this;}

    /**
     * <p>The type of issue for the case. You can specify either "customer-service" or
     * "technical." If you do not indicate a value, the default is "technical."</p>
     */
    inline CreateCaseRequest& WithIssueType(Aws::String&& value) { SetIssueType(std::move(value)); return *this;}

    /**
     * <p>The type of issue for the case. You can specify either "customer-service" or
     * "technical." If you do not indicate a value, the default is "technical."</p>
     */
    inline CreateCaseRequest& WithIssueType(const char* value) { SetIssueType(value); return *this;}


    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using <a>AddAttachmentsToSet</a>.</p>
     */
    inline const Aws::String& GetAttachmentSetId() const{ return m_attachmentSetId; }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using <a>AddAttachmentsToSet</a>.</p>
     */
    inline bool AttachmentSetIdHasBeenSet() const { return m_attachmentSetIdHasBeenSet; }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using <a>AddAttachmentsToSet</a>.</p>
     */
    inline void SetAttachmentSetId(const Aws::String& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = value; }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using <a>AddAttachmentsToSet</a>.</p>
     */
    inline void SetAttachmentSetId(Aws::String&& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = std::move(value); }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using <a>AddAttachmentsToSet</a>.</p>
     */
    inline void SetAttachmentSetId(const char* value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId.assign(value); }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using <a>AddAttachmentsToSet</a>.</p>
     */
    inline CreateCaseRequest& WithAttachmentSetId(const Aws::String& value) { SetAttachmentSetId(value); return *this;}

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using <a>AddAttachmentsToSet</a>.</p>
     */
    inline CreateCaseRequest& WithAttachmentSetId(Aws::String&& value) { SetAttachmentSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using <a>AddAttachmentsToSet</a>.</p>
     */
    inline CreateCaseRequest& WithAttachmentSetId(const char* value) { SetAttachmentSetId(value); return *this;}

  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;

    Aws::String m_severityCode;
    bool m_severityCodeHasBeenSet;

    Aws::String m_categoryCode;
    bool m_categoryCodeHasBeenSet;

    Aws::String m_communicationBody;
    bool m_communicationBodyHasBeenSet;

    Aws::Vector<Aws::String> m_ccEmailAddresses;
    bool m_ccEmailAddressesHasBeenSet;

    Aws::String m_language;
    bool m_languageHasBeenSet;

    Aws::String m_issueType;
    bool m_issueTypeHasBeenSet;

    Aws::String m_attachmentSetId;
    bool m_attachmentSetIdHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
