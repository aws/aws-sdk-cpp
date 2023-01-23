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
    AWS_IOTSITEWISE_API PutLoggingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLoggingOptions"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The logging options to set.</p>
     */
    inline const LoggingOptions& GetLoggingOptions() const{ return m_loggingOptions; }

    /**
     * <p>The logging options to set.</p>
     */
    inline bool LoggingOptionsHasBeenSet() const { return m_loggingOptionsHasBeenSet; }

    /**
     * <p>The logging options to set.</p>
     */
    inline void SetLoggingOptions(const LoggingOptions& value) { m_loggingOptionsHasBeenSet = true; m_loggingOptions = value; }

    /**
     * <p>The logging options to set.</p>
     */
    inline void SetLoggingOptions(LoggingOptions&& value) { m_loggingOptionsHasBeenSet = true; m_loggingOptions = std::move(value); }

    /**
     * <p>The logging options to set.</p>
     */
    inline PutLoggingOptionsRequest& WithLoggingOptions(const LoggingOptions& value) { SetLoggingOptions(value); return *this;}

    /**
     * <p>The logging options to set.</p>
     */
    inline PutLoggingOptionsRequest& WithLoggingOptions(LoggingOptions&& value) { SetLoggingOptions(std::move(value)); return *this;}

  private:

    LoggingOptions m_loggingOptions;
    bool m_loggingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
