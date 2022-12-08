/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>This exception is thrown when the client submits a malformed
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/InvalidRequestException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestException
  {
  public:
    AWS_DATASYNC_API InvalidRequestException();
    AWS_DATASYNC_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidRequestException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidRequestException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    
    inline InvalidRequestException& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline InvalidRequestException& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetDatasyncErrorCode() const{ return m_datasyncErrorCode; }

    
    inline bool DatasyncErrorCodeHasBeenSet() const { return m_datasyncErrorCodeHasBeenSet; }

    
    inline void SetDatasyncErrorCode(const Aws::String& value) { m_datasyncErrorCodeHasBeenSet = true; m_datasyncErrorCode = value; }

    
    inline void SetDatasyncErrorCode(Aws::String&& value) { m_datasyncErrorCodeHasBeenSet = true; m_datasyncErrorCode = std::move(value); }

    
    inline void SetDatasyncErrorCode(const char* value) { m_datasyncErrorCodeHasBeenSet = true; m_datasyncErrorCode.assign(value); }

    
    inline InvalidRequestException& WithDatasyncErrorCode(const Aws::String& value) { SetDatasyncErrorCode(value); return *this;}

    
    inline InvalidRequestException& WithDatasyncErrorCode(Aws::String&& value) { SetDatasyncErrorCode(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithDatasyncErrorCode(const char* value) { SetDatasyncErrorCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_datasyncErrorCode;
    bool m_datasyncErrorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
