/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class CreateFlowVersionRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API CreateFlowVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlowVersion"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the flow that you want to create a version of.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const { return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    template<typename FlowIdentifierT = Aws::String>
    void SetFlowIdentifier(FlowIdentifierT&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::forward<FlowIdentifierT>(value); }
    template<typename FlowIdentifierT = Aws::String>
    CreateFlowVersionRequest& WithFlowIdentifier(FlowIdentifierT&& value) { SetFlowIdentifier(std::forward<FlowIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the version of the flow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFlowVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateFlowVersionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
