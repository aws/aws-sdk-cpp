/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/MembershipDatasources.h>
#include <aws/detective/model/UnprocessedGraph.h>
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
namespace Detective
{
namespace Model
{
  class BatchGetMembershipDatasourcesResult
  {
  public:
    AWS_DETECTIVE_API BatchGetMembershipDatasourcesResult() = default;
    AWS_DETECTIVE_API BatchGetMembershipDatasourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API BatchGetMembershipDatasourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details on the data source package history for an member of the behavior
     * graph.</p>
     */
    inline const Aws::Vector<MembershipDatasources>& GetMembershipDatasources() const { return m_membershipDatasources; }
    template<typename MembershipDatasourcesT = Aws::Vector<MembershipDatasources>>
    void SetMembershipDatasources(MembershipDatasourcesT&& value) { m_membershipDatasourcesHasBeenSet = true; m_membershipDatasources = std::forward<MembershipDatasourcesT>(value); }
    template<typename MembershipDatasourcesT = Aws::Vector<MembershipDatasources>>
    BatchGetMembershipDatasourcesResult& WithMembershipDatasources(MembershipDatasourcesT&& value) { SetMembershipDatasources(std::forward<MembershipDatasourcesT>(value)); return *this;}
    template<typename MembershipDatasourcesT = MembershipDatasources>
    BatchGetMembershipDatasourcesResult& AddMembershipDatasources(MembershipDatasourcesT&& value) { m_membershipDatasourcesHasBeenSet = true; m_membershipDatasources.emplace_back(std::forward<MembershipDatasourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Graphs that data source package information could not be retrieved for.</p>
     */
    inline const Aws::Vector<UnprocessedGraph>& GetUnprocessedGraphs() const { return m_unprocessedGraphs; }
    template<typename UnprocessedGraphsT = Aws::Vector<UnprocessedGraph>>
    void SetUnprocessedGraphs(UnprocessedGraphsT&& value) { m_unprocessedGraphsHasBeenSet = true; m_unprocessedGraphs = std::forward<UnprocessedGraphsT>(value); }
    template<typename UnprocessedGraphsT = Aws::Vector<UnprocessedGraph>>
    BatchGetMembershipDatasourcesResult& WithUnprocessedGraphs(UnprocessedGraphsT&& value) { SetUnprocessedGraphs(std::forward<UnprocessedGraphsT>(value)); return *this;}
    template<typename UnprocessedGraphsT = UnprocessedGraph>
    BatchGetMembershipDatasourcesResult& AddUnprocessedGraphs(UnprocessedGraphsT&& value) { m_unprocessedGraphsHasBeenSet = true; m_unprocessedGraphs.emplace_back(std::forward<UnprocessedGraphsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetMembershipDatasourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MembershipDatasources> m_membershipDatasources;
    bool m_membershipDatasourcesHasBeenSet = false;

    Aws::Vector<UnprocessedGraph> m_unprocessedGraphs;
    bool m_unprocessedGraphsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
