/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/ChimeWebhookConfiguration.h>
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
namespace chatbot
{
namespace Model
{
  class UpdateChimeWebhookConfigurationResult
  {
  public:
    AWS_CHATBOT_API UpdateChimeWebhookConfigurationResult();
    AWS_CHATBOT_API UpdateChimeWebhookConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API UpdateChimeWebhookConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Chime webhook configuration.
     */
    inline const ChimeWebhookConfiguration& GetWebhookConfiguration() const{ return m_webhookConfiguration; }

    /**
     * Chime webhook configuration.
     */
    inline void SetWebhookConfiguration(const ChimeWebhookConfiguration& value) { m_webhookConfiguration = value; }

    /**
     * Chime webhook configuration.
     */
    inline void SetWebhookConfiguration(ChimeWebhookConfiguration&& value) { m_webhookConfiguration = std::move(value); }

    /**
     * Chime webhook configuration.
     */
    inline UpdateChimeWebhookConfigurationResult& WithWebhookConfiguration(const ChimeWebhookConfiguration& value) { SetWebhookConfiguration(value); return *this;}

    /**
     * Chime webhook configuration.
     */
    inline UpdateChimeWebhookConfigurationResult& WithWebhookConfiguration(ChimeWebhookConfiguration&& value) { SetWebhookConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateChimeWebhookConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateChimeWebhookConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateChimeWebhookConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChimeWebhookConfiguration m_webhookConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
