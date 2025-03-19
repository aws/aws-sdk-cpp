/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/EnrichmentStrategyMethod.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>The strategy used for performing context enrichment.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/EnrichmentStrategyConfiguration">AWS
   * API Reference</a></p>
   */
  class EnrichmentStrategyConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API EnrichmentStrategyConfiguration() = default;
    AWS_BEDROCKAGENT_API EnrichmentStrategyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API EnrichmentStrategyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method used for the context enrichment strategy.</p>
     */
    inline EnrichmentStrategyMethod GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    inline void SetMethod(EnrichmentStrategyMethod value) { m_methodHasBeenSet = true; m_method = value; }
    inline EnrichmentStrategyConfiguration& WithMethod(EnrichmentStrategyMethod value) { SetMethod(value); return *this;}
    ///@}
  private:

    EnrichmentStrategyMethod m_method{EnrichmentStrategyMethod::NOT_SET};
    bool m_methodHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
