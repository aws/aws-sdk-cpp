/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/MetricDataResult.h>
#include <aws/sesv2/model/MetricDataError.h>
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
   * <p>Represents the result of processing your metric data batch
   * request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BatchGetMetricDataResponse">AWS
   * API Reference</a></p>
   */
  class BatchGetMetricDataResult
  {
  public:
    AWS_SESV2_API BatchGetMetricDataResult();
    AWS_SESV2_API BatchGetMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API BatchGetMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of successfully retrieved <code>MetricDataResult</code>.</p>
     */
    inline const Aws::Vector<MetricDataResult>& GetResults() const{ return m_results; }

    /**
     * <p>A list of successfully retrieved <code>MetricDataResult</code>.</p>
     */
    inline void SetResults(const Aws::Vector<MetricDataResult>& value) { m_results = value; }

    /**
     * <p>A list of successfully retrieved <code>MetricDataResult</code>.</p>
     */
    inline void SetResults(Aws::Vector<MetricDataResult>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of successfully retrieved <code>MetricDataResult</code>.</p>
     */
    inline BatchGetMetricDataResult& WithResults(const Aws::Vector<MetricDataResult>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of successfully retrieved <code>MetricDataResult</code>.</p>
     */
    inline BatchGetMetricDataResult& WithResults(Aws::Vector<MetricDataResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of successfully retrieved <code>MetricDataResult</code>.</p>
     */
    inline BatchGetMetricDataResult& AddResults(const MetricDataResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of successfully retrieved <code>MetricDataResult</code>.</p>
     */
    inline BatchGetMetricDataResult& AddResults(MetricDataResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>MetricDataError</code> encountered while processing your
     * metric data batch request.</p>
     */
    inline const Aws::Vector<MetricDataError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of <code>MetricDataError</code> encountered while processing your
     * metric data batch request.</p>
     */
    inline void SetErrors(const Aws::Vector<MetricDataError>& value) { m_errors = value; }

    /**
     * <p>A list of <code>MetricDataError</code> encountered while processing your
     * metric data batch request.</p>
     */
    inline void SetErrors(Aws::Vector<MetricDataError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of <code>MetricDataError</code> encountered while processing your
     * metric data batch request.</p>
     */
    inline BatchGetMetricDataResult& WithErrors(const Aws::Vector<MetricDataError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of <code>MetricDataError</code> encountered while processing your
     * metric data batch request.</p>
     */
    inline BatchGetMetricDataResult& WithErrors(Aws::Vector<MetricDataError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MetricDataError</code> encountered while processing your
     * metric data batch request.</p>
     */
    inline BatchGetMetricDataResult& AddErrors(const MetricDataError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of <code>MetricDataError</code> encountered while processing your
     * metric data batch request.</p>
     */
    inline BatchGetMetricDataResult& AddErrors(MetricDataError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MetricDataResult> m_results;

    Aws::Vector<MetricDataError> m_errors;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
