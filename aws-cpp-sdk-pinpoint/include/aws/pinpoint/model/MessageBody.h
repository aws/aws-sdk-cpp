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
   * <p>Provides information about an API request or response.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>The message that's returned from the API.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline MessageBody& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline MessageBody& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline MessageBody& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline const Aws::String& GetRequestID() const{ return m_requestID; }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline bool RequestIDHasBeenSet() const { return m_requestIDHasBeenSet; }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline void SetRequestID(const Aws::String& value) { m_requestIDHasBeenSet = true; m_requestID = value; }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline void SetRequestID(Aws::String&& value) { m_requestIDHasBeenSet = true; m_requestID = std::move(value); }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline void SetRequestID(const char* value) { m_requestIDHasBeenSet = true; m_requestID.assign(value); }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline MessageBody& WithRequestID(const Aws::String& value) { SetRequestID(value); return *this;}

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline MessageBody& WithRequestID(Aws::String&& value) { SetRequestID(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the request or response.</p>
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
