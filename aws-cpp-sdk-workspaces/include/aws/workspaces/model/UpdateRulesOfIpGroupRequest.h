﻿/*
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
  class AWS_WORKSPACES_API UpdateRulesOfIpGroupRequest : public WorkSpacesRequest
  {
  public:
    UpdateRulesOfIpGroupRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRulesOfIpGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of the group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the group.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the group.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the group.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>One or more rules.</p>
     */
    inline const Aws::Vector<IpRuleItem>& GetUserRules() const{ return m_userRules; }

    /**
     * <p>One or more rules.</p>
     */
    inline void SetUserRules(const Aws::Vector<IpRuleItem>& value) { m_userRulesHasBeenSet = true; m_userRules = value; }

    /**
     * <p>One or more rules.</p>
     */
    inline void SetUserRules(Aws::Vector<IpRuleItem>&& value) { m_userRulesHasBeenSet = true; m_userRules = std::move(value); }

    /**
     * <p>One or more rules.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithUserRules(const Aws::Vector<IpRuleItem>& value) { SetUserRules(value); return *this;}

    /**
     * <p>One or more rules.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithUserRules(Aws::Vector<IpRuleItem>&& value) { SetUserRules(std::move(value)); return *this;}

    /**
     * <p>One or more rules.</p>
     */
    inline UpdateRulesOfIpGroupRequest& AddUserRules(const IpRuleItem& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(value); return *this; }

    /**
     * <p>One or more rules.</p>
     */
    inline UpdateRulesOfIpGroupRequest& AddUserRules(IpRuleItem&& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::Vector<IpRuleItem> m_userRules;
    bool m_userRulesHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
