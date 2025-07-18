/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_MAILMANAGER_API ListRelaysResult() = default;
    AWS_MAILMANAGER_API ListRelaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListRelaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of returned relays.</p>
     */
    inline const Aws::Vector<Relay>& GetRelays() const { return m_relays; }
    template<typename RelaysT = Aws::Vector<Relay>>
    void SetRelays(RelaysT&& value) { m_relaysHasBeenSet = true; m_relays = std::forward<RelaysT>(value); }
    template<typename RelaysT = Aws::Vector<Relay>>
    ListRelaysResult& WithRelays(RelaysT&& value) { SetRelays(std::forward<RelaysT>(value)); return *this;}
    template<typename RelaysT = Relay>
    ListRelaysResult& AddRelays(RelaysT&& value) { m_relaysHasBeenSet = true; m_relays.emplace_back(std::forward<RelaysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRelaysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRelaysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Relay> m_relays;
    bool m_relaysHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
