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
    AWS_LEXMODELSV2_API FailedCustomVocabularyItem();
    AWS_LEXMODELSV2_API FailedCustomVocabularyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API FailedCustomVocabularyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique item identifer for the failed custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline const Aws::String& GetItemId() const{ return m_itemId; }

    /**
     * <p>The unique item identifer for the failed custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }

    /**
     * <p>The unique item identifer for the failed custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline void SetItemId(const Aws::String& value) { m_itemIdHasBeenSet = true; m_itemId = value; }

    /**
     * <p>The unique item identifer for the failed custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline void SetItemId(Aws::String&& value) { m_itemIdHasBeenSet = true; m_itemId = std::move(value); }

    /**
     * <p>The unique item identifer for the failed custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline void SetItemId(const char* value) { m_itemIdHasBeenSet = true; m_itemId.assign(value); }

    /**
     * <p>The unique item identifer for the failed custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline FailedCustomVocabularyItem& WithItemId(const Aws::String& value) { SetItemId(value); return *this;}

    /**
     * <p>The unique item identifer for the failed custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline FailedCustomVocabularyItem& WithItemId(Aws::String&& value) { SetItemId(std::move(value)); return *this;}

    /**
     * <p>The unique item identifer for the failed custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline FailedCustomVocabularyItem& WithItemId(const char* value) { SetItemId(value); return *this;}


    /**
     * <p>The error message for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline FailedCustomVocabularyItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline FailedCustomVocabularyItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline FailedCustomVocabularyItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The unique error code for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The unique error code for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The unique error code for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The unique error code for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The unique error code for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline FailedCustomVocabularyItem& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The unique error code for the failed custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline FailedCustomVocabularyItem& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}

  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
