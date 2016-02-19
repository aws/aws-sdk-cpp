/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p> </p>
   */
  class AWS_RDS_API CopyDBSnapshotRequest : public RDSRequest
  {
  public:
    CopyDBSnapshotRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Must be the identifier for a valid system snapshot in the "available"
     * state.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p>
     */
    inline const Aws::String& GetSourceDBSnapshotIdentifier() const{ return m_sourceDBSnapshotIdentifier; }

    /**
     * <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Must be the identifier for a valid system snapshot in the "available"
     * state.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p>
     */
    inline void SetSourceDBSnapshotIdentifier(const Aws::String& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /**
     * <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Must be the identifier for a valid system snapshot in the "available"
     * state.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p>
     */
    inline void SetSourceDBSnapshotIdentifier(Aws::String&& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /**
     * <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Must be the identifier for a valid system snapshot in the "available"
     * state.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p>
     */
    inline void SetSourceDBSnapshotIdentifier(const char* value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier.assign(value); }

    /**
     * <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Must be the identifier for a valid system snapshot in the "available"
     * state.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(const Aws::String& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Must be the identifier for a valid system snapshot in the "available"
     * state.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(Aws::String&& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The identifier for the source DB snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Must be the identifier for a valid system snapshot in the "available"
     * state.</li> </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code></p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(const char* value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-db-snapshot</code></p>
     */
    inline const Aws::String& GetTargetDBSnapshotIdentifier() const{ return m_targetDBSnapshotIdentifier; }

    /**
     * <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-db-snapshot</code></p>
     */
    inline void SetTargetDBSnapshotIdentifier(const Aws::String& value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier = value; }

    /**
     * <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-db-snapshot</code></p>
     */
    inline void SetTargetDBSnapshotIdentifier(Aws::String&& value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier = value; }

    /**
     * <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-db-snapshot</code></p>
     */
    inline void SetTargetDBSnapshotIdentifier(const char* value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier.assign(value); }

    /**
     * <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-db-snapshot</code></p>
     */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(const Aws::String& value) { SetTargetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-db-snapshot</code></p>
     */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(Aws::String&& value) { SetTargetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The identifier for the copied snapshot. </p> <p>Constraints:</p> <ul>
     * <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-db-snapshot</code></p>
     */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(const char* value) { SetTargetDBSnapshotIdentifier(value); return *this;}

  private:
    Aws::String m_sourceDBSnapshotIdentifier;
    bool m_sourceDBSnapshotIdentifierHasBeenSet;
    Aws::String m_targetDBSnapshotIdentifier;
    bool m_targetDBSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
