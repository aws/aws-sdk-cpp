﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_ALEXAFORBUSINESS_API GetSkillGroupRequest : public AlexaForBusinessRequest
  {
  public:
    GetSkillGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSkillGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the skill group for which to get details. Required.</p>
     */
    inline const Aws::String& GetSkillGroupArn() const{ return m_skillGroupArn; }

    /**
     * <p>The ARN of the skill group for which to get details. Required.</p>
     */
    inline bool SkillGroupArnHasBeenSet() const { return m_skillGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the skill group for which to get details. Required.</p>
     */
    inline void SetSkillGroupArn(const Aws::String& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = value; }

    /**
     * <p>The ARN of the skill group for which to get details. Required.</p>
     */
    inline void SetSkillGroupArn(Aws::String&& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = std::move(value); }

    /**
     * <p>The ARN of the skill group for which to get details. Required.</p>
     */
    inline void SetSkillGroupArn(const char* value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn.assign(value); }

    /**
     * <p>The ARN of the skill group for which to get details. Required.</p>
     */
    inline GetSkillGroupRequest& WithSkillGroupArn(const Aws::String& value) { SetSkillGroupArn(value); return *this;}

    /**
     * <p>The ARN of the skill group for which to get details. Required.</p>
     */
    inline GetSkillGroupRequest& WithSkillGroupArn(Aws::String&& value) { SetSkillGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the skill group for which to get details. Required.</p>
     */
    inline GetSkillGroupRequest& WithSkillGroupArn(const char* value) { SetSkillGroupArn(value); return *this;}

  private:

    Aws::String m_skillGroupArn;
    bool m_skillGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
