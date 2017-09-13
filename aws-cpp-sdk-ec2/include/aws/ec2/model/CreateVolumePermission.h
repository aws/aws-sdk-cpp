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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/PermissionGroup.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the user or group to be added or removed from the permissions for a
   * volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVolumePermission">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateVolumePermission
  {
  public:
    CreateVolumePermission();
    CreateVolumePermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    CreateVolumePermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The specific group that is to be added or removed from a volume's list of
     * create volume permissions.</p>
     */
    inline const PermissionGroup& GetGroup() const{ return m_group; }

    /**
     * <p>The specific group that is to be added or removed from a volume's list of
     * create volume permissions.</p>
     */
    inline void SetGroup(const PermissionGroup& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The specific group that is to be added or removed from a volume's list of
     * create volume permissions.</p>
     */
    inline void SetGroup(PermissionGroup&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The specific group that is to be added or removed from a volume's list of
     * create volume permissions.</p>
     */
    inline CreateVolumePermission& WithGroup(const PermissionGroup& value) { SetGroup(value); return *this;}

    /**
     * <p>The specific group that is to be added or removed from a volume's list of
     * create volume permissions.</p>
     */
    inline CreateVolumePermission& WithGroup(PermissionGroup&& value) { SetGroup(std::move(value)); return *this;}


    /**
     * <p>The specific AWS account ID that is to be added or removed from a volume's
     * list of create volume permissions.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The specific AWS account ID that is to be added or removed from a volume's
     * list of create volume permissions.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The specific AWS account ID that is to be added or removed from a volume's
     * list of create volume permissions.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The specific AWS account ID that is to be added or removed from a volume's
     * list of create volume permissions.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The specific AWS account ID that is to be added or removed from a volume's
     * list of create volume permissions.</p>
     */
    inline CreateVolumePermission& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The specific AWS account ID that is to be added or removed from a volume's
     * list of create volume permissions.</p>
     */
    inline CreateVolumePermission& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The specific AWS account ID that is to be added or removed from a volume's
     * list of create volume permissions.</p>
     */
    inline CreateVolumePermission& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    PermissionGroup m_group;
    bool m_groupHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
