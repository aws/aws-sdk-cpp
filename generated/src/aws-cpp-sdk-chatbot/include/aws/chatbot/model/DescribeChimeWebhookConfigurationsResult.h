/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/ChimeWebhookConfiguration.h>
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
namespace chatbot
{
namespace Model
{
  class DescribeChimeWebhookConfigurationsResult
  {
  public:
    AWS_CHATBOT_API DescribeChimeWebhookConfigurationsResult();
    AWS_CHATBOT_API DescribeChimeWebhookConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API DescribeChimeWebhookConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeChimeWebhookConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeChimeWebhookConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeChimeWebhookConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * A list of Chime webhooks associated with the account.
     */
    inline const Aws::Vector<ChimeWebhookConfiguration>& GetWebhookConfigurations() const{ return m_webhookConfigurations; }

    /**
     * A list of Chime webhooks associated with the account.
     */
    inline void SetWebhookConfigurations(const Aws::Vector<ChimeWebhookConfiguration>& value) { m_webhookConfigurations = value; }

    /**
     * A list of Chime webhooks associated with the account.
     */
    inline void SetWebhookConfigurations(Aws::Vector<ChimeWebhookConfiguration>&& value) { m_webhookConfigurations = std::move(value); }

    /**
     * A list of Chime webhooks associated with the account.
     */
    inline DescribeChimeWebhookConfigurationsResult& WithWebhookConfigurations(const Aws::Vector<ChimeWebhookConfiguration>& value) { SetWebhookConfigurations(value); return *this;}

    /**
     * A list of Chime webhooks associated with the account.
     */
    inline DescribeChimeWebhookConfigurationsResult& WithWebhookConfigurations(Aws::Vector<ChimeWebhookConfiguration>&& value) { SetWebhookConfigurations(std::move(value)); return *this;}

    /**
     * A list of Chime webhooks associated with the account.
     */
    inline DescribeChimeWebhookConfigurationsResult& AddWebhookConfigurations(const ChimeWebhookConfiguration& value) { m_webhookConfigurations.push_back(value); return *this; }

    /**
     * A list of Chime webhooks associated with the account.
     */
    inline DescribeChimeWebhookConfigurationsResult& AddWebhookConfigurations(ChimeWebhookConfiguration&& value) { m_webhookConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeChimeWebhookConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeChimeWebhookConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeChimeWebhookConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ChimeWebhookConfiguration> m_webhookConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
