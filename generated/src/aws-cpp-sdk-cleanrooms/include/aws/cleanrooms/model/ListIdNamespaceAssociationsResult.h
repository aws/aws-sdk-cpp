/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/IdNamespaceAssociationSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListIdNamespaceAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListIdNamespaceAssociationsResult() = default;
    AWS_CLEANROOMS_API ListIdNamespaceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListIdNamespaceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdNamespaceAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary information of the ID namespace associations that you
     * requested.</p>
     */
    inline const Aws::Vector<IdNamespaceAssociationSummary>& GetIdNamespaceAssociationSummaries() const { return m_idNamespaceAssociationSummaries; }
    template<typename IdNamespaceAssociationSummariesT = Aws::Vector<IdNamespaceAssociationSummary>>
    void SetIdNamespaceAssociationSummaries(IdNamespaceAssociationSummariesT&& value) { m_idNamespaceAssociationSummariesHasBeenSet = true; m_idNamespaceAssociationSummaries = std::forward<IdNamespaceAssociationSummariesT>(value); }
    template<typename IdNamespaceAssociationSummariesT = Aws::Vector<IdNamespaceAssociationSummary>>
    ListIdNamespaceAssociationsResult& WithIdNamespaceAssociationSummaries(IdNamespaceAssociationSummariesT&& value) { SetIdNamespaceAssociationSummaries(std::forward<IdNamespaceAssociationSummariesT>(value)); return *this;}
    template<typename IdNamespaceAssociationSummariesT = IdNamespaceAssociationSummary>
    ListIdNamespaceAssociationsResult& AddIdNamespaceAssociationSummaries(IdNamespaceAssociationSummariesT&& value) { m_idNamespaceAssociationSummariesHasBeenSet = true; m_idNamespaceAssociationSummaries.emplace_back(std::forward<IdNamespaceAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdNamespaceAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<IdNamespaceAssociationSummary> m_idNamespaceAssociationSummaries;
    bool m_idNamespaceAssociationSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
