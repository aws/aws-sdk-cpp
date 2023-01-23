/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the security groups associated with the EC2
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SecurityGroup">AWS
   * API Reference</a></p>
   */
  class SecurityGroup
  {
  public:
    AWS_GUARDDUTY_API SecurityGroup();
    AWS_GUARDDUTY_API SecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API SecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The security group ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The security group ID of the EC2 instance.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The security group ID of the EC2 instance.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The security group ID of the EC2 instance.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The security group ID of the EC2 instance.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The security group ID of the EC2 instance.</p>
     */
    inline SecurityGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The security group ID of the EC2 instance.</p>
     */
    inline SecurityGroup& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The security group ID of the EC2 instance.</p>
     */
    inline SecurityGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The security group name of the EC2 instance.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The security group name of the EC2 instance.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The security group name of the EC2 instance.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The security group name of the EC2 instance.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The security group name of the EC2 instance.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The security group name of the EC2 instance.</p>
     */
    inline SecurityGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The security group name of the EC2 instance.</p>
     */
    inline SecurityGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The security group name of the EC2 instance.</p>
     */
    inline SecurityGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
