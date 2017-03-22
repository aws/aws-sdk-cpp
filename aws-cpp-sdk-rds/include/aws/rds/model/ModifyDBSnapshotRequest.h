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
   */
  class AWS_RDS_API ModifyDBSnapshotRequest : public RDSRequest
  {
  public:
    ModifyDBSnapshotRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline ModifyDBSnapshotRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline ModifyDBSnapshotRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline ModifyDBSnapshotRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The engine version to update the DB snapshot to. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version to update the DB snapshot to. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version to update the DB snapshot to. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version to update the DB snapshot to. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version to update the DB snapshot to. </p>
     */
    inline ModifyDBSnapshotRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version to update the DB snapshot to. </p>
     */
    inline ModifyDBSnapshotRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version to update the DB snapshot to. </p>
     */
    inline ModifyDBSnapshotRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

  private:
    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
