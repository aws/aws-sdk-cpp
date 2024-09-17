/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to
   * <a>ModifyDBClusterSnapshotAttribute</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBClusterSnapshotAttributeMessage">AWS
   * API Reference</a></p>
   */
  class ModifyDBClusterSnapshotAttributeRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API ModifyDBClusterSnapshotAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBClusterSnapshotAttribute"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier for the cluster snapshot to modify the attributes for.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }
    inline ModifyDBClusterSnapshotAttributeRequest& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}
    inline ModifyDBClusterSnapshotAttributeRequest& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}
    inline ModifyDBClusterSnapshotAttributeRequest& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon Web Services accounts to copy or restore a manual
     * cluster snapshot, set this value to <code>restore</code>.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline ModifyDBClusterSnapshotAttributeRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline ModifyDBClusterSnapshotAttributeRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline ModifyDBClusterSnapshotAttributeRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual cluster snapshot, set this list to include
     * one or more Amazon Web Services account IDs. To make the manual cluster snapshot
     * restorable by any Amazon Web Services account, set it to <code>all</code>. Do
     * not add the <code>all</code> value for any manual cluster snapshots that contain
     * private information that you don't want to be available to all Amazon Web
     * Services accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValuesToAdd() const{ return m_valuesToAdd; }
    inline bool ValuesToAddHasBeenSet() const { return m_valuesToAddHasBeenSet; }
    inline void SetValuesToAdd(const Aws::Vector<Aws::String>& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd = value; }
    inline void SetValuesToAdd(Aws::Vector<Aws::String>&& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd = std::move(value); }
    inline ModifyDBClusterSnapshotAttributeRequest& WithValuesToAdd(const Aws::Vector<Aws::String>& value) { SetValuesToAdd(value); return *this;}
    inline ModifyDBClusterSnapshotAttributeRequest& WithValuesToAdd(Aws::Vector<Aws::String>&& value) { SetValuesToAdd(std::move(value)); return *this;}
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToAdd(const Aws::String& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.push_back(value); return *this; }
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToAdd(Aws::String&& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.push_back(std::move(value)); return *this; }
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToAdd(const char* value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of cluster snapshot attributes to remove from the attribute specified
     * by <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon
     * Web Services accounts to copy or restore a manual cluster snapshot, set this
     * list to include one or more Amazon Web Services account identifiers. To remove
     * authorization for any Amazon Web Services account to copy or restore the cluster
     * snapshot, set it to <code>all</code> . If you specify <code>all</code>, an
     * Amazon Web Services account whose account ID is explicitly added to the
     * <code>restore</code> attribute can still copy or restore a manual cluster
     * snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValuesToRemove() const{ return m_valuesToRemove; }
    inline bool ValuesToRemoveHasBeenSet() const { return m_valuesToRemoveHasBeenSet; }
    inline void SetValuesToRemove(const Aws::Vector<Aws::String>& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove = value; }
    inline void SetValuesToRemove(Aws::Vector<Aws::String>&& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove = std::move(value); }
    inline ModifyDBClusterSnapshotAttributeRequest& WithValuesToRemove(const Aws::Vector<Aws::String>& value) { SetValuesToRemove(value); return *this;}
    inline ModifyDBClusterSnapshotAttributeRequest& WithValuesToRemove(Aws::Vector<Aws::String>&& value) { SetValuesToRemove(std::move(value)); return *this;}
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToRemove(const Aws::String& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.push_back(value); return *this; }
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToRemove(Aws::String&& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.push_back(std::move(value)); return *this; }
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToRemove(const char* value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_valuesToAdd;
    bool m_valuesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_valuesToRemove;
    bool m_valuesToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
