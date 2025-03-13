/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>Provides the phrase that Amazon Lex V2 should look for in the user's input to
   * the bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RuntimeHintValue">AWS
   * API Reference</a></p>
   */
  class RuntimeHintValue
  {
  public:
    AWS_LEXRUNTIMEV2_API RuntimeHintValue() = default;
    AWS_LEXRUNTIMEV2_API RuntimeHintValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API RuntimeHintValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phrase that Amazon Lex V2 should look for in the user's input to the
     * bot.</p>
     */
    inline const Aws::String& GetPhrase() const { return m_phrase; }
    inline bool PhraseHasBeenSet() const { return m_phraseHasBeenSet; }
    template<typename PhraseT = Aws::String>
    void SetPhrase(PhraseT&& value) { m_phraseHasBeenSet = true; m_phrase = std::forward<PhraseT>(value); }
    template<typename PhraseT = Aws::String>
    RuntimeHintValue& WithPhrase(PhraseT&& value) { SetPhrase(std::forward<PhraseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phrase;
    bool m_phraseHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
