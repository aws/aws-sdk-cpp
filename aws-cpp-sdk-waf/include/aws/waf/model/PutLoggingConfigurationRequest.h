/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/waf/model/LoggingConfiguration.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class PutLoggingConfigurationRequest : public WAFRequest
  {
  public:
    AWS_WAF_API PutLoggingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLoggingConfiguration"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>  <p>When specifying <code>Type</code> in
     * <code>RedactedFields</code>, you must use one of the following values:
     * <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> 
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>  <p>When specifying <code>Type</code> in
     * <code>RedactedFields</code>, you must use one of the following values:
     * <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> 
     */
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>  <p>When specifying <code>Type</code> in
     * <code>RedactedFields</code>, you must use one of the following values:
     * <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> 
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>  <p>When specifying <code>Type</code> in
     * <code>RedactedFields</code>, you must use one of the following values:
     * <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> 
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>  <p>When specifying <code>Type</code> in
     * <code>RedactedFields</code>, you must use one of the following values:
     * <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> 
     */
    inline PutLoggingConfigurationRequest& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The Amazon Kinesis Data Firehose that contains the inspected traffic
     * information, the redacted fields details, and the Amazon Resource Name (ARN) of
     * the web ACL to monitor.</p>  <p>When specifying <code>Type</code> in
     * <code>RedactedFields</code>, you must use one of the following values:
     * <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> 
     */
    inline PutLoggingConfigurationRequest& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}

  private:

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
