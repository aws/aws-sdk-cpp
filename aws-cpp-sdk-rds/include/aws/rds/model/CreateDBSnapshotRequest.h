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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API CreateDBSnapshotRequest : public RDSRequest
  {
  public:
    CreateDBSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the DB snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The identifier for the DB snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the DB snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier for the DB snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the DB snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline CreateDBSnapshotRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline CreateDBSnapshotRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the DB snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline CreateDBSnapshotRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>The identifier of the DB instance that you want to create the snapshot
     * of.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The identifier of the DB instance that you want to create the snapshot
     * of.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB instance that you want to create the snapshot
     * of.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The identifier of the DB instance that you want to create the snapshot
     * of.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB instance that you want to create the snapshot
     * of.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB instance that you want to create the snapshot
     * of.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline CreateDBSnapshotRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB instance that you want to create the snapshot
     * of.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline CreateDBSnapshotRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB instance that you want to create the snapshot
     * of.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline CreateDBSnapshotRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateDBSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDBSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateDBSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateDBSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
