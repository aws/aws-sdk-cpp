/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ObfuscationSettingType.h>
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
   * <p>Determines whether Amazon Lex obscures slot values in conversation logs.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ObfuscationSetting">AWS
   * API Reference</a></p>
   */
  class ObfuscationSetting
  {
  public:
    AWS_LEXMODELSV2_API ObfuscationSetting() = default;
    AWS_LEXMODELSV2_API ObfuscationSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ObfuscationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Value that determines whether Amazon Lex obscures slot values in conversation
     * logs. The default is to obscure the values.</p>
     */
    inline ObfuscationSettingType GetObfuscationSettingType() const { return m_obfuscationSettingType; }
    inline bool ObfuscationSettingTypeHasBeenSet() const { return m_obfuscationSettingTypeHasBeenSet; }
    inline void SetObfuscationSettingType(ObfuscationSettingType value) { m_obfuscationSettingTypeHasBeenSet = true; m_obfuscationSettingType = value; }
    inline ObfuscationSetting& WithObfuscationSettingType(ObfuscationSettingType value) { SetObfuscationSettingType(value); return *this;}
    ///@}
  private:

    ObfuscationSettingType m_obfuscationSettingType{ObfuscationSettingType::NOT_SET};
    bool m_obfuscationSettingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
