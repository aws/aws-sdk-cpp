/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/GrammarSlotTypeSource.h>
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
   * <p>Settings requried for a slot type based on a grammar that you
   * provide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/GrammarSlotTypeSetting">AWS
   * API Reference</a></p>
   */
  class GrammarSlotTypeSetting
  {
  public:
    AWS_LEXMODELSV2_API GrammarSlotTypeSetting() = default;
    AWS_LEXMODELSV2_API GrammarSlotTypeSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API GrammarSlotTypeSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the grammar used to create the slot type.</p>
     */
    inline const GrammarSlotTypeSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = GrammarSlotTypeSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = GrammarSlotTypeSource>
    GrammarSlotTypeSetting& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    GrammarSlotTypeSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
