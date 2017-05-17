/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ImageStateChangeReasonCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>The reason why the last state change occurred.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ImageStateChangeReason">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API ImageStateChangeReason
  {
  public:
    ImageStateChangeReason();
    ImageStateChangeReason(const Aws::Utils::Json::JsonValue& jsonValue);
    ImageStateChangeReason& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The state change reason code of the image.</p>
     */
    inline const ImageStateChangeReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The state change reason code of the image.</p>
     */
    inline void SetCode(const ImageStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state change reason code of the image.</p>
     */
    inline void SetCode(ImageStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state change reason code of the image.</p>
     */
    inline ImageStateChangeReason& WithCode(const ImageStateChangeReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The state change reason code of the image.</p>
     */
    inline ImageStateChangeReason& WithCode(ImageStateChangeReasonCode&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The state change reason message to the end user.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The state change reason message to the end user.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The state change reason message to the end user.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The state change reason message to the end user.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The state change reason message to the end user.</p>
     */
    inline ImageStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The state change reason message to the end user.</p>
     */
    inline ImageStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The state change reason message to the end user.</p>
     */
    inline ImageStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    ImageStateChangeReasonCode m_code;
    bool m_codeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
