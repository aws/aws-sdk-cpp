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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a security group and AWS account ID pair. </p>
   */
  class AWS_EC2_API UserIdGroupPair
  {
  public:
    UserIdGroupPair();
    UserIdGroupPair(const Aws::Utils::Xml::XmlNode& xmlNode);
    UserIdGroupPair& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of an AWS account. EC2-Classic only.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of an AWS account. EC2-Classic only.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of an AWS account. EC2-Classic only.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of an AWS account. EC2-Classic only.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of an AWS account. EC2-Classic only.</p>
     */
    inline UserIdGroupPair& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of an AWS account. EC2-Classic only.</p>
     */
    inline UserIdGroupPair& WithUserId(Aws::String&& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of an AWS account. EC2-Classic only.</p>
     */
    inline UserIdGroupPair& WithUserId(const char* value) { SetUserId(value); return *this;}

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use <code>GroupId</code>.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use <code>GroupId</code>.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use <code>GroupId</code>.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use <code>GroupId</code>.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use <code>GroupId</code>.</p>
     */
    inline UserIdGroupPair& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use <code>GroupId</code>.</p>
     */
    inline UserIdGroupPair& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use <code>GroupId</code>.</p>
     */
    inline UserIdGroupPair& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline UserIdGroupPair& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline UserIdGroupPair& WithGroupId(Aws::String&& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline UserIdGroupPair& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:
    Aws::String m_userId;
    bool m_userIdHasBeenSet;
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
