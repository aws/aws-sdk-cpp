/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>The input parameters don't match the service's restrictions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/BadRequestException">AWS
   * API Reference</a></p>
   */
  class BadRequestException
  {
  public:
    AWS_CHIMESDKMEETINGS_API BadRequestException();
    AWS_CHIMESDKMEETINGS_API BadRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API BadRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline BadRequestException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline BadRequestException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline BadRequestException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline BadRequestException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline BadRequestException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline BadRequestException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline BadRequestException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline BadRequestException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline BadRequestException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
