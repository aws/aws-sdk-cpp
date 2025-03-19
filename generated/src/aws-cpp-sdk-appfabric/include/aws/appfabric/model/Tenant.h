/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about an application tenant.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/Tenant">AWS
   * API Reference</a></p>
   */
  class Tenant
  {
  public:
    AWS_APPFABRIC_API Tenant() = default;
    AWS_APPFABRIC_API Tenant(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Tenant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantIdentifier() const { return m_tenantIdentifier; }
    inline bool TenantIdentifierHasBeenSet() const { return m_tenantIdentifierHasBeenSet; }
    template<typename TenantIdentifierT = Aws::String>
    void SetTenantIdentifier(TenantIdentifierT&& value) { m_tenantIdentifierHasBeenSet = true; m_tenantIdentifier = std::forward<TenantIdentifierT>(value); }
    template<typename TenantIdentifierT = Aws::String>
    Tenant& WithTenantIdentifier(TenantIdentifierT&& value) { SetTenantIdentifier(std::forward<TenantIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the tenant.</p>
     */
    inline const Aws::String& GetTenantDisplayName() const { return m_tenantDisplayName; }
    inline bool TenantDisplayNameHasBeenSet() const { return m_tenantDisplayNameHasBeenSet; }
    template<typename TenantDisplayNameT = Aws::String>
    void SetTenantDisplayName(TenantDisplayNameT&& value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName = std::forward<TenantDisplayNameT>(value); }
    template<typename TenantDisplayNameT = Aws::String>
    Tenant& WithTenantDisplayName(TenantDisplayNameT&& value) { SetTenantDisplayName(std::forward<TenantDisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tenantIdentifier;
    bool m_tenantIdentifierHasBeenSet = false;

    Aws::String m_tenantDisplayName;
    bool m_tenantDisplayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
