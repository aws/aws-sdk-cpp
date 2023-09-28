/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/model/LoggingConfig.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class PutModelInvocationLoggingConfigurationRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API PutModelInvocationLoggingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutModelInvocationLoggingConfiguration"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    /**
     * <p>The logging configuration values to set.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }

    /**
     * <p>The logging configuration values to set.</p>
     */
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }

    /**
     * <p>The logging configuration values to set.</p>
     */
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = value; }

    /**
     * <p>The logging configuration values to set.</p>
     */
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::move(value); }

    /**
     * <p>The logging configuration values to set.</p>
     */
    inline PutModelInvocationLoggingConfigurationRequest& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}

    /**
     * <p>The logging configuration values to set.</p>
     */
    inline PutModelInvocationLoggingConfigurationRequest& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}

  private:

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
