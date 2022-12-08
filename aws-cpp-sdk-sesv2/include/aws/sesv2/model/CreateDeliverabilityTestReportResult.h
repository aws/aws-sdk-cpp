/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DeliverabilityTestStatus.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about the predictive inbox placement test that you
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDeliverabilityTestReportResponse">AWS
   * API Reference</a></p>
   */
  class CreateDeliverabilityTestReportResult
  {
  public:
    AWS_SESV2_API CreateDeliverabilityTestReportResult();
    AWS_SESV2_API CreateDeliverabilityTestReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API CreateDeliverabilityTestReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
} // namespace SESV2
} // namespace Aws
