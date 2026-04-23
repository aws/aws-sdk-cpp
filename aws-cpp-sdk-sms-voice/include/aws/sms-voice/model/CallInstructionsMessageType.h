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
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
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
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that defines a message that contains text formatted using Amazon
   * Pinpoint Voice Instructions markup.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/CallInstructionsMessageType">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API CallInstructionsMessageType
  {
  public:
    CallInstructionsMessageType();
    CallInstructionsMessageType(Aws::Utils::Json::JsonView jsonValue);
    CallInstructionsMessageType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline CallInstructionsMessageType& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline CallInstructionsMessageType& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline CallInstructionsMessageType& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
