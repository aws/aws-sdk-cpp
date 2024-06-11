﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/VirtualInterfaceTestHistory.h>
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
namespace DirectConnect
{
namespace Model
{
  class ListVirtualInterfaceTestHistoryResult
  {
  public:
    AWS_DIRECTCONNECT_API ListVirtualInterfaceTestHistoryResult();
    AWS_DIRECTCONNECT_API ListVirtualInterfaceTestHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API ListVirtualInterfaceTestHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline const Aws::Vector<VirtualInterfaceTestHistory>& GetVirtualInterfaceTestHistory() const{ return m_virtualInterfaceTestHistory; }
    inline void SetVirtualInterfaceTestHistory(const Aws::Vector<VirtualInterfaceTestHistory>& value) { m_virtualInterfaceTestHistory = value; }
    inline void SetVirtualInterfaceTestHistory(Aws::Vector<VirtualInterfaceTestHistory>&& value) { m_virtualInterfaceTestHistory = std::move(value); }
    inline ListVirtualInterfaceTestHistoryResult& WithVirtualInterfaceTestHistory(const Aws::Vector<VirtualInterfaceTestHistory>& value) { SetVirtualInterfaceTestHistory(value); return *this;}
    inline ListVirtualInterfaceTestHistoryResult& WithVirtualInterfaceTestHistory(Aws::Vector<VirtualInterfaceTestHistory>&& value) { SetVirtualInterfaceTestHistory(std::move(value)); return *this;}
    inline ListVirtualInterfaceTestHistoryResult& AddVirtualInterfaceTestHistory(const VirtualInterfaceTestHistory& value) { m_virtualInterfaceTestHistory.push_back(value); return *this; }
    inline ListVirtualInterfaceTestHistoryResult& AddVirtualInterfaceTestHistory(VirtualInterfaceTestHistory&& value) { m_virtualInterfaceTestHistory.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListVirtualInterfaceTestHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVirtualInterfaceTestHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVirtualInterfaceTestHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVirtualInterfaceTestHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVirtualInterfaceTestHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVirtualInterfaceTestHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VirtualInterfaceTestHistory> m_virtualInterfaceTestHistory;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
