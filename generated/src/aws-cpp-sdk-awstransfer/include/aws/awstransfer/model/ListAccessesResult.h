﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedAccess.h>
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
namespace Transfer
{
namespace Model
{
  class ListAccessesResult
  {
  public:
    AWS_TRANSFER_API ListAccessesResult();
    AWS_TRANSFER_API ListAccessesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListAccessesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you can get additional results from the <code>ListAccesses</code> call,
     * a <code>NextToken</code> parameter is returned in the output. You can then pass
     * in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional accesses.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAccessesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccessesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccessesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A system-assigned unique identifier for a server that has users assigned to
     * it.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }
    inline void SetServerId(const char* value) { m_serverId.assign(value); }
    inline ListAccessesResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}
    inline ListAccessesResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}
    inline ListAccessesResult& WithServerId(const char* value) { SetServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the accesses and their properties for the <code>ServerId</code> value
     * that you specify.</p>
     */
    inline const Aws::Vector<ListedAccess>& GetAccesses() const{ return m_accesses; }
    inline void SetAccesses(const Aws::Vector<ListedAccess>& value) { m_accesses = value; }
    inline void SetAccesses(Aws::Vector<ListedAccess>&& value) { m_accesses = std::move(value); }
    inline ListAccessesResult& WithAccesses(const Aws::Vector<ListedAccess>& value) { SetAccesses(value); return *this;}
    inline ListAccessesResult& WithAccesses(Aws::Vector<ListedAccess>&& value) { SetAccesses(std::move(value)); return *this;}
    inline ListAccessesResult& AddAccesses(const ListedAccess& value) { m_accesses.push_back(value); return *this; }
    inline ListAccessesResult& AddAccesses(ListedAccess&& value) { m_accesses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccessesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccessesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccessesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::String m_serverId;

    Aws::Vector<ListedAccess> m_accesses;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
