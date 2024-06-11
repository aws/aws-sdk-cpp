﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{
  class ListIPSetsResult
  {
  public:
    AWS_GUARDDUTY_API ListIPSetsResult();
    AWS_GUARDDUTY_API ListIPSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListIPSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IDs of the IPSet resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpSetIds() const{ return m_ipSetIds; }
    inline void SetIpSetIds(const Aws::Vector<Aws::String>& value) { m_ipSetIds = value; }
    inline void SetIpSetIds(Aws::Vector<Aws::String>&& value) { m_ipSetIds = std::move(value); }
    inline ListIPSetsResult& WithIpSetIds(const Aws::Vector<Aws::String>& value) { SetIpSetIds(value); return *this;}
    inline ListIPSetsResult& WithIpSetIds(Aws::Vector<Aws::String>&& value) { SetIpSetIds(std::move(value)); return *this;}
    inline ListIPSetsResult& AddIpSetIds(const Aws::String& value) { m_ipSetIds.push_back(value); return *this; }
    inline ListIPSetsResult& AddIpSetIds(Aws::String&& value) { m_ipSetIds.push_back(std::move(value)); return *this; }
    inline ListIPSetsResult& AddIpSetIds(const char* value) { m_ipSetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIPSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIPSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIPSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIPSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIPSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIPSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ipSetIds;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
