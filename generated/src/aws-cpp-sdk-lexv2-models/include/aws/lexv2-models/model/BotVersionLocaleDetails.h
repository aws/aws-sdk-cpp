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
    AWS_LEXMODELSV2_API BotVersionLocaleDetails();
    AWS_LEXMODELSV2_API BotVersionLocaleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotVersionLocaleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of a bot used for a bot locale.</p>
     */
    inline const Aws::String& GetSourceBotVersion() const{ return m_sourceBotVersion; }

    /**
     * <p>The version of a bot used for a bot locale.</p>
     */
    inline bool SourceBotVersionHasBeenSet() const { return m_sourceBotVersionHasBeenSet; }

    /**
     * <p>The version of a bot used for a bot locale.</p>
     */
    inline void SetSourceBotVersion(const Aws::String& value) { m_sourceBotVersionHasBeenSet = true; m_sourceBotVersion = value; }

    /**
     * <p>The version of a bot used for a bot locale.</p>
     */
    inline void SetSourceBotVersion(Aws::String&& value) { m_sourceBotVersionHasBeenSet = true; m_sourceBotVersion = std::move(value); }

    /**
     * <p>The version of a bot used for a bot locale.</p>
     */
    inline void SetSourceBotVersion(const char* value) { m_sourceBotVersionHasBeenSet = true; m_sourceBotVersion.assign(value); }

    /**
     * <p>The version of a bot used for a bot locale.</p>
     */
    inline BotVersionLocaleDetails& WithSourceBotVersion(const Aws::String& value) { SetSourceBotVersion(value); return *this;}

    /**
     * <p>The version of a bot used for a bot locale.</p>
     */
    inline BotVersionLocaleDetails& WithSourceBotVersion(Aws::String&& value) { SetSourceBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of a bot used for a bot locale.</p>
     */
    inline BotVersionLocaleDetails& WithSourceBotVersion(const char* value) { SetSourceBotVersion(value); return *this;}

  private:

    Aws::String m_sourceBotVersion;
    bool m_sourceBotVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
