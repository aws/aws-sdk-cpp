/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/IpRouteInfo.h>
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
namespace DirectoryService
{
namespace Model
{
  class ListIpRoutesResult
  {
  public:
    AWS_DIRECTORYSERVICE_API ListIpRoutesResult() = default;
    AWS_DIRECTORYSERVICE_API ListIpRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API ListIpRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a>IpRoute</a>s.</p>
     */
    inline const Aws::Vector<IpRouteInfo>& GetIpRoutesInfo() const { return m_ipRoutesInfo; }
    template<typename IpRoutesInfoT = Aws::Vector<IpRouteInfo>>
    void SetIpRoutesInfo(IpRoutesInfoT&& value) { m_ipRoutesInfoHasBeenSet = true; m_ipRoutesInfo = std::forward<IpRoutesInfoT>(value); }
    template<typename IpRoutesInfoT = Aws::Vector<IpRouteInfo>>
    ListIpRoutesResult& WithIpRoutesInfo(IpRoutesInfoT&& value) { SetIpRoutesInfo(std::forward<IpRoutesInfoT>(value)); return *this;}
    template<typename IpRoutesInfoT = IpRouteInfo>
    ListIpRoutesResult& AddIpRoutesInfo(IpRoutesInfoT&& value) { m_ipRoutesInfoHasBeenSet = true; m_ipRoutesInfo.emplace_back(std::forward<IpRoutesInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>ListIpRoutes</a> to
     * retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIpRoutesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIpRoutesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpRouteInfo> m_ipRoutesInfo;
    bool m_ipRoutesInfoHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
