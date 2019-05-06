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
  class AWS_NEPTUNE_API ModifyDBClusterSnapshotAttributeRequest : public NeptuneRequest
  {
  public:
    ModifyDBClusterSnapshotAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBClusterSnapshotAttribute"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the DB cluster snapshot to modify the attributes for.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier for the DB cluster snapshot to modify the attributes for.</p>
     */
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the DB cluster snapshot to modify the attributes for.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB cluster snapshot to modify the attributes for.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier for the DB cluster snapshot to modify the attributes for.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the DB cluster snapshot to modify the attributes for.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB cluster snapshot to modify the attributes for.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the DB cluster snapshot to modify the attributes for.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The name of the DB cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other AWS accounts to copy or restore a manual DB cluster
     * snapshot, set this value to <code>restore</code>.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the DB cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other AWS accounts to copy or restore a manual DB cluster
     * snapshot, set this value to <code>restore</code>.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other AWS accounts to copy or restore a manual DB cluster
     * snapshot, set this value to <code>restore</code>.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the DB cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other AWS accounts to copy or restore a manual DB cluster
     * snapshot, set this value to <code>restore</code>.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the DB cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other AWS accounts to copy or restore a manual DB cluster
     * snapshot, set this value to <code>restore</code>.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the DB cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other AWS accounts to copy or restore a manual DB cluster
     * snapshot, set this value to <code>restore</code>.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the DB cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other AWS accounts to copy or restore a manual DB cluster
     * snapshot, set this value to <code>restore</code>.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other AWS accounts to copy or restore a manual DB cluster
     * snapshot, set this value to <code>restore</code>.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other AWS accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more AWS
     * account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any AWS account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all AWS accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValuesToAdd() const{ return m_valuesToAdd; }

    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other AWS accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more AWS
     * account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any AWS account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all AWS accounts.</p>
     */
    inline bool ValuesToAddHasBeenSet() const { return m_valuesToAddHasBeenSet; }

    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other AWS accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more AWS
     * account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any AWS account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all AWS accounts.</p>
     */
    inline void SetValuesToAdd(const Aws::Vector<Aws::String>& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd = value; }

    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other AWS accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more AWS
     * account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any AWS account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all AWS accounts.</p>
     */
    inline void SetValuesToAdd(Aws::Vector<Aws::String>&& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd = std::move(value); }

    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other AWS accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more AWS
     * account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any AWS account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all AWS accounts.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithValuesToAdd(const Aws::Vector<Aws::String>& value) { SetValuesToAdd(value); return *this;}

    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other AWS accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more AWS
     * account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any AWS account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all AWS accounts.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithValuesToAdd(Aws::Vector<Aws::String>&& value) { SetValuesToAdd(std::move(value)); return *this;}

    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other AWS accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more AWS
     * account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any AWS account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all AWS accounts.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToAdd(const Aws::String& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.push_back(value); return *this; }

    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other AWS accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more AWS
     * account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any AWS account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all AWS accounts.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToAdd(Aws::String&& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other AWS accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more AWS
     * account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any AWS account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all AWS accounts.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToAdd(const char* value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.push_back(value); return *this; }


    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other AWS accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more AWS account identifiers, or <code>all</code> to
     * remove authorization for any AWS account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an AWS account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValuesToRemove() const{ return m_valuesToRemove; }

    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other AWS accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more AWS account identifiers, or <code>all</code> to
     * remove authorization for any AWS account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an AWS account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline bool ValuesToRemoveHasBeenSet() const { return m_valuesToRemoveHasBeenSet; }

    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other AWS accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more AWS account identifiers, or <code>all</code> to
     * remove authorization for any AWS account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an AWS account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline void SetValuesToRemove(const Aws::Vector<Aws::String>& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove = value; }

    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other AWS accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more AWS account identifiers, or <code>all</code> to
     * remove authorization for any AWS account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an AWS account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline void SetValuesToRemove(Aws::Vector<Aws::String>&& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove = std::move(value); }

    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other AWS accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more AWS account identifiers, or <code>all</code> to
     * remove authorization for any AWS account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an AWS account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithValuesToRemove(const Aws::Vector<Aws::String>& value) { SetValuesToRemove(value); return *this;}

    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other AWS accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more AWS account identifiers, or <code>all</code> to
     * remove authorization for any AWS account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an AWS account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& WithValuesToRemove(Aws::Vector<Aws::String>&& value) { SetValuesToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other AWS accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more AWS account identifiers, or <code>all</code> to
     * remove authorization for any AWS account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an AWS account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToRemove(const Aws::String& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.push_back(value); return *this; }

    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other AWS accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more AWS account identifiers, or <code>all</code> to
     * remove authorization for any AWS account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an AWS account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToRemove(Aws::String&& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other AWS accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more AWS account identifiers, or <code>all</code> to
     * remove authorization for any AWS account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an AWS account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline ModifyDBClusterSnapshotAttributeRequest& AddValuesToRemove(const char* value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.push_back(value); return *this; }

  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    Aws::Vector<Aws::String> m_valuesToAdd;
    bool m_valuesToAddHasBeenSet;

    Aws::Vector<Aws::String> m_valuesToRemove;
    bool m_valuesToRemoveHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
