/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/LogSubscription.h>
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
  class ListLogSubscriptionsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API ListLogSubscriptionsResult() = default;
    AWS_DIRECTORYSERVICE_API ListLogSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API ListLogSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of active <a>LogSubscription</a> objects for calling the Amazon Web
     * Services account.</p>
     */
    inline const Aws::Vector<LogSubscription>& GetLogSubscriptions() const { return m_logSubscriptions; }
    template<typename LogSubscriptionsT = Aws::Vector<LogSubscription>>
    void SetLogSubscriptions(LogSubscriptionsT&& value) { m_logSubscriptionsHasBeenSet = true; m_logSubscriptions = std::forward<LogSubscriptionsT>(value); }
    template<typename LogSubscriptionsT = Aws::Vector<LogSubscription>>
    ListLogSubscriptionsResult& WithLogSubscriptions(LogSubscriptionsT&& value) { SetLogSubscriptions(std::forward<LogSubscriptionsT>(value)); return *this;}
    template<typename LogSubscriptionsT = LogSubscription>
    ListLogSubscriptionsResult& AddLogSubscriptions(LogSubscriptionsT&& value) { m_logSubscriptionsHasBeenSet = true; m_logSubscriptions.emplace_back(std::forward<LogSubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLogSubscriptionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLogSubscriptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogSubscription> m_logSubscriptions;
    bool m_logSubscriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
