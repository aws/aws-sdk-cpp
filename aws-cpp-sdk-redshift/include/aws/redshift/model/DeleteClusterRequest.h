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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteClusterMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DeleteClusterRequest : public RedshiftRequest
  {
  public:
    DeleteClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the cluster to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain lowercase characters.</p> </li> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain lowercase characters.</p> </li> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain lowercase characters.</p> </li> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain lowercase characters.</p> </li> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain lowercase characters.</p> </li> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain lowercase characters.</p> </li> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline DeleteClusterRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain lowercase characters.</p> </li> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline DeleteClusterRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain lowercase characters.</p> </li> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline DeleteClusterRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>Determines whether a final snapshot of the cluster is created before Amazon
     * Redshift deletes the cluster. If <code>true</code>, a final cluster snapshot is
     * not created. If <code>false</code>, a final cluster snapshot is created before
     * the cluster is deleted. </p> <note> <p>The <i>FinalClusterSnapshotIdentifier</i>
     * parameter must be specified if <i>SkipFinalClusterSnapshot</i> is
     * <code>false</code>.</p> </note> <p>Default: <code>false</code> </p>
     */
    inline bool GetSkipFinalClusterSnapshot() const{ return m_skipFinalClusterSnapshot; }

    /**
     * <p>Determines whether a final snapshot of the cluster is created before Amazon
     * Redshift deletes the cluster. If <code>true</code>, a final cluster snapshot is
     * not created. If <code>false</code>, a final cluster snapshot is created before
     * the cluster is deleted. </p> <note> <p>The <i>FinalClusterSnapshotIdentifier</i>
     * parameter must be specified if <i>SkipFinalClusterSnapshot</i> is
     * <code>false</code>.</p> </note> <p>Default: <code>false</code> </p>
     */
    inline bool SkipFinalClusterSnapshotHasBeenSet() const { return m_skipFinalClusterSnapshotHasBeenSet; }

    /**
     * <p>Determines whether a final snapshot of the cluster is created before Amazon
     * Redshift deletes the cluster. If <code>true</code>, a final cluster snapshot is
     * not created. If <code>false</code>, a final cluster snapshot is created before
     * the cluster is deleted. </p> <note> <p>The <i>FinalClusterSnapshotIdentifier</i>
     * parameter must be specified if <i>SkipFinalClusterSnapshot</i> is
     * <code>false</code>.</p> </note> <p>Default: <code>false</code> </p>
     */
    inline void SetSkipFinalClusterSnapshot(bool value) { m_skipFinalClusterSnapshotHasBeenSet = true; m_skipFinalClusterSnapshot = value; }

    /**
     * <p>Determines whether a final snapshot of the cluster is created before Amazon
     * Redshift deletes the cluster. If <code>true</code>, a final cluster snapshot is
     * not created. If <code>false</code>, a final cluster snapshot is created before
     * the cluster is deleted. </p> <note> <p>The <i>FinalClusterSnapshotIdentifier</i>
     * parameter must be specified if <i>SkipFinalClusterSnapshot</i> is
     * <code>false</code>.</p> </note> <p>Default: <code>false</code> </p>
     */
    inline DeleteClusterRequest& WithSkipFinalClusterSnapshot(bool value) { SetSkipFinalClusterSnapshot(value); return *this;}


    /**
     * <p>The identifier of the final snapshot that is to be created immediately before
     * deleting the cluster. If this parameter is provided,
     * <i>SkipFinalClusterSnapshot</i> must be <code>false</code>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetFinalClusterSnapshotIdentifier() const{ return m_finalClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the final snapshot that is to be created immediately before
     * deleting the cluster. If this parameter is provided,
     * <i>SkipFinalClusterSnapshot</i> must be <code>false</code>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline bool FinalClusterSnapshotIdentifierHasBeenSet() const { return m_finalClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the final snapshot that is to be created immediately before
     * deleting the cluster. If this parameter is provided,
     * <i>SkipFinalClusterSnapshot</i> must be <code>false</code>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetFinalClusterSnapshotIdentifier(const Aws::String& value) { m_finalClusterSnapshotIdentifierHasBeenSet = true; m_finalClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the final snapshot that is to be created immediately before
     * deleting the cluster. If this parameter is provided,
     * <i>SkipFinalClusterSnapshot</i> must be <code>false</code>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetFinalClusterSnapshotIdentifier(Aws::String&& value) { m_finalClusterSnapshotIdentifierHasBeenSet = true; m_finalClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the final snapshot that is to be created immediately before
     * deleting the cluster. If this parameter is provided,
     * <i>SkipFinalClusterSnapshot</i> must be <code>false</code>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetFinalClusterSnapshotIdentifier(const char* value) { m_finalClusterSnapshotIdentifierHasBeenSet = true; m_finalClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the final snapshot that is to be created immediately before
     * deleting the cluster. If this parameter is provided,
     * <i>SkipFinalClusterSnapshot</i> must be <code>false</code>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline DeleteClusterRequest& WithFinalClusterSnapshotIdentifier(const Aws::String& value) { SetFinalClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the final snapshot that is to be created immediately before
     * deleting the cluster. If this parameter is provided,
     * <i>SkipFinalClusterSnapshot</i> must be <code>false</code>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline DeleteClusterRequest& WithFinalClusterSnapshotIdentifier(Aws::String&& value) { SetFinalClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the final snapshot that is to be created immediately before
     * deleting the cluster. If this parameter is provided,
     * <i>SkipFinalClusterSnapshot</i> must be <code>false</code>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline DeleteClusterRequest& WithFinalClusterSnapshotIdentifier(const char* value) { SetFinalClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely.</p> <p>The value must be either -1
     * or an integer between 1 and 3,653.</p> <p>The default value is -1.</p>
     */
    inline int GetFinalClusterSnapshotRetentionPeriod() const{ return m_finalClusterSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely.</p> <p>The value must be either -1
     * or an integer between 1 and 3,653.</p> <p>The default value is -1.</p>
     */
    inline bool FinalClusterSnapshotRetentionPeriodHasBeenSet() const { return m_finalClusterSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely.</p> <p>The value must be either -1
     * or an integer between 1 and 3,653.</p> <p>The default value is -1.</p>
     */
    inline void SetFinalClusterSnapshotRetentionPeriod(int value) { m_finalClusterSnapshotRetentionPeriodHasBeenSet = true; m_finalClusterSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely.</p> <p>The value must be either -1
     * or an integer between 1 and 3,653.</p> <p>The default value is -1.</p>
     */
    inline DeleteClusterRequest& WithFinalClusterSnapshotRetentionPeriod(int value) { SetFinalClusterSnapshotRetentionPeriod(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    bool m_skipFinalClusterSnapshot;
    bool m_skipFinalClusterSnapshotHasBeenSet;

    Aws::String m_finalClusterSnapshotIdentifier;
    bool m_finalClusterSnapshotIdentifierHasBeenSet;

    int m_finalClusterSnapshotRetentionPeriod;
    bool m_finalClusterSnapshotRetentionPeriodHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
