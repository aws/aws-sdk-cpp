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
#include <aws/pinpoint-email/model/DeliverabilityTestStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Information about the predictive inbox placement test that you
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateDeliverabilityTestReportResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API CreateDeliverabilityTestReportResult
  {
  public:
    CreateDeliverabilityTestReportResult();
    CreateDeliverabilityTestReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDeliverabilityTestReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline void SetReportId(const char* value) { m_reportId.assign(value); }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline CreateDeliverabilityTestReportResult& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline CreateDeliverabilityTestReportResult& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline CreateDeliverabilityTestReportResult& WithReportId(const char* value) { SetReportId(value); return *this;}


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
    inline void SetDeliverabilityTestStatus(const DeliverabilityTestStatus& value) { m_deliverabilityTestStatus = value; }

    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline void SetDeliverabilityTestStatus(DeliverabilityTestStatus&& value) { m_deliverabilityTestStatus = std::move(value); }

    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline CreateDeliverabilityTestReportResult& WithDeliverabilityTestStatus(const DeliverabilityTestStatus& value) { SetDeliverabilityTestStatus(value); return *this;}

    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline CreateDeliverabilityTestReportResult& WithDeliverabilityTestStatus(DeliverabilityTestStatus&& value) { SetDeliverabilityTestStatus(std::move(value)); return *this;}

  private:

    Aws::String m_reportId;

    DeliverabilityTestStatus m_deliverabilityTestStatus;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
