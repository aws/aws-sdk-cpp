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
    AWS_BEDROCKAGENT_API KendraKnowledgeBaseConfiguration();
    AWS_BEDROCKAGENT_API KendraKnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KendraKnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Kendra index.</p>
     */
    inline const Aws::String& GetKendraIndexArn() const{ return m_kendraIndexArn; }
    inline bool KendraIndexArnHasBeenSet() const { return m_kendraIndexArnHasBeenSet; }
    inline void SetKendraIndexArn(const Aws::String& value) { m_kendraIndexArnHasBeenSet = true; m_kendraIndexArn = value; }
    inline void SetKendraIndexArn(Aws::String&& value) { m_kendraIndexArnHasBeenSet = true; m_kendraIndexArn = std::move(value); }
    inline void SetKendraIndexArn(const char* value) { m_kendraIndexArnHasBeenSet = true; m_kendraIndexArn.assign(value); }
    inline KendraKnowledgeBaseConfiguration& WithKendraIndexArn(const Aws::String& value) { SetKendraIndexArn(value); return *this;}
    inline KendraKnowledgeBaseConfiguration& WithKendraIndexArn(Aws::String&& value) { SetKendraIndexArn(std::move(value)); return *this;}
    inline KendraKnowledgeBaseConfiguration& WithKendraIndexArn(const char* value) { SetKendraIndexArn(value); return *this;}
    ///@}
  private:

    Aws::String m_kendraIndexArn;
    bool m_kendraIndexArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
