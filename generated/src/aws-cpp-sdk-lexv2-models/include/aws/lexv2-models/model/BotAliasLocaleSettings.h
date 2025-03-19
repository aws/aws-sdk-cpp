/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/CodeHookSpecification.h>
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
   * <p>Specifies settings that are unique to a locale. For example, you can use
   * different Lambda function depending on the bot's locale.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotAliasLocaleSettings">AWS
   * API Reference</a></p>
   */
  class BotAliasLocaleSettings
  {
  public:
    AWS_LEXMODELSV2_API BotAliasLocaleSettings() = default;
    AWS_LEXMODELSV2_API BotAliasLocaleSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotAliasLocaleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether the locale is enabled for the bot. If the value is
     * <code>false</code>, the locale isn't available for use.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline BotAliasLocaleSettings& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Lambda function that should be used in the locale.</p>
     */
    inline const CodeHookSpecification& GetCodeHookSpecification() const { return m_codeHookSpecification; }
    inline bool CodeHookSpecificationHasBeenSet() const { return m_codeHookSpecificationHasBeenSet; }
    template<typename CodeHookSpecificationT = CodeHookSpecification>
    void SetCodeHookSpecification(CodeHookSpecificationT&& value) { m_codeHookSpecificationHasBeenSet = true; m_codeHookSpecification = std::forward<CodeHookSpecificationT>(value); }
    template<typename CodeHookSpecificationT = CodeHookSpecification>
    BotAliasLocaleSettings& WithCodeHookSpecification(CodeHookSpecificationT&& value) { SetCodeHookSpecification(std::forward<CodeHookSpecificationT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    CodeHookSpecification m_codeHookSpecification;
    bool m_codeHookSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
