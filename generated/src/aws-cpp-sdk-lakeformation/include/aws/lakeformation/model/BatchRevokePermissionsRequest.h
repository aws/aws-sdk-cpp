/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/BatchPermissionsRequestEntry.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class BatchRevokePermissionsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API BatchRevokePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchRevokePermissions"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline BatchRevokePermissionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline BatchRevokePermissionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline BatchRevokePermissionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>A list of up to 20 entries for resource permissions to be revoked by batch
     * operation to the principal.</p>
     */
    inline const Aws::Vector<BatchPermissionsRequestEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>A list of up to 20 entries for resource permissions to be revoked by batch
     * operation to the principal.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>A list of up to 20 entries for resource permissions to be revoked by batch
     * operation to the principal.</p>
     */
    inline void SetEntries(const Aws::Vector<BatchPermissionsRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>A list of up to 20 entries for resource permissions to be revoked by batch
     * operation to the principal.</p>
     */
    inline void SetEntries(Aws::Vector<BatchPermissionsRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>A list of up to 20 entries for resource permissions to be revoked by batch
     * operation to the principal.</p>
     */
    inline BatchRevokePermissionsRequest& WithEntries(const Aws::Vector<BatchPermissionsRequestEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of up to 20 entries for resource permissions to be revoked by batch
     * operation to the principal.</p>
     */
    inline BatchRevokePermissionsRequest& WithEntries(Aws::Vector<BatchPermissionsRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>A list of up to 20 entries for resource permissions to be revoked by batch
     * operation to the principal.</p>
     */
    inline BatchRevokePermissionsRequest& AddEntries(const BatchPermissionsRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>A list of up to 20 entries for resource permissions to be revoked by batch
     * operation to the principal.</p>
     */
    inline BatchRevokePermissionsRequest& AddEntries(BatchPermissionsRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::Vector<BatchPermissionsRequestEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
