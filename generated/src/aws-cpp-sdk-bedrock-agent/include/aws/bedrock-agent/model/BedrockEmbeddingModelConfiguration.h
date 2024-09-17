/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>

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
   * <p>The vector configuration details for the Bedrock embeddings
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/BedrockEmbeddingModelConfiguration">AWS
   * API Reference</a></p>
   */
  class BedrockEmbeddingModelConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API BedrockEmbeddingModelConfiguration();
    AWS_BEDROCKAGENT_API BedrockEmbeddingModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API BedrockEmbeddingModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimensions details for the vector configuration used on the Bedrock
     * embeddings model.</p>
     */
    inline int GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(int value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline BedrockEmbeddingModelConfiguration& WithDimensions(int value) { SetDimensions(value); return *this;}
    ///@}
  private:

    int m_dimensions;
    bool m_dimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
