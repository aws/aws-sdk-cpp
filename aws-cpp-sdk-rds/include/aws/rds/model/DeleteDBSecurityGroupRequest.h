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
  class AWS_RDS_API DeleteDBSecurityGroupRequest : public RDSRequest
  {
  public:
    DeleteDBSecurityGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the DB security group to delete.</p> <note> <p>You cannot delete
     * the default DB security group.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> <li> <p>Must not be "Default"</p> </li> </ul>
     */
    inline const Aws::String& GetDBSecurityGroupName() const{ return m_dBSecurityGroupName; }

    /**
     * <p>The name of the DB security group to delete.</p> <note> <p>You cannot delete
     * the default DB security group.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> <li> <p>Must not be "Default"</p> </li> </ul>
     */
    inline void SetDBSecurityGroupName(const Aws::String& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = value; }

    /**
     * <p>The name of the DB security group to delete.</p> <note> <p>You cannot delete
     * the default DB security group.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> <li> <p>Must not be "Default"</p> </li> </ul>
     */
    inline void SetDBSecurityGroupName(Aws::String&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = value; }

    /**
     * <p>The name of the DB security group to delete.</p> <note> <p>You cannot delete
     * the default DB security group.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> <li> <p>Must not be "Default"</p> </li> </ul>
     */
    inline void SetDBSecurityGroupName(const char* value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName.assign(value); }

    /**
     * <p>The name of the DB security group to delete.</p> <note> <p>You cannot delete
     * the default DB security group.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> <li> <p>Must not be "Default"</p> </li> </ul>
     */
    inline DeleteDBSecurityGroupRequest& WithDBSecurityGroupName(const Aws::String& value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the DB security group to delete.</p> <note> <p>You cannot delete
     * the default DB security group.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> <li> <p>Must not be "Default"</p> </li> </ul>
     */
    inline DeleteDBSecurityGroupRequest& WithDBSecurityGroupName(Aws::String&& value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the DB security group to delete.</p> <note> <p>You cannot delete
     * the default DB security group.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> <li> <p>Must not be "Default"</p> </li> </ul>
     */
    inline DeleteDBSecurityGroupRequest& WithDBSecurityGroupName(const char* value) { SetDBSecurityGroupName(value); return *this;}

  private:
    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
