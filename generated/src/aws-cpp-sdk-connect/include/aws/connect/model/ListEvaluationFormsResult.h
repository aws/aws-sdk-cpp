/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationFormSummary.h>
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
  class ListEvaluationFormsResult
  {
  public:
    AWS_CONNECT_API ListEvaluationFormsResult();
    AWS_CONNECT_API ListEvaluationFormsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListEvaluationFormsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline const Aws::Vector<EvaluationFormSummary>& GetEvaluationFormSummaryList() const{ return m_evaluationFormSummaryList; }

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline void SetEvaluationFormSummaryList(const Aws::Vector<EvaluationFormSummary>& value) { m_evaluationFormSummaryList = value; }

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline void SetEvaluationFormSummaryList(Aws::Vector<EvaluationFormSummary>&& value) { m_evaluationFormSummaryList = std::move(value); }

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline ListEvaluationFormsResult& WithEvaluationFormSummaryList(const Aws::Vector<EvaluationFormSummary>& value) { SetEvaluationFormSummaryList(value); return *this;}

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline ListEvaluationFormsResult& WithEvaluationFormSummaryList(Aws::Vector<EvaluationFormSummary>&& value) { SetEvaluationFormSummaryList(std::move(value)); return *this;}

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline ListEvaluationFormsResult& AddEvaluationFormSummaryList(const EvaluationFormSummary& value) { m_evaluationFormSummaryList.push_back(value); return *this; }

    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline ListEvaluationFormsResult& AddEvaluationFormSummaryList(EvaluationFormSummary&& value) { m_evaluationFormSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListEvaluationFormsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListEvaluationFormsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListEvaluationFormsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEvaluationFormsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEvaluationFormsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEvaluationFormsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EvaluationFormSummary> m_evaluationFormSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
