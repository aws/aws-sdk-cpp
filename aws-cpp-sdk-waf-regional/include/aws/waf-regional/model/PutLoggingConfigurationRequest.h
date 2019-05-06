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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/waf-regional/model/LoggingConfiguration.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API PutLoggingConfigurationRequest : public WAFRegionalRequest
  {
  public:
    PutLoggingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLoggingConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>
     */
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>
     */
    inline PutLoggingConfigurationRequest& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>
     */
    inline PutLoggingConfigurationRequest& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}

  private:

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
