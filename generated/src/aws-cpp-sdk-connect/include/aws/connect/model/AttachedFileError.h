/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Error describing a failure to retrieve attached file metadata through
   * BatchGetAttachedFileMetadata action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AttachedFileError">AWS
   * API Reference</a></p>
   */
  class AttachedFileError
  {
  public:
    AWS_CONNECT_API AttachedFileError();
    AWS_CONNECT_API AttachedFileError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AttachedFileError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Status code describing the failure. </p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline AttachedFileError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline AttachedFileError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline AttachedFileError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Why the attached file couldn't be retrieved. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline AttachedFileError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline AttachedFileError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline AttachedFileError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline const Aws::String& GetFileId() const{ return m_fileId; }
    inline bool FileIdHasBeenSet() const { return m_fileIdHasBeenSet; }
    inline void SetFileId(const Aws::String& value) { m_fileIdHasBeenSet = true; m_fileId = value; }
    inline void SetFileId(Aws::String&& value) { m_fileIdHasBeenSet = true; m_fileId = std::move(value); }
    inline void SetFileId(const char* value) { m_fileIdHasBeenSet = true; m_fileId.assign(value); }
    inline AttachedFileError& WithFileId(const Aws::String& value) { SetFileId(value); return *this;}
    inline AttachedFileError& WithFileId(Aws::String&& value) { SetFileId(std::move(value)); return *this;}
    inline AttachedFileError& WithFileId(const char* value) { SetFileId(value); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_fileId;
    bool m_fileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
