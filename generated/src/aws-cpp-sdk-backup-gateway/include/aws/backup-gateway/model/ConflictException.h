/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
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
namespace BackupGateway
{
namespace Model
{

  /**
   * <p>The operation cannot proceed because it is not supported.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_BACKUPGATEWAY_API ConflictException();
    AWS_BACKUPGATEWAY_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of why the operation is not supported.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>A description of why the operation is not supported.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>A description of why the operation is not supported.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>A description of why the operation is not supported.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>A description of why the operation is not supported.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>A description of why the operation is not supported.</p>
     */
    inline ConflictException& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>A description of why the operation is not supported.</p>
     */
    inline ConflictException& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>A description of why the operation is not supported.</p>
     */
    inline ConflictException& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
