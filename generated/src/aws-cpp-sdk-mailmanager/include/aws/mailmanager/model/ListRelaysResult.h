/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/Relay.h>
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
namespace MailManager
{
namespace Model
{
  class ListRelaysResult
  {
  public:
    AWS_MAILMANAGER_API ListRelaysResult();
    AWS_MAILMANAGER_API ListRelaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListRelaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRelaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRelaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRelaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of returned relays.</p>
     */
    inline const Aws::Vector<Relay>& GetRelays() const{ return m_relays; }
    inline void SetRelays(const Aws::Vector<Relay>& value) { m_relays = value; }
    inline void SetRelays(Aws::Vector<Relay>&& value) { m_relays = std::move(value); }
    inline ListRelaysResult& WithRelays(const Aws::Vector<Relay>& value) { SetRelays(value); return *this;}
    inline ListRelaysResult& WithRelays(Aws::Vector<Relay>&& value) { SetRelays(std::move(value)); return *this;}
    inline ListRelaysResult& AddRelays(const Relay& value) { m_relays.push_back(value); return *this; }
    inline ListRelaysResult& AddRelays(Relay&& value) { m_relays.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRelaysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRelaysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRelaysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Relay> m_relays;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
