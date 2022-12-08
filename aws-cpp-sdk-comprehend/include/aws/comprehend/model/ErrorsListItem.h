/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/PageBasedErrorCode.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Text extraction encountered one or more page-level errors in the input
   * document.</p> <p>The <code>ErrorCode</code> contains one of the following
   * values:</p> <ul> <li> <p>TEXTRACT_BAD_PAGE - Amazon Textract cannot read the
   * page. For more information about page limits in Amazon Textract, see <a
   * href="https://docs.aws.amazon.com/textract/latest/dg/limits-document.html"> Page
   * Quotas in Amazon Textract</a>.</p> </li> <li>
   * <p>TEXTRACT_PROVISIONED_THROUGHPUT_EXCEEDED - The number of requests exceeded
   * your throughput limit. For more information about throughput quotas in Amazon
   * Textract, see <a
   * href="https://docs.aws.amazon.com/textract/latest/dg/limits-quotas-explained.html">
   * Default quotas in Amazon Textract</a>.</p> </li> <li>
   * <p>PAGE_CHARACTERS_EXCEEDED - Too many text characters on the page (10,000
   * characters maximum).</p> </li> <li> <p>PAGE_SIZE_EXCEEDED - The maximum page
   * size is 10 MB.</p> </li> <li> <p>INTERNAL_SERVER_ERROR - The request encountered
   * a service issue. Try the API request again.</p> </li> </ul><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ErrorsListItem">AWS
   * API Reference</a></p>
   */
  class ErrorsListItem
  {
  public:
    AWS_COMPREHEND_API ErrorsListItem();
    AWS_COMPREHEND_API ErrorsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API ErrorsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Page number where the error occurred.</p>
     */
    inline int GetPage() const{ return m_page; }

    /**
     * <p>Page number where the error occurred.</p>
     */
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }

    /**
     * <p>Page number where the error occurred.</p>
     */
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }

    /**
     * <p>Page number where the error occurred.</p>
     */
    inline ErrorsListItem& WithPage(int value) { SetPage(value); return *this;}


    /**
     * <p>Error code for the cause of the error.</p>
     */
    inline const PageBasedErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Error code for the cause of the error.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Error code for the cause of the error.</p>
     */
    inline void SetErrorCode(const PageBasedErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Error code for the cause of the error.</p>
     */
    inline void SetErrorCode(PageBasedErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Error code for the cause of the error.</p>
     */
    inline ErrorsListItem& WithErrorCode(const PageBasedErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Error code for the cause of the error.</p>
     */
    inline ErrorsListItem& WithErrorCode(PageBasedErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>Text message explaining the reason for the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Text message explaining the reason for the error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Text message explaining the reason for the error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Text message explaining the reason for the error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Text message explaining the reason for the error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Text message explaining the reason for the error.</p>
     */
    inline ErrorsListItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Text message explaining the reason for the error.</p>
     */
    inline ErrorsListItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Text message explaining the reason for the error.</p>
     */
    inline ErrorsListItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    int m_page;
    bool m_pageHasBeenSet = false;

    PageBasedErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
