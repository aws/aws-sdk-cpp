/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class ModifyDBSubnetGroupRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API ModifyDBSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBSubnetGroup"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase string.
     * You can't modify the default subnet group.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase string.
     * You can't modify the default subnet group.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase string.
     * You can't modify the default subnet group.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase string.
     * You can't modify the default subnet group.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase string.
     * You can't modify the default subnet group.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase string.
     * You can't modify the default subnet group.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase string.
     * You can't modify the default subnet group.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase string.
     * You can't modify the default subnet group.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupDescription() const{ return m_dBSubnetGroupDescription; }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline bool DBSubnetGroupDescriptionHasBeenSet() const { return m_dBSubnetGroupDescriptionHasBeenSet; }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(const Aws::String& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = value; }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(Aws::String&& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = std::move(value); }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(const char* value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription.assign(value); }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupDescription(const Aws::String& value) { SetDBSubnetGroupDescription(value); return *this;}

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupDescription(Aws::String&& value) { SetDBSubnetGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupDescription(const char* value) { SetDBSubnetGroupDescription(value); return *this;}


    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_dBSubnetGroupDescription;
    bool m_dBSubnetGroupDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
