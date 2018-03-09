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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API CreateSkillGroupRequest : public AlexaForBusinessRequest
  {
  public:
    CreateSkillGroupRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSkillGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the skill group.</p>
     */
    inline const Aws::String& GetSkillGroupName() const{ return m_skillGroupName; }

    /**
     * <p>The name for the skill group.</p>
     */
    inline void SetSkillGroupName(const Aws::String& value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName = value; }

    /**
     * <p>The name for the skill group.</p>
     */
    inline void SetSkillGroupName(Aws::String&& value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName = std::move(value); }

    /**
     * <p>The name for the skill group.</p>
     */
    inline void SetSkillGroupName(const char* value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName.assign(value); }

    /**
     * <p>The name for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithSkillGroupName(const Aws::String& value) { SetSkillGroupName(value); return *this;}

    /**
     * <p>The name for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithSkillGroupName(Aws::String&& value) { SetSkillGroupName(std::move(value)); return *this;}

    /**
     * <p>The name for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithSkillGroupName(const char* value) { SetSkillGroupName(value); return *this;}


    /**
     * <p>The description for the skill group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the skill group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the skill group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the skill group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline CreateSkillGroupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline CreateSkillGroupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline CreateSkillGroupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_skillGroupName;
    bool m_skillGroupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
