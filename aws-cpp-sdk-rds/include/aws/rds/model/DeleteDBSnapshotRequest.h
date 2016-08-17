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
   * <p/>
   */
  class AWS_RDS_API DeleteDBSnapshotRequest : public RDSRequest
  {
  public:
    DeleteDBSnapshotRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The DBSnapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The DBSnapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The DBSnapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The DBSnapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The DBSnapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline DeleteDBSnapshotRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The DBSnapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline DeleteDBSnapshotRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The DBSnapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline DeleteDBSnapshotRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}

  private:
    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
