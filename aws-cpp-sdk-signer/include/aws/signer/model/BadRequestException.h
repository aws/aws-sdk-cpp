﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>The request contains invalid parameters for the ARN or tags. This exception
   * also occurs when you call a tagging API on a cancelled signing
   * profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/BadRequestException">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API BadRequestException
  {
  public:
    BadRequestException();
    BadRequestException(Aws::Utils::Json::JsonView jsonValue);
    BadRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline BadRequestException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline BadRequestException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline BadRequestException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline BadRequestException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline BadRequestException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline BadRequestException& WithCode(const char* value) { SetCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_code;
    bool m_codeHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
