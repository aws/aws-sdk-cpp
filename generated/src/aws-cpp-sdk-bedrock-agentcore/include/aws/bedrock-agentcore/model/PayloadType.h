/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Conversational.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Contains the payload content for an event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/PayloadType">AWS
   * API Reference</a></p>
   */
  class PayloadType
  {
  public:
    AWS_BEDROCKAGENTCORE_API PayloadType() = default;
    AWS_BEDROCKAGENTCORE_API PayloadType(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API PayloadType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conversational content of the payload.</p>
     */
    inline const Conversational& GetConversational() const { return m_conversational; }
    inline bool ConversationalHasBeenSet() const { return m_conversationalHasBeenSet; }
    template<typename ConversationalT = Conversational>
    void SetConversational(ConversationalT&& value) { m_conversationalHasBeenSet = true; m_conversational = std::forward<ConversationalT>(value); }
    template<typename ConversationalT = Conversational>
    PayloadType& WithConversational(ConversationalT&& value) { SetConversational(std::forward<ConversationalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The binary content of the payload.</p>
     */
    inline Aws::Utils::DocumentView GetBlob() const { return m_blob; }
    inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
    template<typename BlobT = Aws::Utils::Document>
    void SetBlob(BlobT&& value) { m_blobHasBeenSet = true; m_blob = std::forward<BlobT>(value); }
    template<typename BlobT = Aws::Utils::Document>
    PayloadType& WithBlob(BlobT&& value) { SetBlob(std::forward<BlobT>(value)); return *this;}
    ///@}
  private:

    Conversational m_conversational;
    bool m_conversationalHasBeenSet = false;

    Aws::Utils::Document m_blob;
    bool m_blobHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
