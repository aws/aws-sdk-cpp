/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ErrorCode.h>
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
   * <p>The unique failed custom vocabulary item from the custom vocabulary
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/FailedCustomVocabularyItem">AWS
   * API Reference</a></p>
   */
  class FailedCustomVocabularyItem
  {
  public:
    AWS_LEXMODELSV2_API FailedCustomVocabularyItem() = default;
    AWS_LEXMODELSV2_API FailedCustomVocabularyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API FailedCustomVocabularyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique item identifer for the failed custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline const Aws::String& GetItemId() const { return m_itemId; }
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }
    template<typename ItemIdT = Aws::String>
    void SetItemId(ItemIdT&& value) { m_itemIdHasBeenSet = true; m_itemId = std::forward<ItemIdT>(value); }
    template<typename ItemIdT = Aws::String>
    FailedCustomVocabularyItem& WithItemId(ItemIdT&& value) { SetItemId(std::forward<ItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    FailedCustomVocabularyItem& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique error code for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline ErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(ErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline FailedCustomVocabularyItem& WithErrorCode(ErrorCode value) { SetErrorCode(value); return *this;}
    ///@}
  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorCode m_errorCode{ErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
