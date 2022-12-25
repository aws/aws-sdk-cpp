/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ErrorCode.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about documents that could not be removed from an index
   * by the <code>BatchDeleteDocument</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchDeleteDocumentResponseFailedDocument">AWS
   * API Reference</a></p>
   */
  class BatchDeleteDocumentResponseFailedDocument
  {
  public:
    AWS_KENDRA_API BatchDeleteDocumentResponseFailedDocument();
    AWS_KENDRA_API BatchDeleteDocumentResponseFailedDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API BatchDeleteDocumentResponseFailedDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the document that couldn't be removed from the index.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the document that couldn't be removed from the index.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the document that couldn't be removed from the index.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the document that couldn't be removed from the index.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the document that couldn't be removed from the index.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the document that couldn't be removed from the index.</p>
     */
    inline BatchDeleteDocumentResponseFailedDocument& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the document that couldn't be removed from the index.</p>
     */
    inline BatchDeleteDocumentResponseFailedDocument& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the document that couldn't be removed from the index.</p>
     */
    inline BatchDeleteDocumentResponseFailedDocument& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The error code for why the document couldn't be removed from the index.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for why the document couldn't be removed from the index.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code for why the document couldn't be removed from the index.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for why the document couldn't be removed from the index.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for why the document couldn't be removed from the index.</p>
     */
    inline BatchDeleteDocumentResponseFailedDocument& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for why the document couldn't be removed from the index.</p>
     */
    inline BatchDeleteDocumentResponseFailedDocument& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline BatchDeleteDocumentResponseFailedDocument& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline BatchDeleteDocumentResponseFailedDocument& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline BatchDeleteDocumentResponseFailedDocument& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
