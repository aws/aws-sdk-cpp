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
   * <p>A bot that is a member of a network of bots.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotMember">AWS
   * API Reference</a></p>
   */
  class BotMember
  {
  public:
    AWS_LEXMODELSV2_API BotMember();
    AWS_LEXMODELSV2_API BotMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberId() const{ return m_botMemberId; }
    inline bool BotMemberIdHasBeenSet() const { return m_botMemberIdHasBeenSet; }
    inline void SetBotMemberId(const Aws::String& value) { m_botMemberIdHasBeenSet = true; m_botMemberId = value; }
    inline void SetBotMemberId(Aws::String&& value) { m_botMemberIdHasBeenSet = true; m_botMemberId = std::move(value); }
    inline void SetBotMemberId(const char* value) { m_botMemberIdHasBeenSet = true; m_botMemberId.assign(value); }
    inline BotMember& WithBotMemberId(const Aws::String& value) { SetBotMemberId(value); return *this;}
    inline BotMember& WithBotMemberId(Aws::String&& value) { SetBotMemberId(std::move(value)); return *this;}
    inline BotMember& WithBotMemberId(const char* value) { SetBotMemberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberName() const{ return m_botMemberName; }
    inline bool BotMemberNameHasBeenSet() const { return m_botMemberNameHasBeenSet; }
    inline void SetBotMemberName(const Aws::String& value) { m_botMemberNameHasBeenSet = true; m_botMemberName = value; }
    inline void SetBotMemberName(Aws::String&& value) { m_botMemberNameHasBeenSet = true; m_botMemberName = std::move(value); }
    inline void SetBotMemberName(const char* value) { m_botMemberNameHasBeenSet = true; m_botMemberName.assign(value); }
    inline BotMember& WithBotMemberName(const Aws::String& value) { SetBotMemberName(value); return *this;}
    inline BotMember& WithBotMemberName(Aws::String&& value) { SetBotMemberName(std::move(value)); return *this;}
    inline BotMember& WithBotMemberName(const char* value) { SetBotMemberName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias ID of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberAliasId() const{ return m_botMemberAliasId; }
    inline bool BotMemberAliasIdHasBeenSet() const { return m_botMemberAliasIdHasBeenSet; }
    inline void SetBotMemberAliasId(const Aws::String& value) { m_botMemberAliasIdHasBeenSet = true; m_botMemberAliasId = value; }
    inline void SetBotMemberAliasId(Aws::String&& value) { m_botMemberAliasIdHasBeenSet = true; m_botMemberAliasId = std::move(value); }
    inline void SetBotMemberAliasId(const char* value) { m_botMemberAliasIdHasBeenSet = true; m_botMemberAliasId.assign(value); }
    inline BotMember& WithBotMemberAliasId(const Aws::String& value) { SetBotMemberAliasId(value); return *this;}
    inline BotMember& WithBotMemberAliasId(Aws::String&& value) { SetBotMemberAliasId(std::move(value)); return *this;}
    inline BotMember& WithBotMemberAliasId(const char* value) { SetBotMemberAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias name of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberAliasName() const{ return m_botMemberAliasName; }
    inline bool BotMemberAliasNameHasBeenSet() const { return m_botMemberAliasNameHasBeenSet; }
    inline void SetBotMemberAliasName(const Aws::String& value) { m_botMemberAliasNameHasBeenSet = true; m_botMemberAliasName = value; }
    inline void SetBotMemberAliasName(Aws::String&& value) { m_botMemberAliasNameHasBeenSet = true; m_botMemberAliasName = std::move(value); }
    inline void SetBotMemberAliasName(const char* value) { m_botMemberAliasNameHasBeenSet = true; m_botMemberAliasName.assign(value); }
    inline BotMember& WithBotMemberAliasName(const Aws::String& value) { SetBotMemberAliasName(value); return *this;}
    inline BotMember& WithBotMemberAliasName(Aws::String&& value) { SetBotMemberAliasName(std::move(value)); return *this;}
    inline BotMember& WithBotMemberAliasName(const char* value) { SetBotMemberAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberVersion() const{ return m_botMemberVersion; }
    inline bool BotMemberVersionHasBeenSet() const { return m_botMemberVersionHasBeenSet; }
    inline void SetBotMemberVersion(const Aws::String& value) { m_botMemberVersionHasBeenSet = true; m_botMemberVersion = value; }
    inline void SetBotMemberVersion(Aws::String&& value) { m_botMemberVersionHasBeenSet = true; m_botMemberVersion = std::move(value); }
    inline void SetBotMemberVersion(const char* value) { m_botMemberVersionHasBeenSet = true; m_botMemberVersion.assign(value); }
    inline BotMember& WithBotMemberVersion(const Aws::String& value) { SetBotMemberVersion(value); return *this;}
    inline BotMember& WithBotMemberVersion(Aws::String&& value) { SetBotMemberVersion(std::move(value)); return *this;}
    inline BotMember& WithBotMemberVersion(const char* value) { SetBotMemberVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_botMemberId;
    bool m_botMemberIdHasBeenSet = false;

    Aws::String m_botMemberName;
    bool m_botMemberNameHasBeenSet = false;

    Aws::String m_botMemberAliasId;
    bool m_botMemberAliasIdHasBeenSet = false;

    Aws::String m_botMemberAliasName;
    bool m_botMemberAliasNameHasBeenSet = false;

    Aws::String m_botMemberVersion;
    bool m_botMemberVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
