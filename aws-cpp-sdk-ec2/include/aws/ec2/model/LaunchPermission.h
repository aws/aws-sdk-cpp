﻿/**
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
   * <p>Describes a launch permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchPermission">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchPermission
  {
  public:
    LaunchPermission();
    LaunchPermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchPermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the group.</p>
     */
    inline const PermissionGroup& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the group.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroup(const PermissionGroup& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroup(PermissionGroup&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline LaunchPermission& WithGroup(const PermissionGroup& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline LaunchPermission& WithGroup(PermissionGroup&& value) { SetGroup(std::move(value)); return *this;}


    /**
     * <p>The AWS account ID.</p> <p>Constraints: Up to 10 000 account IDs can be
     * specified in a single request.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The AWS account ID.</p> <p>Constraints: Up to 10 000 account IDs can be
     * specified in a single request.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The AWS account ID.</p> <p>Constraints: Up to 10 000 account IDs can be
     * specified in a single request.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The AWS account ID.</p> <p>Constraints: Up to 10 000 account IDs can be
     * specified in a single request.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The AWS account ID.</p> <p>Constraints: Up to 10 000 account IDs can be
     * specified in a single request.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The AWS account ID.</p> <p>Constraints: Up to 10 000 account IDs can be
     * specified in a single request.</p>
     */
    inline LaunchPermission& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The AWS account ID.</p> <p>Constraints: Up to 10 000 account IDs can be
     * specified in a single request.</p>
     */
    inline LaunchPermission& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID.</p> <p>Constraints: Up to 10 000 account IDs can be
     * specified in a single request.</p>
     */
    inline LaunchPermission& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    PermissionGroup m_group;
    bool m_groupHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
