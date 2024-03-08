/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/Attribution.h>
#include <aws/core/utils/Array.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains a part of an agent response and citations for it.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PayloadPart">AWS
   * API Reference</a></p>
   */
  class PayloadPart
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PayloadPart();
    AWS_BEDROCKAGENTRUNTIME_API PayloadPart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PayloadPart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains citations for a part of an agent response.</p>
     */
    inline const Attribution& GetAttribution() const{ return m_attribution; }

    /**
     * <p>Contains citations for a part of an agent response.</p>
     */
    inline bool AttributionHasBeenSet() const { return m_attributionHasBeenSet; }

    /**
     * <p>Contains citations for a part of an agent response.</p>
     */
    inline void SetAttribution(const Attribution& value) { m_attributionHasBeenSet = true; m_attribution = value; }

    /**
     * <p>Contains citations for a part of an agent response.</p>
     */
    inline void SetAttribution(Attribution&& value) { m_attributionHasBeenSet = true; m_attribution = std::move(value); }

    /**
     * <p>Contains citations for a part of an agent response.</p>
     */
    inline PayloadPart& WithAttribution(const Attribution& value) { SetAttribution(value); return *this;}

    /**
     * <p>Contains citations for a part of an agent response.</p>
     */
    inline PayloadPart& WithAttribution(Attribution&& value) { SetAttribution(std::move(value)); return *this;}


    /**
     * <p>A part of the agent response in bytes.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBytes() const{ return m_bytes; }

    /**
     * <p>A part of the agent response in bytes.</p>
     */
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }

    /**
     * <p>A part of the agent response in bytes.</p>
     */
    inline void SetBytes(const Aws::Utils::CryptoBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>A part of the agent response in bytes.</p>
     */
    inline void SetBytes(Aws::Utils::CryptoBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }

    /**
     * <p>A part of the agent response in bytes.</p>
     */
    inline PayloadPart& WithBytes(const Aws::Utils::CryptoBuffer& value) { SetBytes(value); return *this;}

    /**
     * <p>A part of the agent response in bytes.</p>
     */
    inline PayloadPart& WithBytes(Aws::Utils::CryptoBuffer&& value) { SetBytes(std::move(value)); return *this;}

  private:

    Attribution m_attribution;
    bool m_attributionHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_bytes;
    bool m_bytesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
