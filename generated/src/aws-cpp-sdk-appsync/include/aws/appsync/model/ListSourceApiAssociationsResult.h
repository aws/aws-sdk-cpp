/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/SourceApiAssociationSummary.h>
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
namespace AppSync
{
namespace Model
{
  class ListSourceApiAssociationsResult
  {
  public:
    AWS_APPSYNC_API ListSourceApiAssociationsResult() = default;
    AWS_APPSYNC_API ListSourceApiAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListSourceApiAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>SourceApiAssociationSummary</code> object data.</p>
     */
    inline const Aws::Vector<SourceApiAssociationSummary>& GetSourceApiAssociationSummaries() const { return m_sourceApiAssociationSummaries; }
    template<typename SourceApiAssociationSummariesT = Aws::Vector<SourceApiAssociationSummary>>
    void SetSourceApiAssociationSummaries(SourceApiAssociationSummariesT&& value) { m_sourceApiAssociationSummariesHasBeenSet = true; m_sourceApiAssociationSummaries = std::forward<SourceApiAssociationSummariesT>(value); }
    template<typename SourceApiAssociationSummariesT = Aws::Vector<SourceApiAssociationSummary>>
    ListSourceApiAssociationsResult& WithSourceApiAssociationSummaries(SourceApiAssociationSummariesT&& value) { SetSourceApiAssociationSummaries(std::forward<SourceApiAssociationSummariesT>(value)); return *this;}
    template<typename SourceApiAssociationSummariesT = SourceApiAssociationSummary>
    ListSourceApiAssociationsResult& AddSourceApiAssociationSummaries(SourceApiAssociationSummariesT&& value) { m_sourceApiAssociationSummariesHasBeenSet = true; m_sourceApiAssociationSummaries.emplace_back(std::forward<SourceApiAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSourceApiAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSourceApiAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SourceApiAssociationSummary> m_sourceApiAssociationSummaries;
    bool m_sourceApiAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
