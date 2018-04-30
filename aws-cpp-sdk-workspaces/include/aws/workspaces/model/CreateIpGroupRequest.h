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
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/IpRuleItem.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API CreateIpGroupRequest : public WorkSpacesRequest
  {
  public:
    CreateIpGroupRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIpGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

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
    inline CreateIpGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline CreateIpGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline CreateIpGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The description of the group.</p>
     */
    inline const Aws::String& GetGroupDesc() const{ return m_groupDesc; }

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
    inline CreateIpGroupRequest& WithGroupDesc(const Aws::String& value) { SetGroupDesc(value); return *this;}

    /**
     * <p>The description of the group.</p>
     */
    inline CreateIpGroupRequest& WithGroupDesc(Aws::String&& value) { SetGroupDesc(std::move(value)); return *this;}

    /**
     * <p>The description of the group.</p>
     */
    inline CreateIpGroupRequest& WithGroupDesc(const char* value) { SetGroupDesc(value); return *this;}


    /**
     * <p>The rules to add to the group.</p>
     */
    inline const Aws::Vector<IpRuleItem>& GetUserRules() const{ return m_userRules; }

    /**
     * <p>The rules to add to the group.</p>
     */
    inline void SetUserRules(const Aws::Vector<IpRuleItem>& value) { m_userRulesHasBeenSet = true; m_userRules = value; }

    /**
     * <p>The rules to add to the group.</p>
     */
    inline void SetUserRules(Aws::Vector<IpRuleItem>&& value) { m_userRulesHasBeenSet = true; m_userRules = std::move(value); }

    /**
     * <p>The rules to add to the group.</p>
     */
    inline CreateIpGroupRequest& WithUserRules(const Aws::Vector<IpRuleItem>& value) { SetUserRules(value); return *this;}

    /**
     * <p>The rules to add to the group.</p>
     */
    inline CreateIpGroupRequest& WithUserRules(Aws::Vector<IpRuleItem>&& value) { SetUserRules(std::move(value)); return *this;}

    /**
     * <p>The rules to add to the group.</p>
     */
    inline CreateIpGroupRequest& AddUserRules(const IpRuleItem& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(value); return *this; }

    /**
     * <p>The rules to add to the group.</p>
     */
    inline CreateIpGroupRequest& AddUserRules(IpRuleItem&& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(std::move(value)); return *this; }

  private:

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
