/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/Usage.h>
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
   * <p>Provides details of the foundation model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Metadata">AWS
   * API Reference</a></p>
   */
  class Metadata
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Metadata() = default;
    AWS_BEDROCKAGENTRUNTIME_API Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details of the foundation model usage.</p>
     */
    inline const Usage& GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    template<typename UsageT = Usage>
    void SetUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage = std::forward<UsageT>(value); }
    template<typename UsageT = Usage>
    Metadata& WithUsage(UsageT&& value) { SetUsage(std::forward<UsageT>(value)); return *this;}
    ///@}
  private:

    Usage m_usage;
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
