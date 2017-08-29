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
#include <aws/xray/model/Trace.h>
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
  class AWS_XRAY_API BatchGetTracesResult
  {
  public:
    BatchGetTracesResult();
    BatchGetTracesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetTracesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Full traces for the specified requests.</p>
     */
    inline const Aws::Vector<Trace>& GetTraces() const{ return m_traces; }

    /**
     * <p>Full traces for the specified requests.</p>
     */
    inline void SetTraces(const Aws::Vector<Trace>& value) { m_traces = value; }

    /**
     * <p>Full traces for the specified requests.</p>
     */
    inline void SetTraces(Aws::Vector<Trace>&& value) { m_traces = std::move(value); }

    /**
     * <p>Full traces for the specified requests.</p>
     */
    inline BatchGetTracesResult& WithTraces(const Aws::Vector<Trace>& value) { SetTraces(value); return *this;}

    /**
     * <p>Full traces for the specified requests.</p>
     */
    inline BatchGetTracesResult& WithTraces(Aws::Vector<Trace>&& value) { SetTraces(std::move(value)); return *this;}

    /**
     * <p>Full traces for the specified requests.</p>
     */
    inline BatchGetTracesResult& AddTraces(const Trace& value) { m_traces.push_back(value); return *this; }

    /**
     * <p>Full traces for the specified requests.</p>
     */
    inline BatchGetTracesResult& AddTraces(Trace&& value) { m_traces.push_back(std::move(value)); return *this; }


    /**
     * <p>Trace IDs of requests that haven't been processed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnprocessedTraceIds() const{ return m_unprocessedTraceIds; }

    /**
     * <p>Trace IDs of requests that haven't been processed.</p>
     */
    inline void SetUnprocessedTraceIds(const Aws::Vector<Aws::String>& value) { m_unprocessedTraceIds = value; }

    /**
     * <p>Trace IDs of requests that haven't been processed.</p>
     */
    inline void SetUnprocessedTraceIds(Aws::Vector<Aws::String>&& value) { m_unprocessedTraceIds = std::move(value); }

    /**
     * <p>Trace IDs of requests that haven't been processed.</p>
     */
    inline BatchGetTracesResult& WithUnprocessedTraceIds(const Aws::Vector<Aws::String>& value) { SetUnprocessedTraceIds(value); return *this;}

    /**
     * <p>Trace IDs of requests that haven't been processed.</p>
     */
    inline BatchGetTracesResult& WithUnprocessedTraceIds(Aws::Vector<Aws::String>&& value) { SetUnprocessedTraceIds(std::move(value)); return *this;}

    /**
     * <p>Trace IDs of requests that haven't been processed.</p>
     */
    inline BatchGetTracesResult& AddUnprocessedTraceIds(const Aws::String& value) { m_unprocessedTraceIds.push_back(value); return *this; }

    /**
     * <p>Trace IDs of requests that haven't been processed.</p>
     */
    inline BatchGetTracesResult& AddUnprocessedTraceIds(Aws::String&& value) { m_unprocessedTraceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Trace IDs of requests that haven't been processed.</p>
     */
    inline BatchGetTracesResult& AddUnprocessedTraceIds(const char* value) { m_unprocessedTraceIds.push_back(value); return *this; }


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
    inline BatchGetTracesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline BatchGetTracesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline BatchGetTracesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Trace> m_traces;

    Aws::Vector<Aws::String> m_unprocessedTraceIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
