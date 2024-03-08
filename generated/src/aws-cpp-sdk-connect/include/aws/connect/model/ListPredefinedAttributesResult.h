/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/PredefinedAttributeSummary.h>
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
  class ListPredefinedAttributesResult
  {
  public:
    AWS_CONNECT_API ListPredefinedAttributesResult();
    AWS_CONNECT_API ListPredefinedAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListPredefinedAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListPredefinedAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListPredefinedAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListPredefinedAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Summary of the predefined attributes.</p>
     */
    inline const Aws::Vector<PredefinedAttributeSummary>& GetPredefinedAttributeSummaryList() const{ return m_predefinedAttributeSummaryList; }

    /**
     * <p>Summary of the predefined attributes.</p>
     */
    inline void SetPredefinedAttributeSummaryList(const Aws::Vector<PredefinedAttributeSummary>& value) { m_predefinedAttributeSummaryList = value; }

    /**
     * <p>Summary of the predefined attributes.</p>
     */
    inline void SetPredefinedAttributeSummaryList(Aws::Vector<PredefinedAttributeSummary>&& value) { m_predefinedAttributeSummaryList = std::move(value); }

    /**
     * <p>Summary of the predefined attributes.</p>
     */
    inline ListPredefinedAttributesResult& WithPredefinedAttributeSummaryList(const Aws::Vector<PredefinedAttributeSummary>& value) { SetPredefinedAttributeSummaryList(value); return *this;}

    /**
     * <p>Summary of the predefined attributes.</p>
     */
    inline ListPredefinedAttributesResult& WithPredefinedAttributeSummaryList(Aws::Vector<PredefinedAttributeSummary>&& value) { SetPredefinedAttributeSummaryList(std::move(value)); return *this;}

    /**
     * <p>Summary of the predefined attributes.</p>
     */
    inline ListPredefinedAttributesResult& AddPredefinedAttributeSummaryList(const PredefinedAttributeSummary& value) { m_predefinedAttributeSummaryList.push_back(value); return *this; }

    /**
     * <p>Summary of the predefined attributes.</p>
     */
    inline ListPredefinedAttributesResult& AddPredefinedAttributeSummaryList(PredefinedAttributeSummary&& value) { m_predefinedAttributeSummaryList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPredefinedAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPredefinedAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPredefinedAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<PredefinedAttributeSummary> m_predefinedAttributeSummaryList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
