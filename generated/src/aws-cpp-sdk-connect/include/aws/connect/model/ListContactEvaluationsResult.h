/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationSummary.h>
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
  class ListContactEvaluationsResult
  {
  public:
    AWS_CONNECT_API ListContactEvaluationsResult();
    AWS_CONNECT_API ListContactEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListContactEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides details about a list of contact evaluations belonging to an
     * instance.</p>
     */
    inline const Aws::Vector<EvaluationSummary>& GetEvaluationSummaryList() const{ return m_evaluationSummaryList; }

    /**
     * <p>Provides details about a list of contact evaluations belonging to an
     * instance.</p>
     */
    inline void SetEvaluationSummaryList(const Aws::Vector<EvaluationSummary>& value) { m_evaluationSummaryList = value; }

    /**
     * <p>Provides details about a list of contact evaluations belonging to an
     * instance.</p>
     */
    inline void SetEvaluationSummaryList(Aws::Vector<EvaluationSummary>&& value) { m_evaluationSummaryList = std::move(value); }

    /**
     * <p>Provides details about a list of contact evaluations belonging to an
     * instance.</p>
     */
    inline ListContactEvaluationsResult& WithEvaluationSummaryList(const Aws::Vector<EvaluationSummary>& value) { SetEvaluationSummaryList(value); return *this;}

    /**
     * <p>Provides details about a list of contact evaluations belonging to an
     * instance.</p>
     */
    inline ListContactEvaluationsResult& WithEvaluationSummaryList(Aws::Vector<EvaluationSummary>&& value) { SetEvaluationSummaryList(std::move(value)); return *this;}

    /**
     * <p>Provides details about a list of contact evaluations belonging to an
     * instance.</p>
     */
    inline ListContactEvaluationsResult& AddEvaluationSummaryList(const EvaluationSummary& value) { m_evaluationSummaryList.push_back(value); return *this; }

    /**
     * <p>Provides details about a list of contact evaluations belonging to an
     * instance.</p>
     */
    inline ListContactEvaluationsResult& AddEvaluationSummaryList(EvaluationSummary&& value) { m_evaluationSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as null in the response.</p>
     * 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as null in the response.</p>
     * 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as null in the response.</p>
     * 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as null in the response.</p>
     * 
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as null in the response.</p>
     * 
     */
    inline ListContactEvaluationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as null in the response.</p>
     * 
     */
    inline ListContactEvaluationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as null in the response.</p>
     * 
     */
    inline ListContactEvaluationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListContactEvaluationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListContactEvaluationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListContactEvaluationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EvaluationSummary> m_evaluationSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
