/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/IntegrationAssociationSummary.h>
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
  class ListIntegrationAssociationsResult
  {
  public:
    AWS_CONNECT_API ListIntegrationAssociationsResult();
    AWS_CONNECT_API ListIntegrationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListIntegrationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The associations.</p>
     */
    inline const Aws::Vector<IntegrationAssociationSummary>& GetIntegrationAssociationSummaryList() const{ return m_integrationAssociationSummaryList; }
    inline void SetIntegrationAssociationSummaryList(const Aws::Vector<IntegrationAssociationSummary>& value) { m_integrationAssociationSummaryList = value; }
    inline void SetIntegrationAssociationSummaryList(Aws::Vector<IntegrationAssociationSummary>&& value) { m_integrationAssociationSummaryList = std::move(value); }
    inline ListIntegrationAssociationsResult& WithIntegrationAssociationSummaryList(const Aws::Vector<IntegrationAssociationSummary>& value) { SetIntegrationAssociationSummaryList(value); return *this;}
    inline ListIntegrationAssociationsResult& WithIntegrationAssociationSummaryList(Aws::Vector<IntegrationAssociationSummary>&& value) { SetIntegrationAssociationSummaryList(std::move(value)); return *this;}
    inline ListIntegrationAssociationsResult& AddIntegrationAssociationSummaryList(const IntegrationAssociationSummary& value) { m_integrationAssociationSummaryList.push_back(value); return *this; }
    inline ListIntegrationAssociationsResult& AddIntegrationAssociationSummaryList(IntegrationAssociationSummary&& value) { m_integrationAssociationSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIntegrationAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIntegrationAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIntegrationAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIntegrationAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIntegrationAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIntegrationAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IntegrationAssociationSummary> m_integrationAssociationSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
