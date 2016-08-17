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
  class AWS_RDS_API DeleteDBSubnetGroupRequest : public RDSRequest
  {
  public:
    DeleteDBSubnetGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You cannot
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You cannot
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You cannot
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You cannot
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You cannot
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline DeleteDBSubnetGroupRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You cannot
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline DeleteDBSubnetGroupRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You cannot
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline DeleteDBSubnetGroupRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

  private:
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
