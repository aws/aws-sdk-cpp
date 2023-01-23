/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DeleteConfigurationAggregatorRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteConfigurationAggregatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfigurationAggregator"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline DeleteConfigurationAggregatorRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline DeleteConfigurationAggregatorRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline DeleteConfigurationAggregatorRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}

  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
