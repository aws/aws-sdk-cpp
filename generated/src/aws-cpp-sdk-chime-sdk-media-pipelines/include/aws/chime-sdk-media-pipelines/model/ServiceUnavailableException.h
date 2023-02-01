/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ErrorCode.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The service is currently unavailable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ServiceUnavailableException">AWS
   * API Reference</a></p>
   */
  class ServiceUnavailableException
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ServiceUnavailableException();
    AWS_CHIMESDKMEDIAPIPELINES_API ServiceUnavailableException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ServiceUnavailableException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ErrorCode& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const ErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(ErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline ServiceUnavailableException& WithCode(const ErrorCode& value) { SetCode(value); return *this;}

    
    inline ServiceUnavailableException& WithCode(ErrorCode&& value) { SetCode(std::move(value)); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceUnavailableException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceUnavailableException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceUnavailableException& WithMessage(const char* value) { SetMessage(value); return *this;}


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
    inline ServiceUnavailableException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline ServiceUnavailableException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request id associated with the call responsible for the exception.</p>
     */
    inline ServiceUnavailableException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
