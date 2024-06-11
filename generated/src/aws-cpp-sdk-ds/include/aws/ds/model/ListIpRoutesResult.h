﻿/**
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
    AWS_DIRECTORYSERVICE_API ListIpRoutesResult();
    AWS_DIRECTORYSERVICE_API ListIpRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API ListIpRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a>IpRoute</a>s.</p>
     */
    inline const Aws::Vector<IpRouteInfo>& GetIpRoutesInfo() const{ return m_ipRoutesInfo; }
    inline void SetIpRoutesInfo(const Aws::Vector<IpRouteInfo>& value) { m_ipRoutesInfo = value; }
    inline void SetIpRoutesInfo(Aws::Vector<IpRouteInfo>&& value) { m_ipRoutesInfo = std::move(value); }
    inline ListIpRoutesResult& WithIpRoutesInfo(const Aws::Vector<IpRouteInfo>& value) { SetIpRoutesInfo(value); return *this;}
    inline ListIpRoutesResult& WithIpRoutesInfo(Aws::Vector<IpRouteInfo>&& value) { SetIpRoutesInfo(std::move(value)); return *this;}
    inline ListIpRoutesResult& AddIpRoutesInfo(const IpRouteInfo& value) { m_ipRoutesInfo.push_back(value); return *this; }
    inline ListIpRoutesResult& AddIpRoutesInfo(IpRouteInfo&& value) { m_ipRoutesInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>ListIpRoutes</a> to
     * retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIpRoutesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIpRoutesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIpRoutesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIpRoutesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIpRoutesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIpRoutesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IpRouteInfo> m_ipRoutesInfo;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
