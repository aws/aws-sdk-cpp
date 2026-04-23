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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/IpRuleItem.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes an IP access control group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspacesIpGroup">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API WorkspacesIpGroup
  {
  public:
    WorkspacesIpGroup();
    WorkspacesIpGroup(Aws::Utils::Json::JsonView jsonValue);
    WorkspacesIpGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier of the group.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The identifier of the group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The identifier of the group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The identifier of the group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The identifier of the group.</p>
     */
    inline WorkspacesIpGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier of the group.</p>
     */
    inline WorkspacesIpGroup& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the group.</p>
     */
    inline WorkspacesIpGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline WorkspacesIpGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline WorkspacesIpGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline WorkspacesIpGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The description of the group.</p>
     */
    inline const Aws::String& GetGroupDesc() const{ return m_groupDesc; }

    /**
     * <p>The description of the group.</p>
     */
    inline bool GroupDescHasBeenSet() const { return m_groupDescHasBeenSet; }

    /**
     * <p>The description of the group.</p>
     */
    inline void SetGroupDesc(const Aws::String& value) { m_groupDescHasBeenSet = true; m_groupDesc = value; }

    /**
     * <p>The description of the group.</p>
     */
    inline void SetGroupDesc(Aws::String&& value) { m_groupDescHasBeenSet = true; m_groupDesc = std::move(value); }

    /**
     * <p>The description of the group.</p>
     */
    inline void SetGroupDesc(const char* value) { m_groupDescHasBeenSet = true; m_groupDesc.assign(value); }

    /**
     * <p>The description of the group.</p>
     */
    inline WorkspacesIpGroup& WithGroupDesc(const Aws::String& value) { SetGroupDesc(value); return *this;}

    /**
     * <p>The description of the group.</p>
     */
    inline WorkspacesIpGroup& WithGroupDesc(Aws::String&& value) { SetGroupDesc(std::move(value)); return *this;}

    /**
     * <p>The description of the group.</p>
     */
    inline WorkspacesIpGroup& WithGroupDesc(const char* value) { SetGroupDesc(value); return *this;}


    /**
     * <p>The rules.</p>
     */
    inline const Aws::Vector<IpRuleItem>& GetUserRules() const{ return m_userRules; }

    /**
     * <p>The rules.</p>
     */
    inline bool UserRulesHasBeenSet() const { return m_userRulesHasBeenSet; }

    /**
     * <p>The rules.</p>
     */
    inline void SetUserRules(const Aws::Vector<IpRuleItem>& value) { m_userRulesHasBeenSet = true; m_userRules = value; }

    /**
     * <p>The rules.</p>
     */
    inline void SetUserRules(Aws::Vector<IpRuleItem>&& value) { m_userRulesHasBeenSet = true; m_userRules = std::move(value); }

    /**
     * <p>The rules.</p>
     */
    inline WorkspacesIpGroup& WithUserRules(const Aws::Vector<IpRuleItem>& value) { SetUserRules(value); return *this;}

    /**
     * <p>The rules.</p>
     */
    inline WorkspacesIpGroup& WithUserRules(Aws::Vector<IpRuleItem>&& value) { SetUserRules(std::move(value)); return *this;}

    /**
     * <p>The rules.</p>
     */
    inline WorkspacesIpGroup& AddUserRules(const IpRuleItem& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(value); return *this; }

    /**
     * <p>The rules.</p>
     */
    inline WorkspacesIpGroup& AddUserRules(IpRuleItem&& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_groupDesc;
    bool m_groupDescHasBeenSet;

    Aws::Vector<IpRuleItem> m_userRules;
    bool m_userRulesHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
