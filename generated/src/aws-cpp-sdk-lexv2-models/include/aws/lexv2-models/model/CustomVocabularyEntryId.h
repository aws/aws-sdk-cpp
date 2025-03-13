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
   * <p>The unique entry identifier for the custom vocabulary items.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CustomVocabularyEntryId">AWS
   * API Reference</a></p>
   */
  class CustomVocabularyEntryId
  {
  public:
    AWS_LEXMODELSV2_API CustomVocabularyEntryId() = default;
    AWS_LEXMODELSV2_API CustomVocabularyEntryId(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API CustomVocabularyEntryId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique item identifier for the custom vocabulary items.</p>
     */
    inline const Aws::String& GetItemId() const { return m_itemId; }
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }
    template<typename ItemIdT = Aws::String>
    void SetItemId(ItemIdT&& value) { m_itemIdHasBeenSet = true; m_itemId = std::forward<ItemIdT>(value); }
    template<typename ItemIdT = Aws::String>
    CustomVocabularyEntryId& WithItemId(ItemIdT&& value) { SetItemId(std::forward<ItemIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
