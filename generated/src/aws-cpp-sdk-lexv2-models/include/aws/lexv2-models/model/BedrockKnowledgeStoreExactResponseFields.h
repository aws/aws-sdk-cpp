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
   * <p>The exact response fields given by the Bedrock knowledge store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BedrockKnowledgeStoreExactResponseFields">AWS
   * API Reference</a></p>
   */
  class BedrockKnowledgeStoreExactResponseFields
  {
  public:
    AWS_LEXMODELSV2_API BedrockKnowledgeStoreExactResponseFields() = default;
    AWS_LEXMODELSV2_API BedrockKnowledgeStoreExactResponseFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BedrockKnowledgeStoreExactResponseFields& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The answer field used for an exact response from Bedrock Knowledge Store.</p>
     */
    inline const Aws::String& GetAnswerField() const { return m_answerField; }
    inline bool AnswerFieldHasBeenSet() const { return m_answerFieldHasBeenSet; }
    template<typename AnswerFieldT = Aws::String>
    void SetAnswerField(AnswerFieldT&& value) { m_answerFieldHasBeenSet = true; m_answerField = std::forward<AnswerFieldT>(value); }
    template<typename AnswerFieldT = Aws::String>
    BedrockKnowledgeStoreExactResponseFields& WithAnswerField(AnswerFieldT&& value) { SetAnswerField(std::forward<AnswerFieldT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_answerField;
    bool m_answerFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
