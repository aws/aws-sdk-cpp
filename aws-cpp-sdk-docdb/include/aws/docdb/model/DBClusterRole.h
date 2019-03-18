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
   * <p>Describes an AWS Identity and Access Management (IAM) role that is associated
   * with a DB cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBClusterRole">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DBClusterRole
  {
  public:
    DBClusterRole();
    DBClusterRole(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBClusterRole& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is associated with the DB
     * cluster.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is associated with the DB
     * cluster.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is associated with the DB
     * cluster.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is associated with the DB
     * cluster.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is associated with the DB
     * cluster.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is associated with the DB
     * cluster.</p>
     */
    inline DBClusterRole& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is associated with the DB
     * cluster.</p>
     */
    inline DBClusterRole& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is associated with the DB
     * cluster.</p>
     */
    inline DBClusterRole& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Describes the state of association between the IAM role and the DB cluster.
     * The <code>Status</code> property returns one of the following values:</p> <ul>
     * <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated with the DB
     * cluster and can be used to access other AWS services on your behalf.</p> </li>
     * <li> <p> <code>PENDING</code> - The IAM role ARN is being associated with the DB
     * cluster.</p> </li> <li> <p> <code>INVALID</code> - The IAM role ARN is
     * associated with the DB cluster, but the DB cluster cannot assume the IAM role to
     * access other AWS services on your behalf.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Describes the state of association between the IAM role and the DB cluster.
     * The <code>Status</code> property returns one of the following values:</p> <ul>
     * <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated with the DB
     * cluster and can be used to access other AWS services on your behalf.</p> </li>
     * <li> <p> <code>PENDING</code> - The IAM role ARN is being associated with the DB
     * cluster.</p> </li> <li> <p> <code>INVALID</code> - The IAM role ARN is
     * associated with the DB cluster, but the DB cluster cannot assume the IAM role to
     * access other AWS services on your behalf.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes the state of association between the IAM role and the DB cluster.
     * The <code>Status</code> property returns one of the following values:</p> <ul>
     * <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated with the DB
     * cluster and can be used to access other AWS services on your behalf.</p> </li>
     * <li> <p> <code>PENDING</code> - The IAM role ARN is being associated with the DB
     * cluster.</p> </li> <li> <p> <code>INVALID</code> - The IAM role ARN is
     * associated with the DB cluster, but the DB cluster cannot assume the IAM role to
     * access other AWS services on your behalf.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes the state of association between the IAM role and the DB cluster.
     * The <code>Status</code> property returns one of the following values:</p> <ul>
     * <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated with the DB
     * cluster and can be used to access other AWS services on your behalf.</p> </li>
     * <li> <p> <code>PENDING</code> - The IAM role ARN is being associated with the DB
     * cluster.</p> </li> <li> <p> <code>INVALID</code> - The IAM role ARN is
     * associated with the DB cluster, but the DB cluster cannot assume the IAM role to
     * access other AWS services on your behalf.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes the state of association between the IAM role and the DB cluster.
     * The <code>Status</code> property returns one of the following values:</p> <ul>
     * <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated with the DB
     * cluster and can be used to access other AWS services on your behalf.</p> </li>
     * <li> <p> <code>PENDING</code> - The IAM role ARN is being associated with the DB
     * cluster.</p> </li> <li> <p> <code>INVALID</code> - The IAM role ARN is
     * associated with the DB cluster, but the DB cluster cannot assume the IAM role to
     * access other AWS services on your behalf.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Describes the state of association between the IAM role and the DB cluster.
     * The <code>Status</code> property returns one of the following values:</p> <ul>
     * <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated with the DB
     * cluster and can be used to access other AWS services on your behalf.</p> </li>
     * <li> <p> <code>PENDING</code> - The IAM role ARN is being associated with the DB
     * cluster.</p> </li> <li> <p> <code>INVALID</code> - The IAM role ARN is
     * associated with the DB cluster, but the DB cluster cannot assume the IAM role to
     * access other AWS services on your behalf.</p> </li> </ul>
     */
    inline DBClusterRole& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes the state of association between the IAM role and the DB cluster.
     * The <code>Status</code> property returns one of the following values:</p> <ul>
     * <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated with the DB
     * cluster and can be used to access other AWS services on your behalf.</p> </li>
     * <li> <p> <code>PENDING</code> - The IAM role ARN is being associated with the DB
     * cluster.</p> </li> <li> <p> <code>INVALID</code> - The IAM role ARN is
     * associated with the DB cluster, but the DB cluster cannot assume the IAM role to
     * access other AWS services on your behalf.</p> </li> </ul>
     */
    inline DBClusterRole& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Describes the state of association between the IAM role and the DB cluster.
     * The <code>Status</code> property returns one of the following values:</p> <ul>
     * <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated with the DB
     * cluster and can be used to access other AWS services on your behalf.</p> </li>
     * <li> <p> <code>PENDING</code> - The IAM role ARN is being associated with the DB
     * cluster.</p> </li> <li> <p> <code>INVALID</code> - The IAM role ARN is
     * associated with the DB cluster, but the DB cluster cannot assume the IAM role to
     * access other AWS services on your behalf.</p> </li> </ul>
     */
    inline DBClusterRole& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
