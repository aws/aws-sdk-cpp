﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/bedrock-agent-runtime/model/Attribution.h>
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
   * <p>Base 64 endoded byte response</p><p><h3>See Also:</h3>   <a
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


    
    inline const Aws::Utils::CryptoBuffer& GetBytes() const{ return m_bytes; }

    
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }

    
    inline void SetBytes(const Aws::Utils::CryptoBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    
    inline void SetBytes(Aws::Utils::CryptoBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }

    
    inline PayloadPart& WithBytes(const Aws::Utils::CryptoBuffer& value) { SetBytes(value); return *this;}

    
    inline PayloadPart& WithBytes(Aws::Utils::CryptoBuffer&& value) { SetBytes(std::move(value)); return *this;}


    
    inline const Attribution& GetAttribution() const{ return m_attribution; }

    
    inline bool AttributionHasBeenSet() const { return m_attributionHasBeenSet; }

    
    inline void SetAttribution(const Attribution& value) { m_attributionHasBeenSet = true; m_attribution = value; }

    
    inline void SetAttribution(Attribution&& value) { m_attributionHasBeenSet = true; m_attribution = std::move(value); }

    
    inline PayloadPart& WithAttribution(const Attribution& value) { SetAttribution(value); return *this;}

    
    inline PayloadPart& WithAttribution(Attribution&& value) { SetAttribution(std::move(value)); return *this;}

  private:

    Aws::Utils::CryptoBuffer m_bytes;
    bool m_bytesHasBeenSet = false;

    Attribution m_attribution;
    bool m_attributionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
