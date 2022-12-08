/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/iotevents/model/LoggingOptions.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class PutLoggingOptionsRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API PutLoggingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLoggingOptions"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The new values of the AWS IoT Events logging options.</p>
     */
    inline const LoggingOptions& GetLoggingOptions() const{ return m_loggingOptions; }

    /**
     * <p>The new values of the AWS IoT Events logging options.</p>
     */
    inline bool LoggingOptionsHasBeenSet() const { return m_loggingOptionsHasBeenSet; }

    /**
     * <p>The new values of the AWS IoT Events logging options.</p>
     */
    inline void SetLoggingOptions(const LoggingOptions& value) { m_loggingOptionsHasBeenSet = true; m_loggingOptions = value; }

    /**
     * <p>The new values of the AWS IoT Events logging options.</p>
     */
    inline void SetLoggingOptions(LoggingOptions&& value) { m_loggingOptionsHasBeenSet = true; m_loggingOptions = std::move(value); }

    /**
     * <p>The new values of the AWS IoT Events logging options.</p>
     */
    inline PutLoggingOptionsRequest& WithLoggingOptions(const LoggingOptions& value) { SetLoggingOptions(value); return *this;}

    /**
     * <p>The new values of the AWS IoT Events logging options.</p>
     */
    inline PutLoggingOptionsRequest& WithLoggingOptions(LoggingOptions&& value) { SetLoggingOptions(std::move(value)); return *this;}

  private:

    LoggingOptions m_loggingOptions;
    bool m_loggingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
