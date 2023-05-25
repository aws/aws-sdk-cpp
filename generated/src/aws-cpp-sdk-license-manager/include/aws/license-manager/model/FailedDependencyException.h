/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>A dependency required to run the API is missing.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/FailedDependencyException">AWS
   * API Reference</a></p>
   */
  class FailedDependencyException
  {
  public:
    AWS_LICENSEMANAGER_API FailedDependencyException();
    AWS_LICENSEMANAGER_API FailedDependencyException(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API FailedDependencyException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline FailedDependencyException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline FailedDependencyException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline FailedDependencyException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    
    inline FailedDependencyException& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline FailedDependencyException& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline FailedDependencyException& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
