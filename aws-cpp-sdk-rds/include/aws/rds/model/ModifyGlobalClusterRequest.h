/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API ModifyGlobalClusterRequest : public RDSRequest
  {
  public:
    ModifyGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyGlobalCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> The DB cluster identifier for the global cluster being modified. This
     * parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p> The DB cluster identifier for the global cluster being modified. This
     * parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p> The DB cluster identifier for the global cluster being modified. This
     * parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p> The DB cluster identifier for the global cluster being modified. This
     * parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p> The DB cluster identifier for the global cluster being modified. This
     * parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p> The DB cluster identifier for the global cluster being modified. This
     * parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline ModifyGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p> The DB cluster identifier for the global cluster being modified. This
     * parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline ModifyGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p> The DB cluster identifier for the global cluster being modified. This
     * parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline ModifyGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p> The new cluster identifier for the global database cluster when modifying a
     * global database cluster. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens</p> </li> <li> <p>The first character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     * <p>Example: <code>my-cluster2</code> </p>
     */
    inline const Aws::String& GetNewGlobalClusterIdentifier() const{ return m_newGlobalClusterIdentifier; }

    /**
     * <p> The new cluster identifier for the global database cluster when modifying a
     * global database cluster. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens</p> </li> <li> <p>The first character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     * <p>Example: <code>my-cluster2</code> </p>
     */
    inline bool NewGlobalClusterIdentifierHasBeenSet() const { return m_newGlobalClusterIdentifierHasBeenSet; }

    /**
     * <p> The new cluster identifier for the global database cluster when modifying a
     * global database cluster. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens</p> </li> <li> <p>The first character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     * <p>Example: <code>my-cluster2</code> </p>
     */
    inline void SetNewGlobalClusterIdentifier(const Aws::String& value) { m_newGlobalClusterIdentifierHasBeenSet = true; m_newGlobalClusterIdentifier = value; }

    /**
     * <p> The new cluster identifier for the global database cluster when modifying a
     * global database cluster. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens</p> </li> <li> <p>The first character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     * <p>Example: <code>my-cluster2</code> </p>
     */
    inline void SetNewGlobalClusterIdentifier(Aws::String&& value) { m_newGlobalClusterIdentifierHasBeenSet = true; m_newGlobalClusterIdentifier = std::move(value); }

    /**
     * <p> The new cluster identifier for the global database cluster when modifying a
     * global database cluster. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens</p> </li> <li> <p>The first character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     * <p>Example: <code>my-cluster2</code> </p>
     */
    inline void SetNewGlobalClusterIdentifier(const char* value) { m_newGlobalClusterIdentifierHasBeenSet = true; m_newGlobalClusterIdentifier.assign(value); }

    /**
     * <p> The new cluster identifier for the global database cluster when modifying a
     * global database cluster. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens</p> </li> <li> <p>The first character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     * <p>Example: <code>my-cluster2</code> </p>
     */
    inline ModifyGlobalClusterRequest& WithNewGlobalClusterIdentifier(const Aws::String& value) { SetNewGlobalClusterIdentifier(value); return *this;}

    /**
     * <p> The new cluster identifier for the global database cluster when modifying a
     * global database cluster. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens</p> </li> <li> <p>The first character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     * <p>Example: <code>my-cluster2</code> </p>
     */
    inline ModifyGlobalClusterRequest& WithNewGlobalClusterIdentifier(Aws::String&& value) { SetNewGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p> The new cluster identifier for the global database cluster when modifying a
     * global database cluster. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens</p> </li> <li> <p>The first character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     * <p>Example: <code>my-cluster2</code> </p>
     */
    inline ModifyGlobalClusterRequest& WithNewGlobalClusterIdentifier(const char* value) { SetNewGlobalClusterIdentifier(value); return *this;}


    /**
     * <p> Indicates if the global database cluster has deletion protection enabled.
     * The global database cluster can't be deleted when deletion protection is
     * enabled. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p> Indicates if the global database cluster has deletion protection enabled.
     * The global database cluster can't be deleted when deletion protection is
     * enabled. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p> Indicates if the global database cluster has deletion protection enabled.
     * The global database cluster can't be deleted when deletion protection is
     * enabled. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p> Indicates if the global database cluster has deletion protection enabled.
     * The global database cluster can't be deleted when deletion protection is
     * enabled. </p>
     */
    inline ModifyGlobalClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet;

    Aws::String m_newGlobalClusterIdentifier;
    bool m_newGlobalClusterIdentifierHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
