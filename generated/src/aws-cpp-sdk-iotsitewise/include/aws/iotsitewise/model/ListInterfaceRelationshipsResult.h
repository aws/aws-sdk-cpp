/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/InterfaceRelationshipSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListInterfaceRelationshipsResult
  {
  public:
    AWS_IOTSITEWISE_API ListInterfaceRelationshipsResult() = default;
    AWS_IOTSITEWISE_API ListInterfaceRelationshipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListInterfaceRelationshipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each interface relationship.</p>
     */
    inline const Aws::Vector<InterfaceRelationshipSummary>& GetInterfaceRelationshipSummaries() const { return m_interfaceRelationshipSummaries; }
    template<typename InterfaceRelationshipSummariesT = Aws::Vector<InterfaceRelationshipSummary>>
    void SetInterfaceRelationshipSummaries(InterfaceRelationshipSummariesT&& value) { m_interfaceRelationshipSummariesHasBeenSet = true; m_interfaceRelationshipSummaries = std::forward<InterfaceRelationshipSummariesT>(value); }
    template<typename InterfaceRelationshipSummariesT = Aws::Vector<InterfaceRelationshipSummary>>
    ListInterfaceRelationshipsResult& WithInterfaceRelationshipSummaries(InterfaceRelationshipSummariesT&& value) { SetInterfaceRelationshipSummaries(std::forward<InterfaceRelationshipSummariesT>(value)); return *this;}
    template<typename InterfaceRelationshipSummariesT = InterfaceRelationshipSummary>
    ListInterfaceRelationshipsResult& AddInterfaceRelationshipSummaries(InterfaceRelationshipSummariesT&& value) { m_interfaceRelationshipSummariesHasBeenSet = true; m_interfaceRelationshipSummaries.emplace_back(std::forward<InterfaceRelationshipSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInterfaceRelationshipsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInterfaceRelationshipsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InterfaceRelationshipSummary> m_interfaceRelationshipSummaries;
    bool m_interfaceRelationshipSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
