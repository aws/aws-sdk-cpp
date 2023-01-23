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
   * <p>Provides a response when the status of a document could not be
   * retrieved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchGetDocumentStatusResponseError">AWS
   * API Reference</a></p>
   */
  class BatchGetDocumentStatusResponseError
  {
  public:
    AWS_KENDRA_API BatchGetDocumentStatusResponseError();
    AWS_KENDRA_API BatchGetDocumentStatusResponseError(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API BatchGetDocumentStatusResponseError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the document whose status could not be retrieved.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The identifier of the document whose status could not be retrieved.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The identifier of the document whose status could not be retrieved.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The identifier of the document whose status could not be retrieved.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The identifier of the document whose status could not be retrieved.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The identifier of the document whose status could not be retrieved.</p>
     */
    inline BatchGetDocumentStatusResponseError& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The identifier of the document whose status could not be retrieved.</p>
     */
    inline BatchGetDocumentStatusResponseError& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the document whose status could not be retrieved.</p>
     */
    inline BatchGetDocumentStatusResponseError& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>Indicates the source of the error.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Indicates the source of the error.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Indicates the source of the error.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Indicates the source of the error.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Indicates the source of the error.</p>
     */
    inline BatchGetDocumentStatusResponseError& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Indicates the source of the error.</p>
     */
    inline BatchGetDocumentStatusResponseError& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>States that the API could not get the status of a document. This could be
     * because the request is not valid or there is a system error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>States that the API could not get the status of a document. This could be
     * because the request is not valid or there is a system error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>States that the API could not get the status of a document. This could be
     * because the request is not valid or there is a system error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>States that the API could not get the status of a document. This could be
     * because the request is not valid or there is a system error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>States that the API could not get the status of a document. This could be
     * because the request is not valid or there is a system error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>States that the API could not get the status of a document. This could be
     * because the request is not valid or there is a system error.</p>
     */
    inline BatchGetDocumentStatusResponseError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>States that the API could not get the status of a document. This could be
     * because the request is not valid or there is a system error.</p>
     */
    inline BatchGetDocumentStatusResponseError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>States that the API could not get the status of a document. This could be
     * because the request is not valid or there is a system error.</p>
     */
    inline BatchGetDocumentStatusResponseError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
