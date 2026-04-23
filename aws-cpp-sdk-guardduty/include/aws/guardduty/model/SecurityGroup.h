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
   * Security groups associated with the EC2 instance.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SecurityGroup">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API SecurityGroup
  {
  public:
    SecurityGroup();
    SecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    SecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * EC2 instance's security group ID.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * EC2 instance's security group ID.
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * EC2 instance's security group ID.
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * EC2 instance's security group ID.
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * EC2 instance's security group ID.
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * EC2 instance's security group ID.
     */
    inline SecurityGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * EC2 instance's security group ID.
     */
    inline SecurityGroup& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * EC2 instance's security group ID.
     */
    inline SecurityGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * EC2 instance's security group name.
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * EC2 instance's security group name.
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * EC2 instance's security group name.
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * EC2 instance's security group name.
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * EC2 instance's security group name.
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * EC2 instance's security group name.
     */
    inline SecurityGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * EC2 instance's security group name.
     */
    inline SecurityGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * EC2 instance's security group name.
     */
    inline SecurityGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
