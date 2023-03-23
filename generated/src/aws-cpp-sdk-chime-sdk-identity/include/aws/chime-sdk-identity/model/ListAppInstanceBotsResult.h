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
    AWS_CHIMESDKIDENTITY_API ListAppInstanceBotsResult();
    AWS_CHIMESDKIDENTITY_API ListAppInstanceBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstanceBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the AppInstance.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the AppInstance.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArn = value; }

    /**
     * <p>The ARN of the AppInstance.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the AppInstance.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the AppInstance.</p>
     */
    inline ListAppInstanceBotsResult& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the AppInstance.</p>
     */
    inline ListAppInstanceBotsResult& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AppInstance.</p>
     */
    inline ListAppInstanceBotsResult& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The information for each requested <code>AppInstanceBot</code>.</p>
     */
    inline const Aws::Vector<AppInstanceBotSummary>& GetAppInstanceBots() const{ return m_appInstanceBots; }

    /**
     * <p>The information for each requested <code>AppInstanceBot</code>.</p>
     */
    inline void SetAppInstanceBots(const Aws::Vector<AppInstanceBotSummary>& value) { m_appInstanceBots = value; }

    /**
     * <p>The information for each requested <code>AppInstanceBot</code>.</p>
     */
    inline void SetAppInstanceBots(Aws::Vector<AppInstanceBotSummary>&& value) { m_appInstanceBots = std::move(value); }

    /**
     * <p>The information for each requested <code>AppInstanceBot</code>.</p>
     */
    inline ListAppInstanceBotsResult& WithAppInstanceBots(const Aws::Vector<AppInstanceBotSummary>& value) { SetAppInstanceBots(value); return *this;}

    /**
     * <p>The information for each requested <code>AppInstanceBot</code>.</p>
     */
    inline ListAppInstanceBotsResult& WithAppInstanceBots(Aws::Vector<AppInstanceBotSummary>&& value) { SetAppInstanceBots(std::move(value)); return *this;}

    /**
     * <p>The information for each requested <code>AppInstanceBot</code>.</p>
     */
    inline ListAppInstanceBotsResult& AddAppInstanceBots(const AppInstanceBotSummary& value) { m_appInstanceBots.push_back(value); return *this; }

    /**
     * <p>The information for each requested <code>AppInstanceBot</code>.</p>
     */
    inline ListAppInstanceBotsResult& AddAppInstanceBots(AppInstanceBotSummary&& value) { m_appInstanceBots.push_back(std::move(value)); return *this; }


    /**
     * <p>The token passed by previous API calls until all requested bots are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested bots are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested bots are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested bots are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested bots are
     * returned.</p>
     */
    inline ListAppInstanceBotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested bots are
     * returned.</p>
     */
    inline ListAppInstanceBotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested bots are
     * returned.</p>
     */
    inline ListAppInstanceBotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAppInstanceBotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAppInstanceBotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAppInstanceBotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_appInstanceArn;

    Aws::Vector<AppInstanceBotSummary> m_appInstanceBots;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
