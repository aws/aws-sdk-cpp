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
   * <p>The bot member that processes the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RecognizedBotMember">AWS
   * API Reference</a></p>
   */
  class RecognizedBotMember
  {
  public:
    AWS_LEXRUNTIMEV2_API RecognizedBotMember();
    AWS_LEXRUNTIMEV2_API RecognizedBotMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API RecognizedBotMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the bot member that processes the request.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot member that processes the request.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot member that processes the request.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot member that processes the request.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot member that processes the request.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot member that processes the request.</p>
     */
    inline RecognizedBotMember& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot member that processes the request.</p>
     */
    inline RecognizedBotMember& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot member that processes the request.</p>
     */
    inline RecognizedBotMember& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The name of the bot member that processes the request.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot member that processes the request.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot member that processes the request.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot member that processes the request.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot member that processes the request.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot member that processes the request.</p>
     */
    inline RecognizedBotMember& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot member that processes the request.</p>
     */
    inline RecognizedBotMember& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot member that processes the request.</p>
     */
    inline RecognizedBotMember& WithBotName(const char* value) { SetBotName(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
