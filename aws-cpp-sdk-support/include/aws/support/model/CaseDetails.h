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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/RecentCaseCommunications.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Support
{
namespace Model
{

  /**
   * <p>A JSON-formatted object that contains the metadata for a support case. It is
   * contained the response from a <a>DescribeCases</a> request. <b>CaseDetails</b>
   * contains the following fields:</p> <ul> <li> <p> <b>caseId.</b> The AWS Support
   * case ID requested or returned in the call. The case ID is an alphanumeric string
   * formatted as shown in this example:
   * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i>.</p> </li> <li> <p>
   * <b>categoryCode.</b> The category of problem for the AWS Support case.
   * Corresponds to the CategoryCode values returned by a call to
   * <a>DescribeServices</a>.</p> </li> <li> <p> <b>displayId.</b> The identifier for
   * the case on pages in the AWS Support Center.</p> </li> <li> <p> <b>language.</b>
   * The ISO 639-1 code for the language in which AWS provides support. AWS Support
   * currently supports English ("en") and Japanese ("ja"). Language parameters must
   * be passed explicitly for operations that take them.</p> </li> <li> <p>
   * <b>recentCommunications.</b> One or more <a>Communication</a> objects. Fields of
   * these objects are <code>attachments</code>, <code>body</code>,
   * <code>caseId</code>, <code>submittedBy</code>, and <code>timeCreated</code>.</p>
   * </li> <li> <p> <b>nextToken.</b> A resumption point for pagination.</p> </li>
   * <li> <p> <b>serviceCode.</b> The identifier for the AWS service that corresponds
   * to the service code defined in the call to <a>DescribeServices</a>.</p> </li>
   * <li> <p> <b>severityCode. </b>The severity code assigned to the case. Contains
   * one of the values returned by the call to <a>DescribeSeverityLevels</a>.</p>
   * </li> <li> <p> <b>status.</b> The status of the case in the AWS Support
   * Center.</p> </li> <li> <p> <b>subject.</b> The subject line of the case.</p>
   * </li> <li> <p> <b>submittedBy.</b> The email address of the account that
   * submitted the case.</p> </li> <li> <p> <b>timeCreated.</b> The time the case was
   * created, in ISO-8601 format.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CaseDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API CaseDetails
  {
  public:
    CaseDetails();
    CaseDetails(Aws::Utils::Json::JsonView jsonValue);
    CaseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline CaseDetails& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline CaseDetails& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline CaseDetails& WithCaseId(const char* value) { SetCaseId(value); return *this;}


    /**
     * <p>The ID displayed for the case in the AWS Support Center. This is a numeric
     * string.</p>
     */
    inline const Aws::String& GetDisplayId() const{ return m_displayId; }

    /**
     * <p>The ID displayed for the case in the AWS Support Center. This is a numeric
     * string.</p>
     */
    inline bool DisplayIdHasBeenSet() const { return m_displayIdHasBeenSet; }

    /**
     * <p>The ID displayed for the case in the AWS Support Center. This is a numeric
     * string.</p>
     */
    inline void SetDisplayId(const Aws::String& value) { m_displayIdHasBeenSet = true; m_displayId = value; }

    /**
     * <p>The ID displayed for the case in the AWS Support Center. This is a numeric
     * string.</p>
     */
    inline void SetDisplayId(Aws::String&& value) { m_displayIdHasBeenSet = true; m_displayId = std::move(value); }

    /**
     * <p>The ID displayed for the case in the AWS Support Center. This is a numeric
     * string.</p>
     */
    inline void SetDisplayId(const char* value) { m_displayIdHasBeenSet = true; m_displayId.assign(value); }

    /**
     * <p>The ID displayed for the case in the AWS Support Center. This is a numeric
     * string.</p>
     */
    inline CaseDetails& WithDisplayId(const Aws::String& value) { SetDisplayId(value); return *this;}

    /**
     * <p>The ID displayed for the case in the AWS Support Center. This is a numeric
     * string.</p>
     */
    inline CaseDetails& WithDisplayId(Aws::String&& value) { SetDisplayId(std::move(value)); return *this;}

    /**
     * <p>The ID displayed for the case in the AWS Support Center. This is a numeric
     * string.</p>
     */
    inline CaseDetails& WithDisplayId(const char* value) { SetDisplayId(value); return *this;}


    /**
     * <p>The subject line for the case in the AWS Support Center.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line for the case in the AWS Support Center.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line for the case in the AWS Support Center.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line for the case in the AWS Support Center.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line for the case in the AWS Support Center.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject line for the case in the AWS Support Center.</p>
     */
    inline CaseDetails& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line for the case in the AWS Support Center.</p>
     */
    inline CaseDetails& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line for the case in the AWS Support Center.</p>
     */
    inline CaseDetails& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The status of the case.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the case.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the case.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the case.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the case.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the case.</p>
     */
    inline CaseDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the case.</p>
     */
    inline CaseDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the case.</p>
     */
    inline CaseDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


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
    inline CaseDetails& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline CaseDetails& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The code for the AWS service returned by the call to
     * <a>DescribeServices</a>.</p>
     */
    inline CaseDetails& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


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
    inline CaseDetails& WithCategoryCode(const Aws::String& value) { SetCategoryCode(value); return *this;}

    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline CaseDetails& WithCategoryCode(Aws::String&& value) { SetCategoryCode(std::move(value)); return *this;}

    /**
     * <p>The category of problem for the AWS Support case.</p>
     */
    inline CaseDetails& WithCategoryCode(const char* value) { SetCategoryCode(value); return *this;}


    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline const Aws::String& GetSeverityCode() const{ return m_severityCode; }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline bool SeverityCodeHasBeenSet() const { return m_severityCodeHasBeenSet; }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline void SetSeverityCode(const Aws::String& value) { m_severityCodeHasBeenSet = true; m_severityCode = value; }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline void SetSeverityCode(Aws::String&& value) { m_severityCodeHasBeenSet = true; m_severityCode = std::move(value); }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline void SetSeverityCode(const char* value) { m_severityCodeHasBeenSet = true; m_severityCode.assign(value); }

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline CaseDetails& WithSeverityCode(const Aws::String& value) { SetSeverityCode(value); return *this;}

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline CaseDetails& WithSeverityCode(Aws::String&& value) { SetSeverityCode(std::move(value)); return *this;}

    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline CaseDetails& WithSeverityCode(const char* value) { SetSeverityCode(value); return *this;}


    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline const Aws::String& GetSubmittedBy() const{ return m_submittedBy; }

    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline bool SubmittedByHasBeenSet() const { return m_submittedByHasBeenSet; }

    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline void SetSubmittedBy(const Aws::String& value) { m_submittedByHasBeenSet = true; m_submittedBy = value; }

    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline void SetSubmittedBy(Aws::String&& value) { m_submittedByHasBeenSet = true; m_submittedBy = std::move(value); }

    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline void SetSubmittedBy(const char* value) { m_submittedByHasBeenSet = true; m_submittedBy.assign(value); }

    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline CaseDetails& WithSubmittedBy(const Aws::String& value) { SetSubmittedBy(value); return *this;}

    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline CaseDetails& WithSubmittedBy(Aws::String&& value) { SetSubmittedBy(std::move(value)); return *this;}

    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline CaseDetails& WithSubmittedBy(const char* value) { SetSubmittedBy(value); return *this;}


    /**
     * <p>The time that the case was case created in the AWS Support Center.</p>
     */
    inline const Aws::String& GetTimeCreated() const{ return m_timeCreated; }

    /**
     * <p>The time that the case was case created in the AWS Support Center.</p>
     */
    inline bool TimeCreatedHasBeenSet() const { return m_timeCreatedHasBeenSet; }

    /**
     * <p>The time that the case was case created in the AWS Support Center.</p>
     */
    inline void SetTimeCreated(const Aws::String& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = value; }

    /**
     * <p>The time that the case was case created in the AWS Support Center.</p>
     */
    inline void SetTimeCreated(Aws::String&& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = std::move(value); }

    /**
     * <p>The time that the case was case created in the AWS Support Center.</p>
     */
    inline void SetTimeCreated(const char* value) { m_timeCreatedHasBeenSet = true; m_timeCreated.assign(value); }

    /**
     * <p>The time that the case was case created in the AWS Support Center.</p>
     */
    inline CaseDetails& WithTimeCreated(const Aws::String& value) { SetTimeCreated(value); return *this;}

    /**
     * <p>The time that the case was case created in the AWS Support Center.</p>
     */
    inline CaseDetails& WithTimeCreated(Aws::String&& value) { SetTimeCreated(std::move(value)); return *this;}

    /**
     * <p>The time that the case was case created in the AWS Support Center.</p>
     */
    inline CaseDetails& WithTimeCreated(const char* value) { SetTimeCreated(value); return *this;}


    /**
     * <p>The five most recent communications between you and AWS Support Center,
     * including the IDs of any attachments to the communications. Also includes a
     * <code>nextToken</code> that you can use to retrieve earlier communications.</p>
     */
    inline const RecentCaseCommunications& GetRecentCommunications() const{ return m_recentCommunications; }

    /**
     * <p>The five most recent communications between you and AWS Support Center,
     * including the IDs of any attachments to the communications. Also includes a
     * <code>nextToken</code> that you can use to retrieve earlier communications.</p>
     */
    inline bool RecentCommunicationsHasBeenSet() const { return m_recentCommunicationsHasBeenSet; }

    /**
     * <p>The five most recent communications between you and AWS Support Center,
     * including the IDs of any attachments to the communications. Also includes a
     * <code>nextToken</code> that you can use to retrieve earlier communications.</p>
     */
    inline void SetRecentCommunications(const RecentCaseCommunications& value) { m_recentCommunicationsHasBeenSet = true; m_recentCommunications = value; }

    /**
     * <p>The five most recent communications between you and AWS Support Center,
     * including the IDs of any attachments to the communications. Also includes a
     * <code>nextToken</code> that you can use to retrieve earlier communications.</p>
     */
    inline void SetRecentCommunications(RecentCaseCommunications&& value) { m_recentCommunicationsHasBeenSet = true; m_recentCommunications = std::move(value); }

    /**
     * <p>The five most recent communications between you and AWS Support Center,
     * including the IDs of any attachments to the communications. Also includes a
     * <code>nextToken</code> that you can use to retrieve earlier communications.</p>
     */
    inline CaseDetails& WithRecentCommunications(const RecentCaseCommunications& value) { SetRecentCommunications(value); return *this;}

    /**
     * <p>The five most recent communications between you and AWS Support Center,
     * including the IDs of any attachments to the communications. Also includes a
     * <code>nextToken</code> that you can use to retrieve earlier communications.</p>
     */
    inline CaseDetails& WithRecentCommunications(RecentCaseCommunications&& value) { SetRecentCommunications(std::move(value)); return *this;}


    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const{ return m_ccEmailAddresses; }

    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }

    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline void SetCcEmailAddresses(const Aws::Vector<Aws::String>& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = value; }

    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline void SetCcEmailAddresses(Aws::Vector<Aws::String>&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::move(value); }

    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline CaseDetails& WithCcEmailAddresses(const Aws::Vector<Aws::String>& value) { SetCcEmailAddresses(value); return *this;}

    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline CaseDetails& WithCcEmailAddresses(Aws::Vector<Aws::String>&& value) { SetCcEmailAddresses(std::move(value)); return *this;}

    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline CaseDetails& AddCcEmailAddresses(const Aws::String& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }

    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline CaseDetails& AddCcEmailAddresses(Aws::String&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline CaseDetails& AddCcEmailAddresses(const char* value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }


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
    inline CaseDetails& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline CaseDetails& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline CaseDetails& WithLanguage(const char* value) { SetLanguage(value); return *this;}

  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet;

    Aws::String m_displayId;
    bool m_displayIdHasBeenSet;

    Aws::String m_subject;
    bool m_subjectHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;

    Aws::String m_categoryCode;
    bool m_categoryCodeHasBeenSet;

    Aws::String m_severityCode;
    bool m_severityCodeHasBeenSet;

    Aws::String m_submittedBy;
    bool m_submittedByHasBeenSet;

    Aws::String m_timeCreated;
    bool m_timeCreatedHasBeenSet;

    RecentCaseCommunications m_recentCommunications;
    bool m_recentCommunicationsHasBeenSet;

    Aws::Vector<Aws::String> m_ccEmailAddresses;
    bool m_ccEmailAddressesHasBeenSet;

    Aws::String m_language;
    bool m_languageHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
