/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API CopyDBSnapshotRequest : public RDSRequest
  {
  public:
    CopyDBSnapshotRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul> <li>Must specify a valid system snapshot in the "available" state.</li> <li>If the source snapshot is in the same region as the copy, specify a valid DB snapshot identifier.</li> <li>If the source snapshot is in a different region than the copy, specify a valid DB snapshot ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html"> Copying a DB Snapshot</a>.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p> <p>Example: <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code></p>
    */
    inline const Aws::String& GetSourceDBSnapshotIdentifier() const{ return m_sourceDBSnapshotIdentifier; }
    /*
     <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul> <li>Must specify a valid system snapshot in the "available" state.</li> <li>If the source snapshot is in the same region as the copy, specify a valid DB snapshot identifier.</li> <li>If the source snapshot is in a different region than the copy, specify a valid DB snapshot ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html"> Copying a DB Snapshot</a>.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p> <p>Example: <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code></p>
    */
    inline void SetSourceDBSnapshotIdentifier(const Aws::String& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /*
     <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul> <li>Must specify a valid system snapshot in the "available" state.</li> <li>If the source snapshot is in the same region as the copy, specify a valid DB snapshot identifier.</li> <li>If the source snapshot is in a different region than the copy, specify a valid DB snapshot ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html"> Copying a DB Snapshot</a>.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p> <p>Example: <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code></p>
    */
    inline void SetSourceDBSnapshotIdentifier(const char* value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier.assign(value); }

    /*
     <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul> <li>Must specify a valid system snapshot in the "available" state.</li> <li>If the source snapshot is in the same region as the copy, specify a valid DB snapshot identifier.</li> <li>If the source snapshot is in a different region than the copy, specify a valid DB snapshot ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html"> Copying a DB Snapshot</a>.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p> <p>Example: <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code></p>
    */
    inline CopyDBSnapshotRequest&  WithSourceDBSnapshotIdentifier(const Aws::String& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /*
     <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul> <li>Must specify a valid system snapshot in the "available" state.</li> <li>If the source snapshot is in the same region as the copy, specify a valid DB snapshot identifier.</li> <li>If the source snapshot is in a different region than the copy, specify a valid DB snapshot ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html"> Copying a DB Snapshot</a>.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p> <p>Example: <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code></p>
    */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(const char* value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /*
     <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-db-snapshot</code></p>
    */
    inline const Aws::String& GetTargetDBSnapshotIdentifier() const{ return m_targetDBSnapshotIdentifier; }
    /*
     <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-db-snapshot</code></p>
    */
    inline void SetTargetDBSnapshotIdentifier(const Aws::String& value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier = value; }

    /*
     <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-db-snapshot</code></p>
    */
    inline void SetTargetDBSnapshotIdentifier(const char* value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier.assign(value); }

    /*
     <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-db-snapshot</code></p>
    */
    inline CopyDBSnapshotRequest&  WithTargetDBSnapshotIdentifier(const Aws::String& value) { SetTargetDBSnapshotIdentifier(value); return *this;}

    /*
     <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-db-snapshot</code></p>
    */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(const char* value) { SetTargetDBSnapshotIdentifier(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline CopyDBSnapshotRequest&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CopyDBSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /*
     <p>True to copy all tags from the source DB snapshot to the target DB snapshot; otherwise false. The default is false.</p>
    */
    inline bool GetCopyTags() const{ return m_copyTags; }
    /*
     <p>True to copy all tags from the source DB snapshot to the target DB snapshot; otherwise false. The default is false.</p>
    */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /*
     <p>True to copy all tags from the source DB snapshot to the target DB snapshot; otherwise false. The default is false.</p>
    */
    inline CopyDBSnapshotRequest&  WithCopyTags(bool value) { SetCopyTags(value); return *this;}

  private:
    Aws::String m_sourceDBSnapshotIdentifier;
    bool m_sourceDBSnapshotIdentifierHasBeenSet;
    Aws::String m_targetDBSnapshotIdentifier;
    bool m_targetDBSnapshotIdentifierHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    bool m_copyTags;
    bool m_copyTagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
