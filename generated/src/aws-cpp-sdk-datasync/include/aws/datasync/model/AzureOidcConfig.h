/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataSync {
namespace Model {

/**
 * <p>External identity parameters for Azure Blob Storage.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/AzureOidcConfig">AWS
 * API Reference</a></p>
 */
class AzureOidcConfig {
 public:
  AWS_DATASYNC_API AzureOidcConfig() = default;
  AWS_DATASYNC_API AzureOidcConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API AzureOidcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Azure tenant ID string.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  AzureOidcConfig& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azure client ID string.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  AzureOidcConfig& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tenantId;

  Aws::String m_clientId;
  bool m_tenantIdHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
