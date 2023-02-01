/**
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
  class AssociateSkillWithUsersRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API AssociateSkillWithUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSkillWithUsers"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The private skill ID you want to make available to enrolled users.</p>
     */
    inline const Aws::String& GetSkillId() const{ return m_skillId; }

    /**
     * <p>The private skill ID you want to make available to enrolled users.</p>
     */
    inline bool SkillIdHasBeenSet() const { return m_skillIdHasBeenSet; }

    /**
     * <p>The private skill ID you want to make available to enrolled users.</p>
     */
    inline void SetSkillId(const Aws::String& value) { m_skillIdHasBeenSet = true; m_skillId = value; }

    /**
     * <p>The private skill ID you want to make available to enrolled users.</p>
     */
    inline void SetSkillId(Aws::String&& value) { m_skillIdHasBeenSet = true; m_skillId = std::move(value); }

    /**
     * <p>The private skill ID you want to make available to enrolled users.</p>
     */
    inline void SetSkillId(const char* value) { m_skillIdHasBeenSet = true; m_skillId.assign(value); }

    /**
     * <p>The private skill ID you want to make available to enrolled users.</p>
     */
    inline AssociateSkillWithUsersRequest& WithSkillId(const Aws::String& value) { SetSkillId(value); return *this;}

    /**
     * <p>The private skill ID you want to make available to enrolled users.</p>
     */
    inline AssociateSkillWithUsersRequest& WithSkillId(Aws::String&& value) { SetSkillId(std::move(value)); return *this;}

    /**
     * <p>The private skill ID you want to make available to enrolled users.</p>
     */
    inline AssociateSkillWithUsersRequest& WithSkillId(const char* value) { SetSkillId(value); return *this;}

  private:

    Aws::String m_skillId;
    bool m_skillIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
