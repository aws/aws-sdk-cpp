﻿/*
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
  class AWS_RDS_API DescribeDBClusterSnapshotAttributesRequest : public RDSRequest
  {
  public:
    DescribeDBClusterSnapshotAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier for the DB cluster snapshot to describe the attributes
     * for.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier for the DB cluster snapshot to describe the attributes
     * for.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB cluster snapshot to describe the attributes
     * for.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB cluster snapshot to describe the attributes
     * for.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the DB cluster snapshot to describe the attributes
     * for.</p>
     */
    inline DescribeDBClusterSnapshotAttributesRequest& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB cluster snapshot to describe the attributes
     * for.</p>
     */
    inline DescribeDBClusterSnapshotAttributesRequest& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB cluster snapshot to describe the attributes
     * for.</p>
     */
    inline DescribeDBClusterSnapshotAttributesRequest& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}

  private:
    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
