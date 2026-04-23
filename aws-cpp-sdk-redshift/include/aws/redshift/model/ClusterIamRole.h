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
#include <aws/redshift/Redshift_EXPORTS.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>An AWS Identity and Access Management (IAM) role that can be used by the
   * associated Amazon Redshift cluster to access other AWS services.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterIamRole">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ClusterIamRole
  {
  public:
    ClusterIamRole();
    ClusterIamRole(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClusterIamRole& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role, for example,
     * <code>arn:aws:iam::123456789012:role/RedshiftCopyUnload</code>. </p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role, for example,
     * <code>arn:aws:iam::123456789012:role/RedshiftCopyUnload</code>. </p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role, for example,
     * <code>arn:aws:iam::123456789012:role/RedshiftCopyUnload</code>. </p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role, for example,
     * <code>arn:aws:iam::123456789012:role/RedshiftCopyUnload</code>. </p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role, for example,
     * <code>arn:aws:iam::123456789012:role/RedshiftCopyUnload</code>. </p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role, for example,
     * <code>arn:aws:iam::123456789012:role/RedshiftCopyUnload</code>. </p>
     */
    inline ClusterIamRole& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role, for example,
     * <code>arn:aws:iam::123456789012:role/RedshiftCopyUnload</code>. </p>
     */
    inline ClusterIamRole& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role, for example,
     * <code>arn:aws:iam::123456789012:role/RedshiftCopyUnload</code>. </p>
     */
    inline ClusterIamRole& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A value that describes the status of the IAM role's association with an
     * Amazon Redshift cluster.</p> <p>The following are possible statuses and
     * descriptions.</p> <ul> <li> <p> <code>in-sync</code>: The role is available for
     * use by the cluster.</p> </li> <li> <p> <code>adding</code>: The role is in the
     * process of being associated with the cluster.</p> </li> <li> <p>
     * <code>removing</code>: The role is in the process of being disassociated with
     * the cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetApplyStatus() const{ return m_applyStatus; }

    /**
     * <p>A value that describes the status of the IAM role's association with an
     * Amazon Redshift cluster.</p> <p>The following are possible statuses and
     * descriptions.</p> <ul> <li> <p> <code>in-sync</code>: The role is available for
     * use by the cluster.</p> </li> <li> <p> <code>adding</code>: The role is in the
     * process of being associated with the cluster.</p> </li> <li> <p>
     * <code>removing</code>: The role is in the process of being disassociated with
     * the cluster.</p> </li> </ul>
     */
    inline bool ApplyStatusHasBeenSet() const { return m_applyStatusHasBeenSet; }

    /**
     * <p>A value that describes the status of the IAM role's association with an
     * Amazon Redshift cluster.</p> <p>The following are possible statuses and
     * descriptions.</p> <ul> <li> <p> <code>in-sync</code>: The role is available for
     * use by the cluster.</p> </li> <li> <p> <code>adding</code>: The role is in the
     * process of being associated with the cluster.</p> </li> <li> <p>
     * <code>removing</code>: The role is in the process of being disassociated with
     * the cluster.</p> </li> </ul>
     */
    inline void SetApplyStatus(const Aws::String& value) { m_applyStatusHasBeenSet = true; m_applyStatus = value; }

    /**
     * <p>A value that describes the status of the IAM role's association with an
     * Amazon Redshift cluster.</p> <p>The following are possible statuses and
     * descriptions.</p> <ul> <li> <p> <code>in-sync</code>: The role is available for
     * use by the cluster.</p> </li> <li> <p> <code>adding</code>: The role is in the
     * process of being associated with the cluster.</p> </li> <li> <p>
     * <code>removing</code>: The role is in the process of being disassociated with
     * the cluster.</p> </li> </ul>
     */
    inline void SetApplyStatus(Aws::String&& value) { m_applyStatusHasBeenSet = true; m_applyStatus = std::move(value); }

    /**
     * <p>A value that describes the status of the IAM role's association with an
     * Amazon Redshift cluster.</p> <p>The following are possible statuses and
     * descriptions.</p> <ul> <li> <p> <code>in-sync</code>: The role is available for
     * use by the cluster.</p> </li> <li> <p> <code>adding</code>: The role is in the
     * process of being associated with the cluster.</p> </li> <li> <p>
     * <code>removing</code>: The role is in the process of being disassociated with
     * the cluster.</p> </li> </ul>
     */
    inline void SetApplyStatus(const char* value) { m_applyStatusHasBeenSet = true; m_applyStatus.assign(value); }

    /**
     * <p>A value that describes the status of the IAM role's association with an
     * Amazon Redshift cluster.</p> <p>The following are possible statuses and
     * descriptions.</p> <ul> <li> <p> <code>in-sync</code>: The role is available for
     * use by the cluster.</p> </li> <li> <p> <code>adding</code>: The role is in the
     * process of being associated with the cluster.</p> </li> <li> <p>
     * <code>removing</code>: The role is in the process of being disassociated with
     * the cluster.</p> </li> </ul>
     */
    inline ClusterIamRole& WithApplyStatus(const Aws::String& value) { SetApplyStatus(value); return *this;}

    /**
     * <p>A value that describes the status of the IAM role's association with an
     * Amazon Redshift cluster.</p> <p>The following are possible statuses and
     * descriptions.</p> <ul> <li> <p> <code>in-sync</code>: The role is available for
     * use by the cluster.</p> </li> <li> <p> <code>adding</code>: The role is in the
     * process of being associated with the cluster.</p> </li> <li> <p>
     * <code>removing</code>: The role is in the process of being disassociated with
     * the cluster.</p> </li> </ul>
     */
    inline ClusterIamRole& WithApplyStatus(Aws::String&& value) { SetApplyStatus(std::move(value)); return *this;}

    /**
     * <p>A value that describes the status of the IAM role's association with an
     * Amazon Redshift cluster.</p> <p>The following are possible statuses and
     * descriptions.</p> <ul> <li> <p> <code>in-sync</code>: The role is available for
     * use by the cluster.</p> </li> <li> <p> <code>adding</code>: The role is in the
     * process of being associated with the cluster.</p> </li> <li> <p>
     * <code>removing</code>: The role is in the process of being disassociated with
     * the cluster.</p> </li> </ul>
     */
    inline ClusterIamRole& WithApplyStatus(const char* value) { SetApplyStatus(value); return *this;}

  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::String m_applyStatus;
    bool m_applyStatusHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
