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
    AWS_BEDROCKAGENTRUNTIME_API Metadata();
    AWS_BEDROCKAGENTRUNTIME_API Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details of the foundation model usage.</p>
     */
    inline const Usage& GetUsage() const{ return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(const Usage& value) { m_usageHasBeenSet = true; m_usage = value; }
    inline void SetUsage(Usage&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }
    inline Metadata& WithUsage(const Usage& value) { SetUsage(value); return *this;}
    inline Metadata& WithUsage(Usage&& value) { SetUsage(std::move(value)); return *this;}
    ///@}
  private:

    Usage m_usage;
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
