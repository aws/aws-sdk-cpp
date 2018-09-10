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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/SamplingStatisticSummary.h>
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
namespace XRay
{
namespace Model
{
  class AWS_XRAY_API GetSamplingStatisticSummariesResult
  {
  public:
    GetSamplingStatisticSummariesResult();
    GetSamplingStatisticSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSamplingStatisticSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the number of requests instrumented for each sampling
     * rule.</p>
     */
    inline const Aws::Vector<SamplingStatisticSummary>& GetSamplingStatisticSummaries() const{ return m_samplingStatisticSummaries; }

    /**
     * <p>Information about the number of requests instrumented for each sampling
     * rule.</p>
     */
    inline void SetSamplingStatisticSummaries(const Aws::Vector<SamplingStatisticSummary>& value) { m_samplingStatisticSummaries = value; }

    /**
     * <p>Information about the number of requests instrumented for each sampling
     * rule.</p>
     */
    inline void SetSamplingStatisticSummaries(Aws::Vector<SamplingStatisticSummary>&& value) { m_samplingStatisticSummaries = std::move(value); }

    /**
     * <p>Information about the number of requests instrumented for each sampling
     * rule.</p>
     */
    inline GetSamplingStatisticSummariesResult& WithSamplingStatisticSummaries(const Aws::Vector<SamplingStatisticSummary>& value) { SetSamplingStatisticSummaries(value); return *this;}

    /**
     * <p>Information about the number of requests instrumented for each sampling
     * rule.</p>
     */
    inline GetSamplingStatisticSummariesResult& WithSamplingStatisticSummaries(Aws::Vector<SamplingStatisticSummary>&& value) { SetSamplingStatisticSummaries(std::move(value)); return *this;}

    /**
     * <p>Information about the number of requests instrumented for each sampling
     * rule.</p>
     */
    inline GetSamplingStatisticSummariesResult& AddSamplingStatisticSummaries(const SamplingStatisticSummary& value) { m_samplingStatisticSummaries.push_back(value); return *this; }

    /**
     * <p>Information about the number of requests instrumented for each sampling
     * rule.</p>
     */
    inline GetSamplingStatisticSummariesResult& AddSamplingStatisticSummaries(SamplingStatisticSummary&& value) { m_samplingStatisticSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token. Not used.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetSamplingStatisticSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetSamplingStatisticSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetSamplingStatisticSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SamplingStatisticSummary> m_samplingStatisticSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
