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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/LoggingOptionsPayload.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the SetLoggingOptions operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetLoggingOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API SetLoggingOptionsRequest : public IoTRequest
  {
  public:
    SetLoggingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLoggingOptions"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The logging options payload.</p>
     */
    inline const LoggingOptionsPayload& GetLoggingOptionsPayload() const{ return m_loggingOptionsPayload; }

    /**
     * <p>The logging options payload.</p>
     */
    inline bool LoggingOptionsPayloadHasBeenSet() const { return m_loggingOptionsPayloadHasBeenSet; }

    /**
     * <p>The logging options payload.</p>
     */
    inline void SetLoggingOptionsPayload(const LoggingOptionsPayload& value) { m_loggingOptionsPayloadHasBeenSet = true; m_loggingOptionsPayload = value; }

    /**
     * <p>The logging options payload.</p>
     */
    inline void SetLoggingOptionsPayload(LoggingOptionsPayload&& value) { m_loggingOptionsPayloadHasBeenSet = true; m_loggingOptionsPayload = std::move(value); }

    /**
     * <p>The logging options payload.</p>
     */
    inline SetLoggingOptionsRequest& WithLoggingOptionsPayload(const LoggingOptionsPayload& value) { SetLoggingOptionsPayload(value); return *this;}

    /**
     * <p>The logging options payload.</p>
     */
    inline SetLoggingOptionsRequest& WithLoggingOptionsPayload(LoggingOptionsPayload&& value) { SetLoggingOptionsPayload(std::move(value)); return *this;}

  private:

    LoggingOptionsPayload m_loggingOptionsPayload;
    bool m_loggingOptionsPayloadHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
