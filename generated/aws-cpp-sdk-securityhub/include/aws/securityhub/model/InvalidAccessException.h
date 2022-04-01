/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>There is an issue with the account used to make the request. Either Security
   * Hub is not enabled for the account, or the account does not have permission to
   * perform this action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InvalidAccessException">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API InvalidAccessException
  {
  public:
    InvalidAccessException();
    InvalidAccessException(Aws::Utils::Json::JsonView jsonValue);
    InvalidAccessException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidAccessException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidAccessException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidAccessException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline InvalidAccessException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline InvalidAccessException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline InvalidAccessException& WithCode(const char* value) { SetCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_code;
    bool m_codeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
