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
   * The responses that are returned after you record an event.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventItemResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EventItemResponse
  {
  public:
    EventItemResponse();
    EventItemResponse(Aws::Utils::Json::JsonView jsonValue);
    EventItemResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A custom message that is associated with the processing of an event.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * A custom message that is associated with the processing of an event.
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * A custom message that is associated with the processing of an event.
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * A custom message that is associated with the processing of an event.
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * A custom message that is associated with the processing of an event.
     */
    inline EventItemResponse& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * A custom message that is associated with the processing of an event.
     */
    inline EventItemResponse& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * A custom message that is associated with the processing of an event.
     */
    inline EventItemResponse& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * The status code to respond with for a particular event id
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * The status code to respond with for a particular event id
     */
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * The status code to respond with for a particular event id
     */
    inline EventItemResponse& WithStatusCode(int value) { SetStatusCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    int m_statusCode;
    bool m_statusCodeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
