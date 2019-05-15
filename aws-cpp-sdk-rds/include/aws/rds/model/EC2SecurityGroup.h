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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>This data type is used as a response element in the following actions:</p>
   * <ul> <li> <p> <code>AuthorizeDBSecurityGroupIngress</code> </p> </li> <li> <p>
   * <code>DescribeDBSecurityGroups</code> </p> </li> <li> <p>
   * <code>RevokeDBSecurityGroupIngress</code> </p> </li> </ul><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/EC2SecurityGroup">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API EC2SecurityGroup
  {
  public:
    EC2SecurityGroup();
    EC2SecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    EC2SecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Provides the status of the EC2 security group. Status can be "authorizing",
     * "authorized", "revoking", and "revoked".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Provides the status of the EC2 security group. Status can be "authorizing",
     * "authorized", "revoking", and "revoked".</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Provides the status of the EC2 security group. Status can be "authorizing",
     * "authorized", "revoking", and "revoked".</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Provides the status of the EC2 security group. Status can be "authorizing",
     * "authorized", "revoking", and "revoked".</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Provides the status of the EC2 security group. Status can be "authorizing",
     * "authorized", "revoking", and "revoked".</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Provides the status of the EC2 security group. Status can be "authorizing",
     * "authorized", "revoking", and "revoked".</p>
     */
    inline EC2SecurityGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Provides the status of the EC2 security group. Status can be "authorizing",
     * "authorized", "revoking", and "revoked".</p>
     */
    inline EC2SecurityGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Provides the status of the EC2 security group. Status can be "authorizing",
     * "authorized", "revoking", and "revoked".</p>
     */
    inline EC2SecurityGroup& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const{ return m_eC2SecurityGroupName; }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline bool EC2SecurityGroupNameHasBeenSet() const { return m_eC2SecurityGroupNameHasBeenSet; }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline void SetEC2SecurityGroupName(const Aws::String& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = value; }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline void SetEC2SecurityGroupName(Aws::String&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = std::move(value); }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline void SetEC2SecurityGroupName(const char* value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName.assign(value); }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline EC2SecurityGroup& WithEC2SecurityGroupName(const Aws::String& value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline EC2SecurityGroup& WithEC2SecurityGroupName(Aws::String&& value) { SetEC2SecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline EC2SecurityGroup& WithEC2SecurityGroupName(const char* value) { SetEC2SecurityGroupName(value); return *this;}


    /**
     * <p>Specifies the id of the EC2 security group.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupId() const{ return m_eC2SecurityGroupId; }

    /**
     * <p>Specifies the id of the EC2 security group.</p>
     */
    inline bool EC2SecurityGroupIdHasBeenSet() const { return m_eC2SecurityGroupIdHasBeenSet; }

    /**
     * <p>Specifies the id of the EC2 security group.</p>
     */
    inline void SetEC2SecurityGroupId(const Aws::String& value) { m_eC2SecurityGroupIdHasBeenSet = true; m_eC2SecurityGroupId = value; }

    /**
     * <p>Specifies the id of the EC2 security group.</p>
     */
    inline void SetEC2SecurityGroupId(Aws::String&& value) { m_eC2SecurityGroupIdHasBeenSet = true; m_eC2SecurityGroupId = std::move(value); }

    /**
     * <p>Specifies the id of the EC2 security group.</p>
     */
    inline void SetEC2SecurityGroupId(const char* value) { m_eC2SecurityGroupIdHasBeenSet = true; m_eC2SecurityGroupId.assign(value); }

    /**
     * <p>Specifies the id of the EC2 security group.</p>
     */
    inline EC2SecurityGroup& WithEC2SecurityGroupId(const Aws::String& value) { SetEC2SecurityGroupId(value); return *this;}

    /**
     * <p>Specifies the id of the EC2 security group.</p>
     */
    inline EC2SecurityGroup& WithEC2SecurityGroupId(Aws::String&& value) { SetEC2SecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>Specifies the id of the EC2 security group.</p>
     */
    inline EC2SecurityGroup& WithEC2SecurityGroupId(const char* value) { SetEC2SecurityGroupId(value); return *this;}


    /**
     * <p> Specifies the AWS ID of the owner of the EC2 security group specified in the
     * <code>EC2SecurityGroupName</code> field. </p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const{ return m_eC2SecurityGroupOwnerId; }

    /**
     * <p> Specifies the AWS ID of the owner of the EC2 security group specified in the
     * <code>EC2SecurityGroupName</code> field. </p>
     */
    inline bool EC2SecurityGroupOwnerIdHasBeenSet() const { return m_eC2SecurityGroupOwnerIdHasBeenSet; }

    /**
     * <p> Specifies the AWS ID of the owner of the EC2 security group specified in the
     * <code>EC2SecurityGroupName</code> field. </p>
     */
    inline void SetEC2SecurityGroupOwnerId(const Aws::String& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = value; }

    /**
     * <p> Specifies the AWS ID of the owner of the EC2 security group specified in the
     * <code>EC2SecurityGroupName</code> field. </p>
     */
    inline void SetEC2SecurityGroupOwnerId(Aws::String&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = std::move(value); }

    /**
     * <p> Specifies the AWS ID of the owner of the EC2 security group specified in the
     * <code>EC2SecurityGroupName</code> field. </p>
     */
    inline void SetEC2SecurityGroupOwnerId(const char* value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId.assign(value); }

    /**
     * <p> Specifies the AWS ID of the owner of the EC2 security group specified in the
     * <code>EC2SecurityGroupName</code> field. </p>
     */
    inline EC2SecurityGroup& WithEC2SecurityGroupOwnerId(const Aws::String& value) { SetEC2SecurityGroupOwnerId(value); return *this;}

    /**
     * <p> Specifies the AWS ID of the owner of the EC2 security group specified in the
     * <code>EC2SecurityGroupName</code> field. </p>
     */
    inline EC2SecurityGroup& WithEC2SecurityGroupOwnerId(Aws::String&& value) { SetEC2SecurityGroupOwnerId(std::move(value)); return *this;}

    /**
     * <p> Specifies the AWS ID of the owner of the EC2 security group specified in the
     * <code>EC2SecurityGroupName</code> field. </p>
     */
    inline EC2SecurityGroup& WithEC2SecurityGroupOwnerId(const char* value) { SetEC2SecurityGroupOwnerId(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_eC2SecurityGroupName;
    bool m_eC2SecurityGroupNameHasBeenSet;

    Aws::String m_eC2SecurityGroupId;
    bool m_eC2SecurityGroupIdHasBeenSet;

    Aws::String m_eC2SecurityGroupOwnerId;
    bool m_eC2SecurityGroupOwnerIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
