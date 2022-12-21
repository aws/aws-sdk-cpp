/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class CreateCaseRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API CreateCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCase"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The title of the support case. The title appears in the <b>Subject</b> field
     * on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The title of the support case. The title appears in the <b>Subject</b> field
     * on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The title of the support case. The title appears in the <b>Subject</b> field
     * on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The title of the support case. The title appears in the <b>Subject</b> field
     * on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The title of the support case. The title appears in the <b>Subject</b> field
     * on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The title of the support case. The title appears in the <b>Subject</b> field
     * on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline CreateCaseRequest& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The title of the support case. The title appears in the <b>Subject</b> field
     * on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline CreateCaseRequest& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The title of the support case. The title appears in the <b>Subject</b> field
     * on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline CreateCaseRequest& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline CreateCaseRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline CreateCaseRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline CreateCaseRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>A value that indicates the urgency of the case. This value determines the
     * response time according to your service level agreement with Amazon Web Services
     * Support. You can use the <a>DescribeSeverityLevels</a> operation to get the
     * possible values for <code>severityCode</code>. </p> <p>For more information, see
     * <a>SeverityLevel</a> and <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/getting-started.html#choosing-severity">Choosing
     * a Severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p> 
     * <p>The availability of severity levels depends on the support plan for the
     * Amazon Web Services account.</p> 
     */
    inline const Aws::String& GetSeverityCode() const{ return m_severityCode; }

    /**
     * <p>A value that indicates the urgency of the case. This value determines the
     * response time according to your service level agreement with Amazon Web Services
     * Support. You can use the <a>DescribeSeverityLevels</a> operation to get the
     * possible values for <code>severityCode</code>. </p> <p>For more information, see
     * <a>SeverityLevel</a> and <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/getting-started.html#choosing-severity">Choosing
     * a Severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p> 
     * <p>The availability of severity levels depends on the support plan for the
     * Amazon Web Services account.</p> 
     */
    inline bool SeverityCodeHasBeenSet() const { return m_severityCodeHasBeenSet; }

    /**
     * <p>A value that indicates the urgency of the case. This value determines the
     * response time according to your service level agreement with Amazon Web Services
     * Support. You can use the <a>DescribeSeverityLevels</a> operation to get the
     * possible values for <code>severityCode</code>. </p> <p>For more information, see
     * <a>SeverityLevel</a> and <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/getting-started.html#choosing-severity">Choosing
     * a Severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p> 
     * <p>The availability of severity levels depends on the support plan for the
     * Amazon Web Services account.</p> 
     */
    inline void SetSeverityCode(const Aws::String& value) { m_severityCodeHasBeenSet = true; m_severityCode = value; }

    /**
     * <p>A value that indicates the urgency of the case. This value determines the
     * response time according to your service level agreement with Amazon Web Services
     * Support. You can use the <a>DescribeSeverityLevels</a> operation to get the
     * possible values for <code>severityCode</code>. </p> <p>For more information, see
     * <a>SeverityLevel</a> and <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/getting-started.html#choosing-severity">Choosing
     * a Severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p> 
     * <p>The availability of severity levels depends on the support plan for the
     * Amazon Web Services account.</p> 
     */
    inline void SetSeverityCode(Aws::String&& value) { m_severityCodeHasBeenSet = true; m_severityCode = std::move(value); }

    /**
     * <p>A value that indicates the urgency of the case. This value determines the
     * response time according to your service level agreement with Amazon Web Services
     * Support. You can use the <a>DescribeSeverityLevels</a> operation to get the
     * possible values for <code>severityCode</code>. </p> <p>For more information, see
     * <a>SeverityLevel</a> and <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/getting-started.html#choosing-severity">Choosing
     * a Severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p> 
     * <p>The availability of severity levels depends on the support plan for the
     * Amazon Web Services account.</p> 
     */
    inline void SetSeverityCode(const char* value) { m_severityCodeHasBeenSet = true; m_severityCode.assign(value); }

    /**
     * <p>A value that indicates the urgency of the case. This value determines the
     * response time according to your service level agreement with Amazon Web Services
     * Support. You can use the <a>DescribeSeverityLevels</a> operation to get the
     * possible values for <code>severityCode</code>. </p> <p>For more information, see
     * <a>SeverityLevel</a> and <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/getting-started.html#choosing-severity">Choosing
     * a Severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p> 
     * <p>The availability of severity levels depends on the support plan for the
     * Amazon Web Services account.</p> 
     */
    inline CreateCaseRequest& WithSeverityCode(const Aws::String& value) { SetSeverityCode(value); return *this;}

    /**
     * <p>A value that indicates the urgency of the case. This value determines the
     * response time according to your service level agreement with Amazon Web Services
     * Support. You can use the <a>DescribeSeverityLevels</a> operation to get the
     * possible values for <code>severityCode</code>. </p> <p>For more information, see
     * <a>SeverityLevel</a> and <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/getting-started.html#choosing-severity">Choosing
     * a Severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p> 
     * <p>The availability of severity levels depends on the support plan for the
     * Amazon Web Services account.</p> 
     */
    inline CreateCaseRequest& WithSeverityCode(Aws::String&& value) { SetSeverityCode(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the urgency of the case. This value determines the
     * response time according to your service level agreement with Amazon Web Services
     * Support. You can use the <a>DescribeSeverityLevels</a> operation to get the
     * possible values for <code>severityCode</code>. </p> <p>For more information, see
     * <a>SeverityLevel</a> and <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/getting-started.html#choosing-severity">Choosing
     * a Severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p> 
     * <p>The availability of severity levels depends on the support plan for the
     * Amazon Web Services account.</p> 
     */
    inline CreateCaseRequest& WithSeverityCode(const char* value) { SetSeverityCode(value); return *this;}


    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline const Aws::String& GetCategoryCode() const{ return m_categoryCode; }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline bool CategoryCodeHasBeenSet() const { return m_categoryCodeHasBeenSet; }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline void SetCategoryCode(const Aws::String& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = value; }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline void SetCategoryCode(Aws::String&& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = std::move(value); }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline void SetCategoryCode(const char* value) { m_categoryCodeHasBeenSet = true; m_categoryCode.assign(value); }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline CreateCaseRequest& WithCategoryCode(const Aws::String& value) { SetCategoryCode(value); return *this;}

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline CreateCaseRequest& WithCategoryCode(Aws::String&& value) { SetCategoryCode(std::move(value)); return *this;}

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline CreateCaseRequest& WithCategoryCode(const char* value) { SetCategoryCode(value); return *this;}


    /**
     * <p>The communication body text that describes the issue. This text appears in
     * the <b>Description</b> field on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline const Aws::String& GetCommunicationBody() const{ return m_communicationBody; }

    /**
     * <p>The communication body text that describes the issue. This text appears in
     * the <b>Description</b> field on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline bool CommunicationBodyHasBeenSet() const { return m_communicationBodyHasBeenSet; }

    /**
     * <p>The communication body text that describes the issue. This text appears in
     * the <b>Description</b> field on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline void SetCommunicationBody(const Aws::String& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = value; }

    /**
     * <p>The communication body text that describes the issue. This text appears in
     * the <b>Description</b> field on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline void SetCommunicationBody(Aws::String&& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = std::move(value); }

    /**
     * <p>The communication body text that describes the issue. This text appears in
     * the <b>Description</b> field on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline void SetCommunicationBody(const char* value) { m_communicationBodyHasBeenSet = true; m_communicationBody.assign(value); }

    /**
     * <p>The communication body text that describes the issue. This text appears in
     * the <b>Description</b> field on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline CreateCaseRequest& WithCommunicationBody(const Aws::String& value) { SetCommunicationBody(value); return *this;}

    /**
     * <p>The communication body text that describes the issue. This text appears in
     * the <b>Description</b> field on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline CreateCaseRequest& WithCommunicationBody(Aws::String&& value) { SetCommunicationBody(std::move(value)); return *this;}

    /**
     * <p>The communication body text that describes the issue. This text appears in
     * the <b>Description</b> field on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline CreateCaseRequest& WithCommunicationBody(const char* value) { SetCommunicationBody(value); return *this;}


    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const{ return m_ccEmailAddresses; }

    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }

    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline void SetCcEmailAddresses(const Aws::Vector<Aws::String>& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = value; }

    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline void SetCcEmailAddresses(Aws::Vector<Aws::String>&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::move(value); }

    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline CreateCaseRequest& WithCcEmailAddresses(const Aws::Vector<Aws::String>& value) { SetCcEmailAddresses(value); return *this;}

    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline CreateCaseRequest& WithCcEmailAddresses(Aws::Vector<Aws::String>&& value) { SetCcEmailAddresses(std::move(value)); return *this;}

    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline CreateCaseRequest& AddCcEmailAddresses(const Aws::String& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }

    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline CreateCaseRequest& AddCcEmailAddresses(Aws::String&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline CreateCaseRequest& AddCcEmailAddresses(const char* value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }


    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline CreateCaseRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline CreateCaseRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline CreateCaseRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline const Aws::String& GetIssueType() const{ return m_issueType; }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline bool IssueTypeHasBeenSet() const { return m_issueTypeHasBeenSet; }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline void SetIssueType(const Aws::String& value) { m_issueTypeHasBeenSet = true; m_issueType = value; }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline void SetIssueType(Aws::String&& value) { m_issueTypeHasBeenSet = true; m_issueType = std::move(value); }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline void SetIssueType(const char* value) { m_issueTypeHasBeenSet = true; m_issueType.assign(value); }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline CreateCaseRequest& WithIssueType(const Aws::String& value) { SetIssueType(value); return *this;}

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline CreateCaseRequest& WithIssueType(Aws::String&& value) { SetIssueType(std::move(value)); return *this;}

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline CreateCaseRequest& WithIssueType(const char* value) { SetIssueType(value); return *this;}


    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using the <a>AddAttachmentsToSet</a> operation.</p>
     */
    inline const Aws::String& GetAttachmentSetId() const{ return m_attachmentSetId; }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using the <a>AddAttachmentsToSet</a> operation.</p>
     */
    inline bool AttachmentSetIdHasBeenSet() const { return m_attachmentSetIdHasBeenSet; }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using the <a>AddAttachmentsToSet</a> operation.</p>
     */
    inline void SetAttachmentSetId(const Aws::String& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = value; }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using the <a>AddAttachmentsToSet</a> operation.</p>
     */
    inline void SetAttachmentSetId(Aws::String&& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = std::move(value); }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using the <a>AddAttachmentsToSet</a> operation.</p>
     */
    inline void SetAttachmentSetId(const char* value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId.assign(value); }

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using the <a>AddAttachmentsToSet</a> operation.</p>
     */
    inline CreateCaseRequest& WithAttachmentSetId(const Aws::String& value) { SetAttachmentSetId(value); return *this;}

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using the <a>AddAttachmentsToSet</a> operation.</p>
     */
    inline CreateCaseRequest& WithAttachmentSetId(Aws::String&& value) { SetAttachmentSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using the <a>AddAttachmentsToSet</a> operation.</p>
     */
    inline CreateCaseRequest& WithAttachmentSetId(const char* value) { SetAttachmentSetId(value); return *this;}

  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_severityCode;
    bool m_severityCodeHasBeenSet = false;

    Aws::String m_categoryCode;
    bool m_categoryCodeHasBeenSet = false;

    Aws::String m_communicationBody;
    bool m_communicationBodyHasBeenSet = false;

    Aws::Vector<Aws::String> m_ccEmailAddresses;
    bool m_ccEmailAddressesHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_issueType;
    bool m_issueTypeHasBeenSet = false;

    Aws::String m_attachmentSetId;
    bool m_attachmentSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
