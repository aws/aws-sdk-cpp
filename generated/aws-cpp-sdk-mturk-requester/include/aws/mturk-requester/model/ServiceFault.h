﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p>Amazon Mechanical Turk is temporarily unable to process your request. Try
   * your call again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ServiceFault">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API ServiceFault
  {
  public:
    ServiceFault();
    ServiceFault(Aws::Utils::Json::JsonView jsonValue);
    ServiceFault& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceFault& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceFault& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceFault& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetTurkErrorCode() const{ return m_turkErrorCode; }

    
    inline bool TurkErrorCodeHasBeenSet() const { return m_turkErrorCodeHasBeenSet; }

    
    inline void SetTurkErrorCode(const Aws::String& value) { m_turkErrorCodeHasBeenSet = true; m_turkErrorCode = value; }

    
    inline void SetTurkErrorCode(Aws::String&& value) { m_turkErrorCodeHasBeenSet = true; m_turkErrorCode = std::move(value); }

    
    inline void SetTurkErrorCode(const char* value) { m_turkErrorCodeHasBeenSet = true; m_turkErrorCode.assign(value); }

    
    inline ServiceFault& WithTurkErrorCode(const Aws::String& value) { SetTurkErrorCode(value); return *this;}

    
    inline ServiceFault& WithTurkErrorCode(Aws::String&& value) { SetTurkErrorCode(std::move(value)); return *this;}

    
    inline ServiceFault& WithTurkErrorCode(const char* value) { SetTurkErrorCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_turkErrorCode;
    bool m_turkErrorCodeHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
