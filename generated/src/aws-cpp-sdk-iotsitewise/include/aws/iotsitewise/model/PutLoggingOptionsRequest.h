/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/LoggingOptions.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class PutLoggingOptionsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API PutLoggingOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLoggingOptions"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The logging options to set.</p>
     */
    inline const LoggingOptions& GetLoggingOptions() const { return m_loggingOptions; }
    inline bool LoggingOptionsHasBeenSet() const { return m_loggingOptionsHasBeenSet; }
    template<typename LoggingOptionsT = LoggingOptions>
    void SetLoggingOptions(LoggingOptionsT&& value) { m_loggingOptionsHasBeenSet = true; m_loggingOptions = std::forward<LoggingOptionsT>(value); }
    template<typename LoggingOptionsT = LoggingOptions>
    PutLoggingOptionsRequest& WithLoggingOptions(LoggingOptionsT&& value) { SetLoggingOptions(std::forward<LoggingOptionsT>(value)); return *this;}
    ///@}
  private:

    LoggingOptions m_loggingOptions;
    bool m_loggingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
