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
  class AWS_IOTSITEWISE_API PutLoggingOptionsRequest : public IoTSiteWiseRequest
  {
  public:
    PutLoggingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLoggingOptions"; }

    Aws::String SerializePayload() const override;


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
    bool m_loggingOptionsHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
