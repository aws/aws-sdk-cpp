/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/CustomerNodeEndpoint.h>
#include <aws/elasticache/model/SourceAuthenticationConfiguration.h>
#include <aws/elasticache/model/SourceTlsConfiguration.h>

#include <utility>

namespace Aws {
namespace ElastiCache {
namespace Model {

/**
 */
class PrepareMigrationRequest : public ElastiCacheRequest {
 public:
  AWS_ELASTICACHE_API PrepareMigrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PrepareMigration"; }

  AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

 protected:
  AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The name of the serverless cache to prepare for migration.</p>
   */
  inline const Aws::String& GetServerlessCacheName() const { return m_serverlessCacheName; }
  inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
  template <typename ServerlessCacheNameT = Aws::String>
  void SetServerlessCacheName(ServerlessCacheNameT&& value) {
    m_serverlessCacheNameHasBeenSet = true;
    m_serverlessCacheName = std::forward<ServerlessCacheNameT>(value);
  }
  template <typename ServerlessCacheNameT = Aws::String>
  PrepareMigrationRequest& WithServerlessCacheName(ServerlessCacheNameT&& value) {
    SetServerlessCacheName(std::forward<ServerlessCacheNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of endpoints from which to migrate data. For serverless cache
   * migrations, the list should have only one element.</p>
   */
  inline const Aws::Vector<CustomerNodeEndpoint>& GetCustomerNodeEndpointList() const { return m_customerNodeEndpointList; }
  inline bool CustomerNodeEndpointListHasBeenSet() const { return m_customerNodeEndpointListHasBeenSet; }
  template <typename CustomerNodeEndpointListT = Aws::Vector<CustomerNodeEndpoint>>
  void SetCustomerNodeEndpointList(CustomerNodeEndpointListT&& value) {
    m_customerNodeEndpointListHasBeenSet = true;
    m_customerNodeEndpointList = std::forward<CustomerNodeEndpointListT>(value);
  }
  template <typename CustomerNodeEndpointListT = Aws::Vector<CustomerNodeEndpoint>>
  PrepareMigrationRequest& WithCustomerNodeEndpointList(CustomerNodeEndpointListT&& value) {
    SetCustomerNodeEndpointList(std::forward<CustomerNodeEndpointListT>(value));
    return *this;
  }
  template <typename CustomerNodeEndpointListT = CustomerNodeEndpoint>
  PrepareMigrationRequest& AddCustomerNodeEndpointList(CustomerNodeEndpointListT&& value) {
    m_customerNodeEndpointListHasBeenSet = true;
    m_customerNodeEndpointList.emplace_back(std::forward<CustomerNodeEndpointListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication configuration for connecting to the source during
   * migration.</p>
   */
  inline const SourceAuthenticationConfiguration& GetSourceAuthenticationConfiguration() const {
    return m_sourceAuthenticationConfiguration;
  }
  inline bool SourceAuthenticationConfigurationHasBeenSet() const { return m_sourceAuthenticationConfigurationHasBeenSet; }
  template <typename SourceAuthenticationConfigurationT = SourceAuthenticationConfiguration>
  void SetSourceAuthenticationConfiguration(SourceAuthenticationConfigurationT&& value) {
    m_sourceAuthenticationConfigurationHasBeenSet = true;
    m_sourceAuthenticationConfiguration = std::forward<SourceAuthenticationConfigurationT>(value);
  }
  template <typename SourceAuthenticationConfigurationT = SourceAuthenticationConfiguration>
  PrepareMigrationRequest& WithSourceAuthenticationConfiguration(SourceAuthenticationConfigurationT&& value) {
    SetSourceAuthenticationConfiguration(std::forward<SourceAuthenticationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TLS configuration for connecting to the source during migration.</p>
   */
  inline const SourceTlsConfiguration& GetSourceTlsConfiguration() const { return m_sourceTlsConfiguration; }
  inline bool SourceTlsConfigurationHasBeenSet() const { return m_sourceTlsConfigurationHasBeenSet; }
  template <typename SourceTlsConfigurationT = SourceTlsConfiguration>
  void SetSourceTlsConfiguration(SourceTlsConfigurationT&& value) {
    m_sourceTlsConfigurationHasBeenSet = true;
    m_sourceTlsConfiguration = std::forward<SourceTlsConfigurationT>(value);
  }
  template <typename SourceTlsConfigurationT = SourceTlsConfiguration>
  PrepareMigrationRequest& WithSourceTlsConfiguration(SourceTlsConfigurationT&& value) {
    SetSourceTlsConfiguration(std::forward<SourceTlsConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverlessCacheName;

  Aws::Vector<CustomerNodeEndpoint> m_customerNodeEndpointList;

  SourceAuthenticationConfiguration m_sourceAuthenticationConfiguration;

  SourceTlsConfiguration m_sourceTlsConfiguration;
  bool m_serverlessCacheNameHasBeenSet = false;
  bool m_customerNodeEndpointListHasBeenSet = false;
  bool m_sourceAuthenticationConfigurationHasBeenSet = false;
  bool m_sourceTlsConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
