/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SetLoggingOptionsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API SetLoggingOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLoggingOptions"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The logging options payload.</p>
     */
    inline const LoggingOptionsPayload& GetLoggingOptionsPayload() const { return m_loggingOptionsPayload; }
    inline bool LoggingOptionsPayloadHasBeenSet() const { return m_loggingOptionsPayloadHasBeenSet; }
    template<typename LoggingOptionsPayloadT = LoggingOptionsPayload>
    void SetLoggingOptionsPayload(LoggingOptionsPayloadT&& value) { m_loggingOptionsPayloadHasBeenSet = true; m_loggingOptionsPayload = std::forward<LoggingOptionsPayloadT>(value); }
    template<typename LoggingOptionsPayloadT = LoggingOptionsPayload>
    SetLoggingOptionsRequest& WithLoggingOptionsPayload(LoggingOptionsPayloadT&& value) { SetLoggingOptionsPayload(std::forward<LoggingOptionsPayloadT>(value)); return *this;}
    ///@}
  private:

    LoggingOptionsPayload m_loggingOptionsPayload;
    bool m_loggingOptionsPayloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
