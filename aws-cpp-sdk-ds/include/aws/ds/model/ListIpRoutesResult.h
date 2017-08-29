/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API ListIpRoutesResult
  {
  public:
    ListIpRoutesResult();
    ListIpRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIpRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <a>IpRoute</a>s.</p>
     */
    inline const Aws::Vector<IpRouteInfo>& GetIpRoutesInfo() const{ return m_ipRoutesInfo; }

    /**
     * <p>A list of <a>IpRoute</a>s.</p>
     */
    inline void SetIpRoutesInfo(const Aws::Vector<IpRouteInfo>& value) { m_ipRoutesInfo = value; }

    /**
     * <p>A list of <a>IpRoute</a>s.</p>
     */
    inline void SetIpRoutesInfo(Aws::Vector<IpRouteInfo>&& value) { m_ipRoutesInfo = std::move(value); }

    /**
     * <p>A list of <a>IpRoute</a>s.</p>
     */
    inline ListIpRoutesResult& WithIpRoutesInfo(const Aws::Vector<IpRouteInfo>& value) { SetIpRoutesInfo(value); return *this;}

    /**
     * <p>A list of <a>IpRoute</a>s.</p>
     */
    inline ListIpRoutesResult& WithIpRoutesInfo(Aws::Vector<IpRouteInfo>&& value) { SetIpRoutesInfo(std::move(value)); return *this;}

    /**
     * <p>A list of <a>IpRoute</a>s.</p>
     */
    inline ListIpRoutesResult& AddIpRoutesInfo(const IpRouteInfo& value) { m_ipRoutesInfo.push_back(value); return *this; }

    /**
     * <p>A list of <a>IpRoute</a>s.</p>
     */
    inline ListIpRoutesResult& AddIpRoutesInfo(IpRouteInfo&& value) { m_ipRoutesInfo.push_back(std::move(value)); return *this; }


    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>ListIpRoutes</a> to
     * retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>ListIpRoutes</a> to
     * retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>ListIpRoutes</a> to
     * retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>ListIpRoutes</a> to
     * retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>ListIpRoutes</a> to
     * retrieve the next set of items.</p>
     */
    inline ListIpRoutesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>ListIpRoutes</a> to
     * retrieve the next set of items.</p>
     */
    inline ListIpRoutesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>ListIpRoutes</a> to
     * retrieve the next set of items.</p>
     */
    inline ListIpRoutesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IpRouteInfo> m_ipRoutesInfo;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
