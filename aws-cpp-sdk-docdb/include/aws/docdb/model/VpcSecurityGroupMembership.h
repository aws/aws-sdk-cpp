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
#include <aws/docdb/DocDB_EXPORTS.h>
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
namespace DocDB
{
namespace Model
{

  /**
   * <p>Used as a response element for queries on virtual private cloud (VPC)
   * security group membership.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/VpcSecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API VpcSecurityGroupMembership
  {
  public:
    VpcSecurityGroupMembership();
    VpcSecurityGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcSecurityGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the VPC security group.</p>
     */
    inline const Aws::String& GetVpcSecurityGroupId() const{ return m_vpcSecurityGroupId; }

    /**
     * <p>The name of the VPC security group.</p>
     */
    inline bool VpcSecurityGroupIdHasBeenSet() const { return m_vpcSecurityGroupIdHasBeenSet; }

    /**
     * <p>The name of the VPC security group.</p>
     */
    inline void SetVpcSecurityGroupId(const Aws::String& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = value; }

    /**
     * <p>The name of the VPC security group.</p>
     */
    inline void SetVpcSecurityGroupId(Aws::String&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = std::move(value); }

    /**
     * <p>The name of the VPC security group.</p>
     */
    inline void SetVpcSecurityGroupId(const char* value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId.assign(value); }

    /**
     * <p>The name of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(const Aws::String& value) { SetVpcSecurityGroupId(value); return *this;}

    /**
     * <p>The name of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(Aws::String&& value) { SetVpcSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(const char* value) { SetVpcSecurityGroupId(value); return *this;}


    /**
     * <p>The status of the VPC security group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_vpcSecurityGroupId;
    bool m_vpcSecurityGroupIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
