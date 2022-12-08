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
    AWS_LEXMODELSV2_API CustomVocabularyEntryId();
    AWS_LEXMODELSV2_API CustomVocabularyEntryId(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API CustomVocabularyEntryId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique item identifier for the custom vocabulary items.</p>
     */
    inline const Aws::String& GetItemId() const{ return m_itemId; }

    /**
     * <p>The unique item identifier for the custom vocabulary items.</p>
     */
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }

    /**
     * <p>The unique item identifier for the custom vocabulary items.</p>
     */
    inline void SetItemId(const Aws::String& value) { m_itemIdHasBeenSet = true; m_itemId = value; }

    /**
     * <p>The unique item identifier for the custom vocabulary items.</p>
     */
    inline void SetItemId(Aws::String&& value) { m_itemIdHasBeenSet = true; m_itemId = std::move(value); }

    /**
     * <p>The unique item identifier for the custom vocabulary items.</p>
     */
    inline void SetItemId(const char* value) { m_itemIdHasBeenSet = true; m_itemId.assign(value); }

    /**
     * <p>The unique item identifier for the custom vocabulary items.</p>
     */
    inline CustomVocabularyEntryId& WithItemId(const Aws::String& value) { SetItemId(value); return *this;}

    /**
     * <p>The unique item identifier for the custom vocabulary items.</p>
     */
    inline CustomVocabularyEntryId& WithItemId(Aws::String&& value) { SetItemId(std::move(value)); return *this;}

    /**
     * <p>The unique item identifier for the custom vocabulary items.</p>
     */
    inline CustomVocabularyEntryId& WithItemId(const char* value) { SetItemId(value); return *this;}

  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
