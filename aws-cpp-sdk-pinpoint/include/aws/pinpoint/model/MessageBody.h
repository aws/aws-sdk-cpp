﻿/*
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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Simple message object.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageBody">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API MessageBody
  {
  public:
    MessageBody();
    MessageBody(Aws::Utils::Json::JsonView jsonValue);
    MessageBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The error message that's returned from the API.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * The error message that's returned from the API.
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * The error message that's returned from the API.
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * The error message that's returned from the API.
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * The error message that's returned from the API.
     */
    inline MessageBody& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * The error message that's returned from the API.
     */
    inline MessageBody& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * The error message that's returned from the API.
     */
    inline MessageBody& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * The unique message body ID.
     */
    inline const Aws::String& GetRequestID() const{ return m_requestID; }

    /**
     * The unique message body ID.
     */
    inline void SetRequestID(const Aws::String& value) { m_requestIDHasBeenSet = true; m_requestID = value; }

    /**
     * The unique message body ID.
     */
    inline void SetRequestID(Aws::String&& value) { m_requestIDHasBeenSet = true; m_requestID = std::move(value); }

    /**
     * The unique message body ID.
     */
    inline void SetRequestID(const char* value) { m_requestIDHasBeenSet = true; m_requestID.assign(value); }

    /**
     * The unique message body ID.
     */
    inline MessageBody& WithRequestID(const Aws::String& value) { SetRequestID(value); return *this;}

    /**
     * The unique message body ID.
     */
    inline MessageBody& WithRequestID(Aws::String&& value) { SetRequestID(std::move(value)); return *this;}

    /**
     * The unique message body ID.
     */
    inline MessageBody& WithRequestID(const char* value) { SetRequestID(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_requestID;
    bool m_requestIDHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
