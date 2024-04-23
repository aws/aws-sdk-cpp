/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailManagedWordsType.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The managed word list that was configured for the guardrail. (This is a list
   * of words that are pre-defined and managed by Guardrails only.)</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailManagedWords">AWS
   * API Reference</a></p>
   */
  class GuardrailManagedWords
  {
  public:
    AWS_BEDROCK_API GuardrailManagedWords();
    AWS_BEDROCK_API GuardrailManagedWords(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailManagedWords& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ManagedWords$type The managed word type that was configured for the
     * guardrail. (For now, we only offer profanity word list)</p>
     */
    inline const GuardrailManagedWordsType& GetType() const{ return m_type; }

    /**
     * <p>ManagedWords$type The managed word type that was configured for the
     * guardrail. (For now, we only offer profanity word list)</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>ManagedWords$type The managed word type that was configured for the
     * guardrail. (For now, we only offer profanity word list)</p>
     */
    inline void SetType(const GuardrailManagedWordsType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>ManagedWords$type The managed word type that was configured for the
     * guardrail. (For now, we only offer profanity word list)</p>
     */
    inline void SetType(GuardrailManagedWordsType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>ManagedWords$type The managed word type that was configured for the
     * guardrail. (For now, we only offer profanity word list)</p>
     */
    inline GuardrailManagedWords& WithType(const GuardrailManagedWordsType& value) { SetType(value); return *this;}

    /**
     * <p>ManagedWords$type The managed word type that was configured for the
     * guardrail. (For now, we only offer profanity word list)</p>
     */
    inline GuardrailManagedWords& WithType(GuardrailManagedWordsType&& value) { SetType(std::move(value)); return *this;}

  private:

    GuardrailManagedWordsType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
