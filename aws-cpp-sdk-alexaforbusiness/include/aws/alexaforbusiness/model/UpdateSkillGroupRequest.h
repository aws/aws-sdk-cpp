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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API UpdateSkillGroupRequest : public AlexaForBusinessRequest
  {
  public:
    UpdateSkillGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSkillGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the skill group to update. </p>
     */
    inline const Aws::String& GetSkillGroupArn() const{ return m_skillGroupArn; }

    /**
     * <p>The ARN of the skill group to update. </p>
     */
    inline bool SkillGroupArnHasBeenSet() const { return m_skillGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the skill group to update. </p>
     */
    inline void SetSkillGroupArn(const Aws::String& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = value; }

    /**
     * <p>The ARN of the skill group to update. </p>
     */
    inline void SetSkillGroupArn(Aws::String&& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = std::move(value); }

    /**
     * <p>The ARN of the skill group to update. </p>
     */
    inline void SetSkillGroupArn(const char* value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn.assign(value); }

    /**
     * <p>The ARN of the skill group to update. </p>
     */
    inline UpdateSkillGroupRequest& WithSkillGroupArn(const Aws::String& value) { SetSkillGroupArn(value); return *this;}

    /**
     * <p>The ARN of the skill group to update. </p>
     */
    inline UpdateSkillGroupRequest& WithSkillGroupArn(Aws::String&& value) { SetSkillGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the skill group to update. </p>
     */
    inline UpdateSkillGroupRequest& WithSkillGroupArn(const char* value) { SetSkillGroupArn(value); return *this;}


    /**
     * <p>The updated name for the skill group.</p>
     */
    inline const Aws::String& GetSkillGroupName() const{ return m_skillGroupName; }

    /**
     * <p>The updated name for the skill group.</p>
     */
    inline bool SkillGroupNameHasBeenSet() const { return m_skillGroupNameHasBeenSet; }

    /**
     * <p>The updated name for the skill group.</p>
     */
    inline void SetSkillGroupName(const Aws::String& value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName = value; }

    /**
     * <p>The updated name for the skill group.</p>
     */
    inline void SetSkillGroupName(Aws::String&& value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName = std::move(value); }

    /**
     * <p>The updated name for the skill group.</p>
     */
    inline void SetSkillGroupName(const char* value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName.assign(value); }

    /**
     * <p>The updated name for the skill group.</p>
     */
    inline UpdateSkillGroupRequest& WithSkillGroupName(const Aws::String& value) { SetSkillGroupName(value); return *this;}

    /**
     * <p>The updated name for the skill group.</p>
     */
    inline UpdateSkillGroupRequest& WithSkillGroupName(Aws::String&& value) { SetSkillGroupName(std::move(value)); return *this;}

    /**
     * <p>The updated name for the skill group.</p>
     */
    inline UpdateSkillGroupRequest& WithSkillGroupName(const char* value) { SetSkillGroupName(value); return *this;}


    /**
     * <p>The updated description for the skill group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description for the skill group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description for the skill group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description for the skill group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description for the skill group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description for the skill group.</p>
     */
    inline UpdateSkillGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description for the skill group.</p>
     */
    inline UpdateSkillGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description for the skill group.</p>
     */
    inline UpdateSkillGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_skillGroupArn;
    bool m_skillGroupArnHasBeenSet;

    Aws::String m_skillGroupName;
    bool m_skillGroupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
