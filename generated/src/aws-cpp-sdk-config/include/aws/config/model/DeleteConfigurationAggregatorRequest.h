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
    AWS_CONFIGSERVICE_API DeleteConfigurationAggregatorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfigurationAggregator"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const { return m_configurationAggregatorName; }
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }
    template<typename ConfigurationAggregatorNameT = Aws::String>
    void SetConfigurationAggregatorName(ConfigurationAggregatorNameT&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::forward<ConfigurationAggregatorNameT>(value); }
    template<typename ConfigurationAggregatorNameT = Aws::String>
    DeleteConfigurationAggregatorRequest& WithConfigurationAggregatorName(ConfigurationAggregatorNameT&& value) { SetConfigurationAggregatorName(std::forward<ConfigurationAggregatorNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
