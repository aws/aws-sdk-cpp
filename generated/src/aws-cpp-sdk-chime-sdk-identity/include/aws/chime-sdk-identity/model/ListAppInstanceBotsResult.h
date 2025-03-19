/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-identity/model/AppInstanceBotSummary.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class ListAppInstanceBotsResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API ListAppInstanceBotsResult() = default;
    AWS_CHIMESDKIDENTITY_API ListAppInstanceBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstanceBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the AppInstance.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const { return m_appInstanceArn; }
    template<typename AppInstanceArnT = Aws::String>
    void SetAppInstanceArn(AppInstanceArnT&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::forward<AppInstanceArnT>(value); }
    template<typename AppInstanceArnT = Aws::String>
    ListAppInstanceBotsResult& WithAppInstanceArn(AppInstanceArnT&& value) { SetAppInstanceArn(std::forward<AppInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information for each requested <code>AppInstanceBot</code>.</p>
     */
    inline const Aws::Vector<AppInstanceBotSummary>& GetAppInstanceBots() const { return m_appInstanceBots; }
    template<typename AppInstanceBotsT = Aws::Vector<AppInstanceBotSummary>>
    void SetAppInstanceBots(AppInstanceBotsT&& value) { m_appInstanceBotsHasBeenSet = true; m_appInstanceBots = std::forward<AppInstanceBotsT>(value); }
    template<typename AppInstanceBotsT = Aws::Vector<AppInstanceBotSummary>>
    ListAppInstanceBotsResult& WithAppInstanceBots(AppInstanceBotsT&& value) { SetAppInstanceBots(std::forward<AppInstanceBotsT>(value)); return *this;}
    template<typename AppInstanceBotsT = AppInstanceBotSummary>
    ListAppInstanceBotsResult& AddAppInstanceBots(AppInstanceBotsT&& value) { m_appInstanceBotsHasBeenSet = true; m_appInstanceBots.emplace_back(std::forward<AppInstanceBotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested bots are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppInstanceBotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppInstanceBotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::Vector<AppInstanceBotSummary> m_appInstanceBots;
    bool m_appInstanceBotsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
