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
   * <p>An object containing the intent that the bot mapped the utterance
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsUtteranceAttributeResult">AWS
   * API Reference</a></p>
   */
  class AnalyticsUtteranceAttributeResult
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsUtteranceAttributeResult() = default;
    AWS_LEXMODELSV2_API AnalyticsUtteranceAttributeResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsUtteranceAttributeResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The intent that the bot mapped the utterance to.</p>
     */
    inline const Aws::String& GetLastUsedIntent() const { return m_lastUsedIntent; }
    inline bool LastUsedIntentHasBeenSet() const { return m_lastUsedIntentHasBeenSet; }
    template<typename LastUsedIntentT = Aws::String>
    void SetLastUsedIntent(LastUsedIntentT&& value) { m_lastUsedIntentHasBeenSet = true; m_lastUsedIntent = std::forward<LastUsedIntentT>(value); }
    template<typename LastUsedIntentT = Aws::String>
    AnalyticsUtteranceAttributeResult& WithLastUsedIntent(LastUsedIntentT&& value) { SetLastUsedIntent(std::forward<LastUsedIntentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lastUsedIntent;
    bool m_lastUsedIntentHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
