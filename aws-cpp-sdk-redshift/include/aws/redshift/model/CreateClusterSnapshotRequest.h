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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API CreateClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    CreateClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClusterSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A unique identifier for the snapshot that you are requesting. This identifier
     * must be unique for all snapshots within the AWS account.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character
     * must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>A unique identifier for the snapshot that you are requesting. This identifier
     * must be unique for all snapshots within the AWS account.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character
     * must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the snapshot that you are requesting. This identifier
     * must be unique for all snapshots within the AWS account.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character
     * must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>A unique identifier for the snapshot that you are requesting. This identifier
     * must be unique for all snapshots within the AWS account.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character
     * must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the snapshot that you are requesting. This identifier
     * must be unique for all snapshots within the AWS account.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character
     * must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the snapshot that you are requesting. This identifier
     * must be unique for all snapshots within the AWS account.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character
     * must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline CreateClusterSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the snapshot that you are requesting. This identifier
     * must be unique for all snapshots within the AWS account.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character
     * must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline CreateClusterSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the snapshot that you are requesting. This identifier
     * must be unique for all snapshots within the AWS account.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character
     * must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline CreateClusterSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The cluster identifier for which you want a snapshot.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier for which you want a snapshot.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier for which you want a snapshot.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier for which you want a snapshot.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier for which you want a snapshot.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier for which you want a snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier for which you want a snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier for which you want a snapshot.</p>
     */
    inline CreateClusterSnapshotRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p> <p>The default value is -1.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p> <p>The default value is -1.</p>
     */
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p> <p>The default value is -1.</p>
     */
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p> <p>The default value is -1.</p>
     */
    inline CreateClusterSnapshotRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
