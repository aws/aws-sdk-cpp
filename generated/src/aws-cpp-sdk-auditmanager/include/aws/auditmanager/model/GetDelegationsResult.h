/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/DelegationMetadata.h>
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
namespace AuditManager
{
namespace Model
{
  class GetDelegationsResult
  {
  public:
    AWS_AUDITMANAGER_API GetDelegationsResult() = default;
    AWS_AUDITMANAGER_API GetDelegationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetDelegationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of delegations that the <code>GetDelegations</code> API returned.
     * </p>
     */
    inline const Aws::Vector<DelegationMetadata>& GetDelegations() const { return m_delegations; }
    template<typename DelegationsT = Aws::Vector<DelegationMetadata>>
    void SetDelegations(DelegationsT&& value) { m_delegationsHasBeenSet = true; m_delegations = std::forward<DelegationsT>(value); }
    template<typename DelegationsT = Aws::Vector<DelegationMetadata>>
    GetDelegationsResult& WithDelegations(DelegationsT&& value) { SetDelegations(std::forward<DelegationsT>(value)); return *this;}
    template<typename DelegationsT = DelegationMetadata>
    GetDelegationsResult& AddDelegations(DelegationsT&& value) { m_delegationsHasBeenSet = true; m_delegations.emplace_back(std::forward<DelegationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDelegationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDelegationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DelegationMetadata> m_delegations;
    bool m_delegationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
