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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API BatchModifyClusterSnapshotsRequest : public RedshiftRequest
  {
  public:
    BatchModifyClusterSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchModifyClusterSnapshots"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotIdentifierList() const{ return m_snapshotIdentifierList; }

    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline bool SnapshotIdentifierListHasBeenSet() const { return m_snapshotIdentifierListHasBeenSet; }

    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline void SetSnapshotIdentifierList(const Aws::Vector<Aws::String>& value) { m_snapshotIdentifierListHasBeenSet = true; m_snapshotIdentifierList = value; }

    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline void SetSnapshotIdentifierList(Aws::Vector<Aws::String>&& value) { m_snapshotIdentifierListHasBeenSet = true; m_snapshotIdentifierList = std::move(value); }

    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline BatchModifyClusterSnapshotsRequest& WithSnapshotIdentifierList(const Aws::Vector<Aws::String>& value) { SetSnapshotIdentifierList(value); return *this;}

    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline BatchModifyClusterSnapshotsRequest& WithSnapshotIdentifierList(Aws::Vector<Aws::String>&& value) { SetSnapshotIdentifierList(std::move(value)); return *this;}

    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline BatchModifyClusterSnapshotsRequest& AddSnapshotIdentifierList(const Aws::String& value) { m_snapshotIdentifierListHasBeenSet = true; m_snapshotIdentifierList.push_back(value); return *this; }

    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline BatchModifyClusterSnapshotsRequest& AddSnapshotIdentifierList(Aws::String&& value) { m_snapshotIdentifierListHasBeenSet = true; m_snapshotIdentifierList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of snapshot identifiers you want to modify.</p>
     */
    inline BatchModifyClusterSnapshotsRequest& AddSnapshotIdentifierList(const char* value) { m_snapshotIdentifierListHasBeenSet = true; m_snapshotIdentifierList.push_back(value); return *this; }


    /**
     * <p>The number of days that a manual snapshot is retained. If you specify the
     * value -1, the manual snapshot is retained indefinitely.</p> <p>The number must
     * be either -1 or an integer between 1 and 3,653.</p> <p>If you decrease the
     * manual snapshot retention period from its current value, existing manual
     * snapshots that fall outside of the new retention period will return an error. If
     * you want to suppress the errors and delete the snapshots, use the force option.
     * </p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that a manual snapshot is retained. If you specify the
     * value -1, the manual snapshot is retained indefinitely.</p> <p>The number must
     * be either -1 or an integer between 1 and 3,653.</p> <p>If you decrease the
     * manual snapshot retention period from its current value, existing manual
     * snapshots that fall outside of the new retention period will return an error. If
     * you want to suppress the errors and delete the snapshots, use the force option.
     * </p>
     */
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that a manual snapshot is retained. If you specify the
     * value -1, the manual snapshot is retained indefinitely.</p> <p>The number must
     * be either -1 or an integer between 1 and 3,653.</p> <p>If you decrease the
     * manual snapshot retention period from its current value, existing manual
     * snapshots that fall outside of the new retention period will return an error. If
     * you want to suppress the errors and delete the snapshots, use the force option.
     * </p>
     */
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that a manual snapshot is retained. If you specify the
     * value -1, the manual snapshot is retained indefinitely.</p> <p>The number must
     * be either -1 or an integer between 1 and 3,653.</p> <p>If you decrease the
     * manual snapshot retention period from its current value, existing manual
     * snapshots that fall outside of the new retention period will return an error. If
     * you want to suppress the errors and delete the snapshots, use the force option.
     * </p>
     */
    inline BatchModifyClusterSnapshotsRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>A boolean value indicating whether to override an exception if the retention
     * period has passed. </p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>A boolean value indicating whether to override an exception if the retention
     * period has passed. </p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>A boolean value indicating whether to override an exception if the retention
     * period has passed. </p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>A boolean value indicating whether to override an exception if the retention
     * period has passed. </p>
     */
    inline BatchModifyClusterSnapshotsRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_snapshotIdentifierList;
    bool m_snapshotIdentifierListHasBeenSet;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
