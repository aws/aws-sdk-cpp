﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DeleteDBSnapshotRequest : public RDSRequest
  {
  public:
    DeleteDBSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB snapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The DB snapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The DB snapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The DB snapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The DB snapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The DB snapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline DeleteDBSnapshotRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The DB snapshot identifier.</p> <p>Constraints: Must be the name of an
     * existing DB snapshot in the <code>available</code> state.</p>
     */
    inline DeleteDBSnapshotRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB snapshot identifier.</p> <p>Constraints: Must be the name of an
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
