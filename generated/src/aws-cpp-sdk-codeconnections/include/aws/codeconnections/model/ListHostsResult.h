﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/Host.h>
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
namespace CodeConnections
{
namespace Model
{
  class ListHostsResult
  {
  public:
    AWS_CODECONNECTIONS_API ListHostsResult();
    AWS_CODECONNECTIONS_API ListHostsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API ListHostsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of hosts and the details for each host, such as status, endpoint, and
     * provider type.</p>
     */
    inline const Aws::Vector<Host>& GetHosts() const{ return m_hosts; }
    inline void SetHosts(const Aws::Vector<Host>& value) { m_hosts = value; }
    inline void SetHosts(Aws::Vector<Host>&& value) { m_hosts = std::move(value); }
    inline ListHostsResult& WithHosts(const Aws::Vector<Host>& value) { SetHosts(value); return *this;}
    inline ListHostsResult& WithHosts(Aws::Vector<Host>&& value) { SetHosts(std::move(value)); return *this;}
    inline ListHostsResult& AddHosts(const Host& value) { m_hosts.push_back(value); return *this; }
    inline ListHostsResult& AddHosts(Host&& value) { m_hosts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used in the next <code>ListHosts</code> call. To view all
     * items in the list, continue to call this operation with each subsequent token
     * until no more <code>nextToken</code> values are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHostsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHostsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHostsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListHostsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListHostsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListHostsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Host> m_hosts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
