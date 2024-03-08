/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains details about the configuration of a Amazon Bedrock knowledge
   * base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BedrockKnowledgeStoreConfiguration">AWS
   * API Reference</a></p>
   */
  class BedrockKnowledgeStoreConfiguration
  {
  public:
    AWS_LEXMODELSV2_API BedrockKnowledgeStoreConfiguration();
    AWS_LEXMODELSV2_API BedrockKnowledgeStoreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BedrockKnowledgeStoreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the knowledge base used.</p>
     */
    inline const Aws::String& GetBedrockKnowledgeBaseArn() const{ return m_bedrockKnowledgeBaseArn; }

    /**
     * <p>The ARN of the knowledge base used.</p>
     */
    inline bool BedrockKnowledgeBaseArnHasBeenSet() const { return m_bedrockKnowledgeBaseArnHasBeenSet; }

    /**
     * <p>The ARN of the knowledge base used.</p>
     */
    inline void SetBedrockKnowledgeBaseArn(const Aws::String& value) { m_bedrockKnowledgeBaseArnHasBeenSet = true; m_bedrockKnowledgeBaseArn = value; }

    /**
     * <p>The ARN of the knowledge base used.</p>
     */
    inline void SetBedrockKnowledgeBaseArn(Aws::String&& value) { m_bedrockKnowledgeBaseArnHasBeenSet = true; m_bedrockKnowledgeBaseArn = std::move(value); }

    /**
     * <p>The ARN of the knowledge base used.</p>
     */
    inline void SetBedrockKnowledgeBaseArn(const char* value) { m_bedrockKnowledgeBaseArnHasBeenSet = true; m_bedrockKnowledgeBaseArn.assign(value); }

    /**
     * <p>The ARN of the knowledge base used.</p>
     */
    inline BedrockKnowledgeStoreConfiguration& WithBedrockKnowledgeBaseArn(const Aws::String& value) { SetBedrockKnowledgeBaseArn(value); return *this;}

    /**
     * <p>The ARN of the knowledge base used.</p>
     */
    inline BedrockKnowledgeStoreConfiguration& WithBedrockKnowledgeBaseArn(Aws::String&& value) { SetBedrockKnowledgeBaseArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the knowledge base used.</p>
     */
    inline BedrockKnowledgeStoreConfiguration& WithBedrockKnowledgeBaseArn(const char* value) { SetBedrockKnowledgeBaseArn(value); return *this;}

  private:

    Aws::String m_bedrockKnowledgeBaseArn;
    bool m_bedrockKnowledgeBaseArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
