/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FlowAssociationSummary.h>
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
  class ListFlowAssociationsResult
  {
  public:
    AWS_CONNECT_API ListFlowAssociationsResult();
    AWS_CONNECT_API ListFlowAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListFlowAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary of flow associations.</p>
     */
    inline const Aws::Vector<FlowAssociationSummary>& GetFlowAssociationSummaryList() const{ return m_flowAssociationSummaryList; }

    /**
     * <p>Summary of flow associations.</p>
     */
    inline void SetFlowAssociationSummaryList(const Aws::Vector<FlowAssociationSummary>& value) { m_flowAssociationSummaryList = value; }

    /**
     * <p>Summary of flow associations.</p>
     */
    inline void SetFlowAssociationSummaryList(Aws::Vector<FlowAssociationSummary>&& value) { m_flowAssociationSummaryList = std::move(value); }

    /**
     * <p>Summary of flow associations.</p>
     */
    inline ListFlowAssociationsResult& WithFlowAssociationSummaryList(const Aws::Vector<FlowAssociationSummary>& value) { SetFlowAssociationSummaryList(value); return *this;}

    /**
     * <p>Summary of flow associations.</p>
     */
    inline ListFlowAssociationsResult& WithFlowAssociationSummaryList(Aws::Vector<FlowAssociationSummary>&& value) { SetFlowAssociationSummaryList(std::move(value)); return *this;}

    /**
     * <p>Summary of flow associations.</p>
     */
    inline ListFlowAssociationsResult& AddFlowAssociationSummaryList(const FlowAssociationSummary& value) { m_flowAssociationSummaryList.push_back(value); return *this; }

    /**
     * <p>Summary of flow associations.</p>
     */
    inline ListFlowAssociationsResult& AddFlowAssociationSummaryList(FlowAssociationSummary&& value) { m_flowAssociationSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListFlowAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListFlowAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListFlowAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFlowAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFlowAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFlowAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FlowAssociationSummary> m_flowAssociationSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
