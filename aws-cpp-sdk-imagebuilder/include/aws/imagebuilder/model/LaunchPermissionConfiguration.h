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
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration for a launch permission. The launch permission
   * modification request is sent to the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyImageAttribute.html">EC2
   * ModifyImageAttribute</a> API on behalf of the user for each Region they have
   * selected to distribute the AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LaunchPermissionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API LaunchPermissionConfiguration
  {
  public:
    LaunchPermissionConfiguration();
    LaunchPermissionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LaunchPermissionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The AWS account ID. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p> The AWS account ID. </p>
     */
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }

    /**
     * <p> The AWS account ID. </p>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p> The AWS account ID. </p>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }

    /**
     * <p> The AWS account ID. </p>
     */
    inline LaunchPermissionConfiguration& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p> The AWS account ID. </p>
     */
    inline LaunchPermissionConfiguration& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p> The AWS account ID. </p>
     */
    inline LaunchPermissionConfiguration& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p> The AWS account ID. </p>
     */
    inline LaunchPermissionConfiguration& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The AWS account ID. </p>
     */
    inline LaunchPermissionConfiguration& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }


    /**
     * <p>The name of the group. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const{ return m_userGroups; }

    /**
     * <p>The name of the group. </p>
     */
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }

    /**
     * <p>The name of the group. </p>
     */
    inline void SetUserGroups(const Aws::Vector<Aws::String>& value) { m_userGroupsHasBeenSet = true; m_userGroups = value; }

    /**
     * <p>The name of the group. </p>
     */
    inline void SetUserGroups(Aws::Vector<Aws::String>&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::move(value); }

    /**
     * <p>The name of the group. </p>
     */
    inline LaunchPermissionConfiguration& WithUserGroups(const Aws::Vector<Aws::String>& value) { SetUserGroups(value); return *this;}

    /**
     * <p>The name of the group. </p>
     */
    inline LaunchPermissionConfiguration& WithUserGroups(Aws::Vector<Aws::String>&& value) { SetUserGroups(std::move(value)); return *this;}

    /**
     * <p>The name of the group. </p>
     */
    inline LaunchPermissionConfiguration& AddUserGroups(const Aws::String& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }

    /**
     * <p>The name of the group. </p>
     */
    inline LaunchPermissionConfiguration& AddUserGroups(Aws::String&& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the group. </p>
     */
    inline LaunchPermissionConfiguration& AddUserGroups(const char* value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet;

    Aws::Vector<Aws::String> m_userGroups;
    bool m_userGroupsHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
