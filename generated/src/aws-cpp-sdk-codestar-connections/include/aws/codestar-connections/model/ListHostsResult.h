/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/Host.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class ListHostsResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API ListHostsResult();
    AWS_CODESTARCONNECTIONS_API ListHostsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API ListHostsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of hosts and the details for each host, such as status, endpoint, and
     * provider type.</p>
     */
    inline const Aws::Vector<Host>& GetHosts() const{ return m_hosts; }

    /**
     * <p>A list of hosts and the details for each host, such as status, endpoint, and
     * provider type.</p>
     */
    inline void SetHosts(const Aws::Vector<Host>& value) { m_hosts = value; }

    /**
     * <p>A list of hosts and the details for each host, such as status, endpoint, and
     * provider type.</p>
     */
    inline void SetHosts(Aws::Vector<Host>&& value) { m_hosts = std::move(value); }

    /**
     * <p>A list of hosts and the details for each host, such as status, endpoint, and
     * provider type.</p>
     */
    inline ListHostsResult& WithHosts(const Aws::Vector<Host>& value) { SetHosts(value); return *this;}

    /**
     * <p>A list of hosts and the details for each host, such as status, endpoint, and
     * provider type.</p>
     */
    inline ListHostsResult& WithHosts(Aws::Vector<Host>&& value) { SetHosts(std::move(value)); return *this;}

    /**
     * <p>A list of hosts and the details for each host, such as status, endpoint, and
     * provider type.</p>
     */
    inline ListHostsResult& AddHosts(const Host& value) { m_hosts.push_back(value); return *this; }

    /**
     * <p>A list of hosts and the details for each host, such as status, endpoint, and
     * provider type.</p>
     */
    inline ListHostsResult& AddHosts(Host&& value) { m_hosts.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used in the next <code>ListHosts</code> call. To view all
     * items in the list, continue to call this operation with each subsequent token
     * until no more <code>nextToken</code> values are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used in the next <code>ListHosts</code> call. To view all
     * items in the list, continue to call this operation with each subsequent token
     * until no more <code>nextToken</code> values are returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used in the next <code>ListHosts</code> call. To view all
     * items in the list, continue to call this operation with each subsequent token
     * until no more <code>nextToken</code> values are returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used in the next <code>ListHosts</code> call. To view all
     * items in the list, continue to call this operation with each subsequent token
     * until no more <code>nextToken</code> values are returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used in the next <code>ListHosts</code> call. To view all
     * items in the list, continue to call this operation with each subsequent token
     * until no more <code>nextToken</code> values are returned.</p>
     */
    inline ListHostsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used in the next <code>ListHosts</code> call. To view all
     * items in the list, continue to call this operation with each subsequent token
     * until no more <code>nextToken</code> values are returned.</p>
     */
    inline ListHostsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used in the next <code>ListHosts</code> call. To view all
     * items in the list, continue to call this operation with each subsequent token
     * until no more <code>nextToken</code> values are returned.</p>
     */
    inline ListHostsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Host> m_hosts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
