/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes the user or group to be added or removed from the list of create
   * volume permissions for a volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVolumePermission">AWS
   * API Reference</a></p>
   */
  class CreateVolumePermission
  {
  public:
    AWS_EC2_API CreateVolumePermission();
    AWS_EC2_API CreateVolumePermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateVolumePermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The group to be added or removed. The possible value is <code>all</code>.</p>
     */
    inline const PermissionGroup& GetGroup() const{ return m_group; }

    /**
     * <p>The group to be added or removed. The possible value is <code>all</code>.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The group to be added or removed. The possible value is <code>all</code>.</p>
     */
    inline void SetGroup(const PermissionGroup& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The group to be added or removed. The possible value is <code>all</code>.</p>
     */
    inline void SetGroup(PermissionGroup&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The group to be added or removed. The possible value is <code>all</code>.</p>
     */
    inline CreateVolumePermission& WithGroup(const PermissionGroup& value) { SetGroup(value); return *this;}

    /**
     * <p>The group to be added or removed. The possible value is <code>all</code>.</p>
     */
    inline CreateVolumePermission& WithGroup(PermissionGroup&& value) { SetGroup(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account to be added or removed.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the Amazon Web Services account to be added or removed.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account to be added or removed.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the Amazon Web Services account to be added or removed.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account to be added or removed.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account to be added or removed.</p>
     */
    inline CreateVolumePermission& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account to be added or removed.</p>
     */
    inline CreateVolumePermission& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account to be added or removed.</p>
     */
    inline CreateVolumePermission& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    PermissionGroup m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
