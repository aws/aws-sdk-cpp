/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Returned when the <code>CreateAccessPoint</code> API action is called too
   * quickly and the number of Access Points on the file system is nearing the <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#limits-efs-resources-per-account-per-region">limit
   * of 120</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class ThrottlingException
  {
  public:
    AWS_EFS_API ThrottlingException();
    AWS_EFS_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    
    inline ThrottlingException& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline ThrottlingException& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline ThrottlingException& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ThrottlingException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ThrottlingException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ThrottlingException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
