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
   * <p>The version of a bot used for a bot locale.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotVersionLocaleDetails">AWS
   * API Reference</a></p>
   */
  class BotVersionLocaleDetails
  {
  public:
    AWS_LEXMODELSV2_API BotVersionLocaleDetails() = default;
    AWS_LEXMODELSV2_API BotVersionLocaleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotVersionLocaleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of a bot used for a bot locale.</p>
     */
    inline const Aws::String& GetSourceBotVersion() const { return m_sourceBotVersion; }
    inline bool SourceBotVersionHasBeenSet() const { return m_sourceBotVersionHasBeenSet; }
    template<typename SourceBotVersionT = Aws::String>
    void SetSourceBotVersion(SourceBotVersionT&& value) { m_sourceBotVersionHasBeenSet = true; m_sourceBotVersion = std::forward<SourceBotVersionT>(value); }
    template<typename SourceBotVersionT = Aws::String>
    BotVersionLocaleDetails& WithSourceBotVersion(SourceBotVersionT&& value) { SetSourceBotVersion(std::forward<SourceBotVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceBotVersion;
    bool m_sourceBotVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
