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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_ALEXAFORBUSINESS_API PutSkillAuthorizationRequest : public AlexaForBusinessRequest
  {
  public:
    PutSkillAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSkillAuthorization"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthorizationResult() const{ return m_authorizationResult; }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline bool AuthorizationResultHasBeenSet() const { return m_authorizationResultHasBeenSet; }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline void SetAuthorizationResult(const Aws::Map<Aws::String, Aws::String>& value) { m_authorizationResultHasBeenSet = true; m_authorizationResult = value; }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline void SetAuthorizationResult(Aws::Map<Aws::String, Aws::String>&& value) { m_authorizationResultHasBeenSet = true; m_authorizationResult = std::move(value); }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline PutSkillAuthorizationRequest& WithAuthorizationResult(const Aws::Map<Aws::String, Aws::String>& value) { SetAuthorizationResult(value); return *this;}

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline PutSkillAuthorizationRequest& WithAuthorizationResult(Aws::Map<Aws::String, Aws::String>&& value) { SetAuthorizationResult(std::move(value)); return *this;}

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline PutSkillAuthorizationRequest& AddAuthorizationResult(const Aws::String& key, const Aws::String& value) { m_authorizationResultHasBeenSet = true; m_authorizationResult.emplace(key, value); return *this; }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline PutSkillAuthorizationRequest& AddAuthorizationResult(Aws::String&& key, const Aws::String& value) { m_authorizationResultHasBeenSet = true; m_authorizationResult.emplace(std::move(key), value); return *this; }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline PutSkillAuthorizationRequest& AddAuthorizationResult(const Aws::String& key, Aws::String&& value) { m_authorizationResultHasBeenSet = true; m_authorizationResult.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline PutSkillAuthorizationRequest& AddAuthorizationResult(Aws::String&& key, Aws::String&& value) { m_authorizationResultHasBeenSet = true; m_authorizationResult.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline PutSkillAuthorizationRequest& AddAuthorizationResult(const char* key, Aws::String&& value) { m_authorizationResultHasBeenSet = true; m_authorizationResult.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline PutSkillAuthorizationRequest& AddAuthorizationResult(Aws::String&& key, const char* value) { m_authorizationResultHasBeenSet = true; m_authorizationResult.emplace(std::move(key), value); return *this; }

    /**
     * <p>The authorization result specific to OAUTH code grant output. "Code” must be
     * populated in the AuthorizationResult map to establish the authorization.</p>
     */
    inline PutSkillAuthorizationRequest& AddAuthorizationResult(const char* key, const char* value) { m_authorizationResultHasBeenSet = true; m_authorizationResult.emplace(key, value); return *this; }


    /**
     * <p>The unique identifier of a skill.</p>
     */
    inline const Aws::String& GetSkillId() const{ return m_skillId; }

    /**
     * <p>The unique identifier of a skill.</p>
     */
    inline bool SkillIdHasBeenSet() const { return m_skillIdHasBeenSet; }

    /**
     * <p>The unique identifier of a skill.</p>
     */
    inline void SetSkillId(const Aws::String& value) { m_skillIdHasBeenSet = true; m_skillId = value; }

    /**
     * <p>The unique identifier of a skill.</p>
     */
    inline void SetSkillId(Aws::String&& value) { m_skillIdHasBeenSet = true; m_skillId = std::move(value); }

    /**
     * <p>The unique identifier of a skill.</p>
     */
    inline void SetSkillId(const char* value) { m_skillIdHasBeenSet = true; m_skillId.assign(value); }

    /**
     * <p>The unique identifier of a skill.</p>
     */
    inline PutSkillAuthorizationRequest& WithSkillId(const Aws::String& value) { SetSkillId(value); return *this;}

    /**
     * <p>The unique identifier of a skill.</p>
     */
    inline PutSkillAuthorizationRequest& WithSkillId(Aws::String&& value) { SetSkillId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a skill.</p>
     */
    inline PutSkillAuthorizationRequest& WithSkillId(const char* value) { SetSkillId(value); return *this;}


    /**
     * <p>The room that the skill is authorized for.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The room that the skill is authorized for.</p>
     */
    inline bool RoomArnHasBeenSet() const { return m_roomArnHasBeenSet; }

    /**
     * <p>The room that the skill is authorized for.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The room that the skill is authorized for.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The room that the skill is authorized for.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The room that the skill is authorized for.</p>
     */
    inline PutSkillAuthorizationRequest& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The room that the skill is authorized for.</p>
     */
    inline PutSkillAuthorizationRequest& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The room that the skill is authorized for.</p>
     */
    inline PutSkillAuthorizationRequest& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_authorizationResult;
    bool m_authorizationResultHasBeenSet;

    Aws::String m_skillId;
    bool m_skillIdHasBeenSet;

    Aws::String m_roomArn;
    bool m_roomArnHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
