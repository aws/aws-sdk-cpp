/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/GrammarSlotTypeSetting.h>
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
   * <p>Provides information about the external source of the slot type's
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ExternalSourceSetting">AWS
   * API Reference</a></p>
   */
  class ExternalSourceSetting
  {
  public:
    AWS_LEXMODELSV2_API ExternalSourceSetting() = default;
    AWS_LEXMODELSV2_API ExternalSourceSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ExternalSourceSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings required for a slot type based on a grammar that you provide.</p>
     */
    inline const GrammarSlotTypeSetting& GetGrammarSlotTypeSetting() const { return m_grammarSlotTypeSetting; }
    inline bool GrammarSlotTypeSettingHasBeenSet() const { return m_grammarSlotTypeSettingHasBeenSet; }
    template<typename GrammarSlotTypeSettingT = GrammarSlotTypeSetting>
    void SetGrammarSlotTypeSetting(GrammarSlotTypeSettingT&& value) { m_grammarSlotTypeSettingHasBeenSet = true; m_grammarSlotTypeSetting = std::forward<GrammarSlotTypeSettingT>(value); }
    template<typename GrammarSlotTypeSettingT = GrammarSlotTypeSetting>
    ExternalSourceSetting& WithGrammarSlotTypeSetting(GrammarSlotTypeSettingT&& value) { SetGrammarSlotTypeSetting(std::forward<GrammarSlotTypeSettingT>(value)); return *this;}
    ///@}
  private:

    GrammarSlotTypeSetting m_grammarSlotTypeSetting;
    bool m_grammarSlotTypeSettingHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
