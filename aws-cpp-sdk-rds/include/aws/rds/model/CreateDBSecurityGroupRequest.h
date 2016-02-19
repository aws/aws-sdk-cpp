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
  class AWS_RDS_API CreateDBSecurityGroupRequest : public RDSRequest
  {
  public:
    CreateDBSecurityGroupRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p> The name for the DB Security Group. This value is stored as a lowercase
     * string. </p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens. Must not be "Default".</p> <p>Example:
     * <code>mysecuritygroup</code></p>
     */
    inline const Aws::String& GetDBSecurityGroupName() const{ return m_dBSecurityGroupName; }

    /**
     * <p> The name for the DB Security Group. This value is stored as a lowercase
     * string. </p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens. Must not be "Default".</p> <p>Example:
     * <code>mysecuritygroup</code></p>
     */
    inline void SetDBSecurityGroupName(const Aws::String& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = value; }

    /**
     * <p> The name for the DB Security Group. This value is stored as a lowercase
     * string. </p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens. Must not be "Default".</p> <p>Example:
     * <code>mysecuritygroup</code></p>
     */
    inline void SetDBSecurityGroupName(Aws::String&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = value; }

    /**
     * <p> The name for the DB Security Group. This value is stored as a lowercase
     * string. </p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens. Must not be "Default".</p> <p>Example:
     * <code>mysecuritygroup</code></p>
     */
    inline void SetDBSecurityGroupName(const char* value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName.assign(value); }

    /**
     * <p> The name for the DB Security Group. This value is stored as a lowercase
     * string. </p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens. Must not be "Default".</p> <p>Example:
     * <code>mysecuritygroup</code></p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupName(const Aws::String& value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p> The name for the DB Security Group. This value is stored as a lowercase
     * string. </p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens. Must not be "Default".</p> <p>Example:
     * <code>mysecuritygroup</code></p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupName(Aws::String&& value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p> The name for the DB Security Group. This value is stored as a lowercase
     * string. </p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens. Must not be "Default".</p> <p>Example:
     * <code>mysecuritygroup</code></p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupName(const char* value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p> The description for the DB Security Group. </p>
     */
    inline const Aws::String& GetDBSecurityGroupDescription() const{ return m_dBSecurityGroupDescription; }

    /**
     * <p> The description for the DB Security Group. </p>
     */
    inline void SetDBSecurityGroupDescription(const Aws::String& value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription = value; }

    /**
     * <p> The description for the DB Security Group. </p>
     */
    inline void SetDBSecurityGroupDescription(Aws::String&& value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription = value; }

    /**
     * <p> The description for the DB Security Group. </p>
     */
    inline void SetDBSecurityGroupDescription(const char* value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription.assign(value); }

    /**
     * <p> The description for the DB Security Group. </p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupDescription(const Aws::String& value) { SetDBSecurityGroupDescription(value); return *this;}

    /**
     * <p> The description for the DB Security Group. </p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupDescription(Aws::String&& value) { SetDBSecurityGroupDescription(value); return *this;}

    /**
     * <p> The description for the DB Security Group. </p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupDescription(const char* value) { SetDBSecurityGroupDescription(value); return *this;}

  private:
    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet;
    Aws::String m_dBSecurityGroupDescription;
    bool m_dBSecurityGroupDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
