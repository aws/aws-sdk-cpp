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
   * <ul> <li> <p> <code>ModifyDBInstance</code> </p> </li> <li> <p>
   * <code>RebootDBInstance</code> </p> </li> <li> <p>
   * <code>RestoreDBInstanceFromDBSnapshot</code> </p> </li> <li> <p>
   * <code>RestoreDBInstanceToPointInTime</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBSecurityGroupMembership
  {
  public:
    DBSecurityGroupMembership();
    DBSecurityGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBSecurityGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupName() const{ return m_dBSecurityGroupName; }

    /**
     * <p>The name of the DB security group.</p>
     */
    inline bool DBSecurityGroupNameHasBeenSet() const { return m_dBSecurityGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB security group.</p>
     */
    inline void SetDBSecurityGroupName(const Aws::String& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = value; }

    /**
     * <p>The name of the DB security group.</p>
     */
    inline void SetDBSecurityGroupName(Aws::String&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = std::move(value); }

    /**
     * <p>The name of the DB security group.</p>
     */
    inline void SetDBSecurityGroupName(const char* value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName.assign(value); }

    /**
     * <p>The name of the DB security group.</p>
     */
    inline DBSecurityGroupMembership& WithDBSecurityGroupName(const Aws::String& value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the DB security group.</p>
     */
    inline DBSecurityGroupMembership& WithDBSecurityGroupName(Aws::String&& value) { SetDBSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB security group.</p>
     */
    inline DBSecurityGroupMembership& WithDBSecurityGroupName(const char* value) { SetDBSecurityGroupName(value); return *this;}


    /**
     * <p>The status of the DB security group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB security group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the DB security group.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the DB security group.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the DB security group.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the DB security group.</p>
     */
    inline DBSecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB security group.</p>
     */
    inline DBSecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the DB security group.</p>
     */
    inline DBSecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
