﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class DeleteFlowVersionRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API DeleteFlowVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFlowVersion"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the flow whose version that you want to delete</p>
     */
    inline const Aws::String& GetFlowIdentifier() const { return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    template<typename FlowIdentifierT = Aws::String>
    void SetFlowIdentifier(FlowIdentifierT&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::forward<FlowIdentifierT>(value); }
    template<typename FlowIdentifierT = Aws::String>
    DeleteFlowVersionRequest& WithFlowIdentifier(FlowIdentifierT&& value) { SetFlowIdentifier(std::forward<FlowIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the flow that you want to delete.</p>
     */
    inline const Aws::String& GetFlowVersion() const { return m_flowVersion; }
    inline bool FlowVersionHasBeenSet() const { return m_flowVersionHasBeenSet; }
    template<typename FlowVersionT = Aws::String>
    void SetFlowVersion(FlowVersionT&& value) { m_flowVersionHasBeenSet = true; m_flowVersion = std::forward<FlowVersionT>(value); }
    template<typename FlowVersionT = Aws::String>
    DeleteFlowVersionRequest& WithFlowVersion(FlowVersionT&& value) { SetFlowVersion(std::forward<FlowVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, this value is <code>false</code> and deletion is stopped if the
     * resource is in use. If you set it to <code>true</code>, the resource will be
     * deleted even if the resource is in use.</p>
     */
    inline bool GetSkipResourceInUseCheck() const { return m_skipResourceInUseCheck; }
    inline bool SkipResourceInUseCheckHasBeenSet() const { return m_skipResourceInUseCheckHasBeenSet; }
    inline void SetSkipResourceInUseCheck(bool value) { m_skipResourceInUseCheckHasBeenSet = true; m_skipResourceInUseCheck = value; }
    inline DeleteFlowVersionRequest& WithSkipResourceInUseCheck(bool value) { SetSkipResourceInUseCheck(value); return *this;}
    ///@}
  private:

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::String m_flowVersion;
    bool m_flowVersionHasBeenSet = false;

    bool m_skipResourceInUseCheck{false};
    bool m_skipResourceInUseCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
