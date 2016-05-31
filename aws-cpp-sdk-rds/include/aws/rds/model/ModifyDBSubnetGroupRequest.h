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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API ModifyDBSubnetGroupRequest : public RDSRequest
  {
  public:
    ModifyDBSubnetGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, underscores, spaces, or hyphens. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, underscores, spaces, or hyphens. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, underscores, spaces, or hyphens. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, underscores, spaces, or hyphens. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, underscores, spaces, or hyphens. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, underscores, spaces, or hyphens. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, underscores, spaces, or hyphens. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupDescription() const{ return m_dBSubnetGroupDescription; }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(const Aws::String& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = value; }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(Aws::String&& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = value; }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(const char* value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription.assign(value); }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupDescription(const Aws::String& value) { SetDBSubnetGroupDescription(value); return *this;}

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupDescription(Aws::String&& value) { SetDBSubnetGroupDescription(value); return *this;}

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithDBSubnetGroupDescription(const char* value) { SetDBSubnetGroupDescription(value); return *this;}

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The EC2 subnet IDs for the DB subnet group.</p>
     */
    inline ModifyDBSubnetGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    Aws::String m_dBSubnetGroupDescription;
    bool m_dBSubnetGroupDescriptionHasBeenSet;
    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
