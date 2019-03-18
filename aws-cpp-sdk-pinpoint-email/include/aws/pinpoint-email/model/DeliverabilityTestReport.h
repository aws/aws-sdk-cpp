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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-email/model/DeliverabilityTestStatus.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains metadata related to a predictive inbox placement
   * test.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeliverabilityTestReport">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API DeliverabilityTestReport
  {
  public:
    DeliverabilityTestReport();
    DeliverabilityTestReport(Aws::Utils::Json::JsonView jsonValue);
    DeliverabilityTestReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline void SetReportId(const Aws::String& value) { m_reportIdHasBeenSet = true; m_reportId = value; }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline void SetReportId(Aws::String&& value) { m_reportIdHasBeenSet = true; m_reportId = std::move(value); }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline void SetReportId(const char* value) { m_reportIdHasBeenSet = true; m_reportId.assign(value); }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline DeliverabilityTestReport& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline DeliverabilityTestReport& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline DeliverabilityTestReport& WithReportId(const char* value) { SetReportId(value); return *this;}


    /**
     * <p>A name that helps you identify a predictive inbox placement test report.</p>
     */
    inline const Aws::String& GetReportName() const{ return m_reportName; }

    /**
     * <p>A name that helps you identify a predictive inbox placement test report.</p>
     */
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }

    /**
     * <p>A name that helps you identify a predictive inbox placement test report.</p>
     */
    inline void SetReportName(const Aws::String& value) { m_reportNameHasBeenSet = true; m_reportName = value; }

    /**
     * <p>A name that helps you identify a predictive inbox placement test report.</p>
     */
    inline void SetReportName(Aws::String&& value) { m_reportNameHasBeenSet = true; m_reportName = std::move(value); }

    /**
     * <p>A name that helps you identify a predictive inbox placement test report.</p>
     */
    inline void SetReportName(const char* value) { m_reportNameHasBeenSet = true; m_reportName.assign(value); }

    /**
     * <p>A name that helps you identify a predictive inbox placement test report.</p>
     */
    inline DeliverabilityTestReport& WithReportName(const Aws::String& value) { SetReportName(value); return *this;}

    /**
     * <p>A name that helps you identify a predictive inbox placement test report.</p>
     */
    inline DeliverabilityTestReport& WithReportName(Aws::String&& value) { SetReportName(std::move(value)); return *this;}

    /**
     * <p>A name that helps you identify a predictive inbox placement test report.</p>
     */
    inline DeliverabilityTestReport& WithReportName(const char* value) { SetReportName(value); return *this;}


    /**
     * <p>The subject line for an email that you submitted in a predictive inbox
     * placement test.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line for an email that you submitted in a predictive inbox
     * placement test.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line for an email that you submitted in a predictive inbox
     * placement test.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line for an email that you submitted in a predictive inbox
     * placement test.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line for an email that you submitted in a predictive inbox
     * placement test.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject line for an email that you submitted in a predictive inbox
     * placement test.</p>
     */
    inline DeliverabilityTestReport& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line for an email that you submitted in a predictive inbox
     * placement test.</p>
     */
    inline DeliverabilityTestReport& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line for an email that you submitted in a predictive inbox
     * placement test.</p>
     */
    inline DeliverabilityTestReport& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The sender address that you specified for the predictive inbox placement
     * test.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>The sender address that you specified for the predictive inbox placement
     * test.</p>
     */
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }

    /**
     * <p>The sender address that you specified for the predictive inbox placement
     * test.</p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }

    /**
     * <p>The sender address that you specified for the predictive inbox placement
     * test.</p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }

    /**
     * <p>The sender address that you specified for the predictive inbox placement
     * test.</p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }

    /**
     * <p>The sender address that you specified for the predictive inbox placement
     * test.</p>
     */
    inline DeliverabilityTestReport& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>The sender address that you specified for the predictive inbox placement
     * test.</p>
     */
    inline DeliverabilityTestReport& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The sender address that you specified for the predictive inbox placement
     * test.</p>
     */
    inline DeliverabilityTestReport& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}


    /**
     * <p>The date and time when the predictive inbox placement test was created, in
     * Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time when the predictive inbox placement test was created, in
     * Unix time format.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time when the predictive inbox placement test was created, in
     * Unix time format.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time when the predictive inbox placement test was created, in
     * Unix time format.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time when the predictive inbox placement test was created, in
     * Unix time format.</p>
     */
    inline DeliverabilityTestReport& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time when the predictive inbox placement test was created, in
     * Unix time format.</p>
     */
    inline DeliverabilityTestReport& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline const DeliverabilityTestStatus& GetDeliverabilityTestStatus() const{ return m_deliverabilityTestStatus; }

    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline bool DeliverabilityTestStatusHasBeenSet() const { return m_deliverabilityTestStatusHasBeenSet; }

    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline void SetDeliverabilityTestStatus(const DeliverabilityTestStatus& value) { m_deliverabilityTestStatusHasBeenSet = true; m_deliverabilityTestStatus = value; }

    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline void SetDeliverabilityTestStatus(DeliverabilityTestStatus&& value) { m_deliverabilityTestStatusHasBeenSet = true; m_deliverabilityTestStatus = std::move(value); }

    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline DeliverabilityTestReport& WithDeliverabilityTestStatus(const DeliverabilityTestStatus& value) { SetDeliverabilityTestStatus(value); return *this;}

    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline DeliverabilityTestReport& WithDeliverabilityTestStatus(DeliverabilityTestStatus&& value) { SetDeliverabilityTestStatus(std::move(value)); return *this;}

  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet;

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet;

    Aws::String m_subject;
    bool m_subjectHasBeenSet;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    DeliverabilityTestStatus m_deliverabilityTestStatus;
    bool m_deliverabilityTestStatusHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
