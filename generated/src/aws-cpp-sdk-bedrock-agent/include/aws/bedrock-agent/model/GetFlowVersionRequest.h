/**
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
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class GetFlowVersionRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API GetFlowVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFlowVersion"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the flow for which to get information.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const{ return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    inline void SetFlowIdentifier(const Aws::String& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = value; }
    inline void SetFlowIdentifier(Aws::String&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::move(value); }
    inline void SetFlowIdentifier(const char* value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier.assign(value); }
    inline GetFlowVersionRequest& WithFlowIdentifier(const Aws::String& value) { SetFlowIdentifier(value); return *this;}
    inline GetFlowVersionRequest& WithFlowIdentifier(Aws::String&& value) { SetFlowIdentifier(std::move(value)); return *this;}
    inline GetFlowVersionRequest& WithFlowIdentifier(const char* value) { SetFlowIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the flow for which to get information.</p>
     */
    inline const Aws::String& GetFlowVersion() const{ return m_flowVersion; }
    inline bool FlowVersionHasBeenSet() const { return m_flowVersionHasBeenSet; }
    inline void SetFlowVersion(const Aws::String& value) { m_flowVersionHasBeenSet = true; m_flowVersion = value; }
    inline void SetFlowVersion(Aws::String&& value) { m_flowVersionHasBeenSet = true; m_flowVersion = std::move(value); }
    inline void SetFlowVersion(const char* value) { m_flowVersionHasBeenSet = true; m_flowVersion.assign(value); }
    inline GetFlowVersionRequest& WithFlowVersion(const Aws::String& value) { SetFlowVersion(value); return *this;}
    inline GetFlowVersionRequest& WithFlowVersion(Aws::String&& value) { SetFlowVersion(std::move(value)); return *this;}
    inline GetFlowVersionRequest& WithFlowVersion(const char* value) { SetFlowVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::String m_flowVersion;
    bool m_flowVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
