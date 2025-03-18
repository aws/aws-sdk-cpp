/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Settings for an Amazon Kendra knowledge base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KendraKnowledgeBaseConfiguration">AWS
   * API Reference</a></p>
   */
  class KendraKnowledgeBaseConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API KendraKnowledgeBaseConfiguration() = default;
    AWS_BEDROCKAGENT_API KendraKnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KendraKnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Kendra index.</p>
     */
    inline const Aws::String& GetKendraIndexArn() const { return m_kendraIndexArn; }
    inline bool KendraIndexArnHasBeenSet() const { return m_kendraIndexArnHasBeenSet; }
    template<typename KendraIndexArnT = Aws::String>
    void SetKendraIndexArn(KendraIndexArnT&& value) { m_kendraIndexArnHasBeenSet = true; m_kendraIndexArn = std::forward<KendraIndexArnT>(value); }
    template<typename KendraIndexArnT = Aws::String>
    KendraKnowledgeBaseConfiguration& WithKendraIndexArn(KendraIndexArnT&& value) { SetKendraIndexArn(std::forward<KendraIndexArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kendraIndexArn;
    bool m_kendraIndexArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
