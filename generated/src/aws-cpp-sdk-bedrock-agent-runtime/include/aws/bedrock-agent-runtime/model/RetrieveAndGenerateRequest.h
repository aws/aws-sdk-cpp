﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateInput.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateConfiguration.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateSessionConfiguration.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class RetrieveAndGenerateRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetrieveAndGenerate"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    
    inline RetrieveAndGenerateRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    
    inline RetrieveAndGenerateRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    
    inline RetrieveAndGenerateRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    
    inline const RetrieveAndGenerateInput& GetInput() const{ return m_input; }

    
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    
    inline void SetInput(const RetrieveAndGenerateInput& value) { m_inputHasBeenSet = true; m_input = value; }

    
    inline void SetInput(RetrieveAndGenerateInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    
    inline RetrieveAndGenerateRequest& WithInput(const RetrieveAndGenerateInput& value) { SetInput(value); return *this;}

    
    inline RetrieveAndGenerateRequest& WithInput(RetrieveAndGenerateInput&& value) { SetInput(std::move(value)); return *this;}


    
    inline const RetrieveAndGenerateConfiguration& GetRetrieveAndGenerateConfiguration() const{ return m_retrieveAndGenerateConfiguration; }

    
    inline bool RetrieveAndGenerateConfigurationHasBeenSet() const { return m_retrieveAndGenerateConfigurationHasBeenSet; }

    
    inline void SetRetrieveAndGenerateConfiguration(const RetrieveAndGenerateConfiguration& value) { m_retrieveAndGenerateConfigurationHasBeenSet = true; m_retrieveAndGenerateConfiguration = value; }

    
    inline void SetRetrieveAndGenerateConfiguration(RetrieveAndGenerateConfiguration&& value) { m_retrieveAndGenerateConfigurationHasBeenSet = true; m_retrieveAndGenerateConfiguration = std::move(value); }

    
    inline RetrieveAndGenerateRequest& WithRetrieveAndGenerateConfiguration(const RetrieveAndGenerateConfiguration& value) { SetRetrieveAndGenerateConfiguration(value); return *this;}

    
    inline RetrieveAndGenerateRequest& WithRetrieveAndGenerateConfiguration(RetrieveAndGenerateConfiguration&& value) { SetRetrieveAndGenerateConfiguration(std::move(value)); return *this;}


    
    inline const RetrieveAndGenerateSessionConfiguration& GetSessionConfiguration() const{ return m_sessionConfiguration; }

    
    inline bool SessionConfigurationHasBeenSet() const { return m_sessionConfigurationHasBeenSet; }

    
    inline void SetSessionConfiguration(const RetrieveAndGenerateSessionConfiguration& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = value; }

    
    inline void SetSessionConfiguration(RetrieveAndGenerateSessionConfiguration&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = std::move(value); }

    
    inline RetrieveAndGenerateRequest& WithSessionConfiguration(const RetrieveAndGenerateSessionConfiguration& value) { SetSessionConfiguration(value); return *this;}

    
    inline RetrieveAndGenerateRequest& WithSessionConfiguration(RetrieveAndGenerateSessionConfiguration&& value) { SetSessionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    RetrieveAndGenerateInput m_input;
    bool m_inputHasBeenSet = false;

    RetrieveAndGenerateConfiguration m_retrieveAndGenerateConfiguration;
    bool m_retrieveAndGenerateConfigurationHasBeenSet = false;

    RetrieveAndGenerateSessionConfiguration m_sessionConfiguration;
    bool m_sessionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
