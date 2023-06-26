/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/ivschat/model/DestinationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class UpdateLoggingConfigurationRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API UpdateLoggingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLoggingConfiguration"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged. There can be only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline const DestinationConfiguration& GetDestinationConfiguration() const{ return m_destinationConfiguration; }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged. There can be only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged. There can be only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline void SetDestinationConfiguration(const DestinationConfiguration& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = value; }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged. There can be only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline void SetDestinationConfiguration(DestinationConfiguration&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged. There can be only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline UpdateLoggingConfigurationRequest& WithDestinationConfiguration(const DestinationConfiguration& value) { SetDestinationConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged. There can be only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline UpdateLoggingConfigurationRequest& WithDestinationConfiguration(DestinationConfiguration&& value) { SetDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Identifier of the logging configuration to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>Identifier of the logging configuration to be updated.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>Identifier of the logging configuration to be updated.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>Identifier of the logging configuration to be updated.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>Identifier of the logging configuration to be updated.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>Identifier of the logging configuration to be updated.</p>
     */
    inline UpdateLoggingConfigurationRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>Identifier of the logging configuration to be updated.</p>
     */
    inline UpdateLoggingConfigurationRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the logging configuration to be updated.</p>
     */
    inline UpdateLoggingConfigurationRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline UpdateLoggingConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline UpdateLoggingConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline UpdateLoggingConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    DestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
