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
    AWS_LEXMODELSV2_API BotMember() = default;
    AWS_LEXMODELSV2_API BotMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberId() const { return m_botMemberId; }
    inline bool BotMemberIdHasBeenSet() const { return m_botMemberIdHasBeenSet; }
    template<typename BotMemberIdT = Aws::String>
    void SetBotMemberId(BotMemberIdT&& value) { m_botMemberIdHasBeenSet = true; m_botMemberId = std::forward<BotMemberIdT>(value); }
    template<typename BotMemberIdT = Aws::String>
    BotMember& WithBotMemberId(BotMemberIdT&& value) { SetBotMemberId(std::forward<BotMemberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberName() const { return m_botMemberName; }
    inline bool BotMemberNameHasBeenSet() const { return m_botMemberNameHasBeenSet; }
    template<typename BotMemberNameT = Aws::String>
    void SetBotMemberName(BotMemberNameT&& value) { m_botMemberNameHasBeenSet = true; m_botMemberName = std::forward<BotMemberNameT>(value); }
    template<typename BotMemberNameT = Aws::String>
    BotMember& WithBotMemberName(BotMemberNameT&& value) { SetBotMemberName(std::forward<BotMemberNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias ID of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberAliasId() const { return m_botMemberAliasId; }
    inline bool BotMemberAliasIdHasBeenSet() const { return m_botMemberAliasIdHasBeenSet; }
    template<typename BotMemberAliasIdT = Aws::String>
    void SetBotMemberAliasId(BotMemberAliasIdT&& value) { m_botMemberAliasIdHasBeenSet = true; m_botMemberAliasId = std::forward<BotMemberAliasIdT>(value); }
    template<typename BotMemberAliasIdT = Aws::String>
    BotMember& WithBotMemberAliasId(BotMemberAliasIdT&& value) { SetBotMemberAliasId(std::forward<BotMemberAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias name of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberAliasName() const { return m_botMemberAliasName; }
    inline bool BotMemberAliasNameHasBeenSet() const { return m_botMemberAliasNameHasBeenSet; }
    template<typename BotMemberAliasNameT = Aws::String>
    void SetBotMemberAliasName(BotMemberAliasNameT&& value) { m_botMemberAliasNameHasBeenSet = true; m_botMemberAliasName = std::forward<BotMemberAliasNameT>(value); }
    template<typename BotMemberAliasNameT = Aws::String>
    BotMember& WithBotMemberAliasName(BotMemberAliasNameT&& value) { SetBotMemberAliasName(std::forward<BotMemberAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of a bot that is a member of this network of bots.</p>
     */
    inline const Aws::String& GetBotMemberVersion() const { return m_botMemberVersion; }
    inline bool BotMemberVersionHasBeenSet() const { return m_botMemberVersionHasBeenSet; }
    template<typename BotMemberVersionT = Aws::String>
    void SetBotMemberVersion(BotMemberVersionT&& value) { m_botMemberVersionHasBeenSet = true; m_botMemberVersion = std::forward<BotMemberVersionT>(value); }
    template<typename BotMemberVersionT = Aws::String>
    BotMember& WithBotMemberVersion(BotMemberVersionT&& value) { SetBotMemberVersion(std::forward<BotMemberVersionT>(value)); return *this;}
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
