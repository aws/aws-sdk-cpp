/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>ModifyGlobalCluster</a>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyGlobalClusterMessage">AWS
   * API Reference</a></p>
   */
  class ModifyGlobalClusterRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API ModifyGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyGlobalCluster"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the global cluster being modified. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing global cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The identifier for the global cluster being modified. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing global cluster.</p> </li> </ul>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the global cluster being modified. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing global cluster.</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The identifier for the global cluster being modified. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing global cluster.</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier for the global cluster being modified. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing global cluster.</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The identifier for the global cluster being modified. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing global cluster.</p> </li> </ul>
     */
    inline ModifyGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier for the global cluster being modified. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing global cluster.</p> </li> </ul>
     */
    inline ModifyGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the global cluster being modified. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing global cluster.</p> </li> </ul>
     */
    inline ModifyGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>The new identifier for a global cluster when you modify a global cluster.
     * This value is stored as a lowercase string.</p> <ul> <li> <p>Must contain from 1
     * to 63 letters, numbers, or hyphens</p> <p>The first character must be a
     * letter</p> <p>Can't end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul> <p>Example: <code>my-cluster2</code> </p>
     */
    inline const Aws::String& GetNewGlobalClusterIdentifier() const{ return m_newGlobalClusterIdentifier; }

    /**
     * <p>The new identifier for a global cluster when you modify a global cluster.
     * This value is stored as a lowercase string.</p> <ul> <li> <p>Must contain from 1
     * to 63 letters, numbers, or hyphens</p> <p>The first character must be a
     * letter</p> <p>Can't end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul> <p>Example: <code>my-cluster2</code> </p>
     */
    inline bool NewGlobalClusterIdentifierHasBeenSet() const { return m_newGlobalClusterIdentifierHasBeenSet; }

    /**
     * <p>The new identifier for a global cluster when you modify a global cluster.
     * This value is stored as a lowercase string.</p> <ul> <li> <p>Must contain from 1
     * to 63 letters, numbers, or hyphens</p> <p>The first character must be a
     * letter</p> <p>Can't end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul> <p>Example: <code>my-cluster2</code> </p>
     */
    inline void SetNewGlobalClusterIdentifier(const Aws::String& value) { m_newGlobalClusterIdentifierHasBeenSet = true; m_newGlobalClusterIdentifier = value; }

    /**
     * <p>The new identifier for a global cluster when you modify a global cluster.
     * This value is stored as a lowercase string.</p> <ul> <li> <p>Must contain from 1
     * to 63 letters, numbers, or hyphens</p> <p>The first character must be a
     * letter</p> <p>Can't end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul> <p>Example: <code>my-cluster2</code> </p>
     */
    inline void SetNewGlobalClusterIdentifier(Aws::String&& value) { m_newGlobalClusterIdentifierHasBeenSet = true; m_newGlobalClusterIdentifier = std::move(value); }

    /**
     * <p>The new identifier for a global cluster when you modify a global cluster.
     * This value is stored as a lowercase string.</p> <ul> <li> <p>Must contain from 1
     * to 63 letters, numbers, or hyphens</p> <p>The first character must be a
     * letter</p> <p>Can't end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul> <p>Example: <code>my-cluster2</code> </p>
     */
    inline void SetNewGlobalClusterIdentifier(const char* value) { m_newGlobalClusterIdentifierHasBeenSet = true; m_newGlobalClusterIdentifier.assign(value); }

    /**
     * <p>The new identifier for a global cluster when you modify a global cluster.
     * This value is stored as a lowercase string.</p> <ul> <li> <p>Must contain from 1
     * to 63 letters, numbers, or hyphens</p> <p>The first character must be a
     * letter</p> <p>Can't end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul> <p>Example: <code>my-cluster2</code> </p>
     */
    inline ModifyGlobalClusterRequest& WithNewGlobalClusterIdentifier(const Aws::String& value) { SetNewGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The new identifier for a global cluster when you modify a global cluster.
     * This value is stored as a lowercase string.</p> <ul> <li> <p>Must contain from 1
     * to 63 letters, numbers, or hyphens</p> <p>The first character must be a
     * letter</p> <p>Can't end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul> <p>Example: <code>my-cluster2</code> </p>
     */
    inline ModifyGlobalClusterRequest& WithNewGlobalClusterIdentifier(Aws::String&& value) { SetNewGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The new identifier for a global cluster when you modify a global cluster.
     * This value is stored as a lowercase string.</p> <ul> <li> <p>Must contain from 1
     * to 63 letters, numbers, or hyphens</p> <p>The first character must be a
     * letter</p> <p>Can't end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul> <p>Example: <code>my-cluster2</code> </p>
     */
    inline ModifyGlobalClusterRequest& WithNewGlobalClusterIdentifier(const char* value) { SetNewGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>Indicates if the global cluster has deletion protection enabled. The global
     * cluster can't be deleted when deletion protection is enabled. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>Indicates if the global cluster has deletion protection enabled. The global
     * cluster can't be deleted when deletion protection is enabled. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>Indicates if the global cluster has deletion protection enabled. The global
     * cluster can't be deleted when deletion protection is enabled. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>Indicates if the global cluster has deletion protection enabled. The global
     * cluster can't be deleted when deletion protection is enabled. </p>
     */
    inline ModifyGlobalClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_newGlobalClusterIdentifier;
    bool m_newGlobalClusterIdentifierHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
