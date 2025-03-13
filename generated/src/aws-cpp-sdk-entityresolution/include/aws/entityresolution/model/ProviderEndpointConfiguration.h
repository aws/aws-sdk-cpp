/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/ProviderMarketplaceConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The required configuration fields to use with the provider
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ProviderEndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class ProviderEndpointConfiguration
  {
  public:
    AWS_ENTITYRESOLUTION_API ProviderEndpointConfiguration() = default;
    AWS_ENTITYRESOLUTION_API ProviderEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifiers of the provider service, from Data Exchange.</p>
     */
    inline const ProviderMarketplaceConfiguration& GetMarketplaceConfiguration() const { return m_marketplaceConfiguration; }
    inline bool MarketplaceConfigurationHasBeenSet() const { return m_marketplaceConfigurationHasBeenSet; }
    template<typename MarketplaceConfigurationT = ProviderMarketplaceConfiguration>
    void SetMarketplaceConfiguration(MarketplaceConfigurationT&& value) { m_marketplaceConfigurationHasBeenSet = true; m_marketplaceConfiguration = std::forward<MarketplaceConfigurationT>(value); }
    template<typename MarketplaceConfigurationT = ProviderMarketplaceConfiguration>
    ProviderEndpointConfiguration& WithMarketplaceConfiguration(MarketplaceConfigurationT&& value) { SetMarketplaceConfiguration(std::forward<MarketplaceConfigurationT>(value)); return *this;}
    ///@}
  private:

    ProviderMarketplaceConfiguration m_marketplaceConfiguration;
    bool m_marketplaceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
