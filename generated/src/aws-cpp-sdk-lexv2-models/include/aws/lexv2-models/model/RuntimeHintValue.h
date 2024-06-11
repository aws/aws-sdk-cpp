﻿/**
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
   * <p>Provides the phrase that Amazon Lex should look for in the user's input to
   * the bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/RuntimeHintValue">AWS
   * API Reference</a></p>
   */
  class RuntimeHintValue
  {
  public:
    AWS_LEXMODELSV2_API RuntimeHintValue();
    AWS_LEXMODELSV2_API RuntimeHintValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API RuntimeHintValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phrase that Amazon Lex should look for in the user's input to the
     * bot.</p>
     */
    inline const Aws::String& GetPhrase() const{ return m_phrase; }
    inline bool PhraseHasBeenSet() const { return m_phraseHasBeenSet; }
    inline void SetPhrase(const Aws::String& value) { m_phraseHasBeenSet = true; m_phrase = value; }
    inline void SetPhrase(Aws::String&& value) { m_phraseHasBeenSet = true; m_phrase = std::move(value); }
    inline void SetPhrase(const char* value) { m_phraseHasBeenSet = true; m_phrase.assign(value); }
    inline RuntimeHintValue& WithPhrase(const Aws::String& value) { SetPhrase(value); return *this;}
    inline RuntimeHintValue& WithPhrase(Aws::String&& value) { SetPhrase(std::move(value)); return *this;}
    inline RuntimeHintValue& WithPhrase(const char* value) { SetPhrase(value); return *this;}
    ///@}
  private:

    Aws::String m_phrase;
    bool m_phraseHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
