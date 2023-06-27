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
    AWS_APPFABRIC_API Tenant();
    AWS_APPFABRIC_API Tenant(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Tenant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantIdentifier() const{ return m_tenantIdentifier; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline bool TenantIdentifierHasBeenSet() const { return m_tenantIdentifierHasBeenSet; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantIdentifier(const Aws::String& value) { m_tenantIdentifierHasBeenSet = true; m_tenantIdentifier = value; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantIdentifier(Aws::String&& value) { m_tenantIdentifierHasBeenSet = true; m_tenantIdentifier = std::move(value); }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantIdentifier(const char* value) { m_tenantIdentifierHasBeenSet = true; m_tenantIdentifier.assign(value); }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline Tenant& WithTenantIdentifier(const Aws::String& value) { SetTenantIdentifier(value); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline Tenant& WithTenantIdentifier(Aws::String&& value) { SetTenantIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline Tenant& WithTenantIdentifier(const char* value) { SetTenantIdentifier(value); return *this;}


    /**
     * <p>The display name of the tenant.</p>
     */
    inline const Aws::String& GetTenantDisplayName() const{ return m_tenantDisplayName; }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline bool TenantDisplayNameHasBeenSet() const { return m_tenantDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline void SetTenantDisplayName(const Aws::String& value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName = value; }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline void SetTenantDisplayName(Aws::String&& value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName = std::move(value); }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline void SetTenantDisplayName(const char* value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName.assign(value); }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline Tenant& WithTenantDisplayName(const Aws::String& value) { SetTenantDisplayName(value); return *this;}

    /**
     * <p>The display name of the tenant.</p>
     */
    inline Tenant& WithTenantDisplayName(Aws::String&& value) { SetTenantDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the tenant.</p>
     */
    inline Tenant& WithTenantDisplayName(const char* value) { SetTenantDisplayName(value); return *this;}

  private:

    Aws::String m_tenantIdentifier;
    bool m_tenantIdentifierHasBeenSet = false;

    Aws::String m_tenantDisplayName;
    bool m_tenantDisplayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
