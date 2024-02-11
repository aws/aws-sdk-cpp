/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationFormVersionSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListEvaluationFormVersionsResult
  {
  public:
    AWS_CONNECT_API ListEvaluationFormVersionsResult();
    AWS_CONNECT_API ListEvaluationFormVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListEvaluationFormVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline const Aws::Vector<EvaluationFormVersionSummary>& GetEvaluationFormVersionSummaryList() const{ return m_evaluationFormVersionSummaryList; }

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline void SetEvaluationFormVersionSummaryList(const Aws::Vector<EvaluationFormVersionSummary>& value) { m_evaluationFormVersionSummaryList = value; }

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline void SetEvaluationFormVersionSummaryList(Aws::Vector<EvaluationFormVersionSummary>&& value) { m_evaluationFormVersionSummaryList = std::move(value); }

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline ListEvaluationFormVersionsResult& WithEvaluationFormVersionSummaryList(const Aws::Vector<EvaluationFormVersionSummary>& value) { SetEvaluationFormVersionSummaryList(value); return *this;}

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline ListEvaluationFormVersionsResult& WithEvaluationFormVersionSummaryList(Aws::Vector<EvaluationFormVersionSummary>&& value) { SetEvaluationFormVersionSummaryList(std::move(value)); return *this;}

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline ListEvaluationFormVersionsResult& AddEvaluationFormVersionSummaryList(const EvaluationFormVersionSummary& value) { m_evaluationFormVersionSummaryList.push_back(value); return *this; }

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline ListEvaluationFormVersionsResult& AddEvaluationFormVersionSummaryList(EvaluationFormVersionSummary&& value) { m_evaluationFormVersionSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListEvaluationFormVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListEvaluationFormVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListEvaluationFormVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEvaluationFormVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEvaluationFormVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEvaluationFormVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EvaluationFormVersionSummary> m_evaluationFormVersionSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
