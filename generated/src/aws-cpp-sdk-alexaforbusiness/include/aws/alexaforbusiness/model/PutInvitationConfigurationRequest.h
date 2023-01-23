/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class PutInvitationConfigurationRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API PutInvitationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInvitationConfiguration"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline const Aws::String& GetOrganizationName() const{ return m_organizationName; }

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline void SetOrganizationName(const Aws::String& value) { m_organizationNameHasBeenSet = true; m_organizationName = value; }

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline void SetOrganizationName(Aws::String&& value) { m_organizationNameHasBeenSet = true; m_organizationName = std::move(value); }

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline void SetOrganizationName(const char* value) { m_organizationNameHasBeenSet = true; m_organizationName.assign(value); }

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline PutInvitationConfigurationRequest& WithOrganizationName(const Aws::String& value) { SetOrganizationName(value); return *this;}

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline PutInvitationConfigurationRequest& WithOrganizationName(Aws::String&& value) { SetOrganizationName(std::move(value)); return *this;}

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline PutInvitationConfigurationRequest& WithOrganizationName(const char* value) { SetOrganizationName(value); return *this;}


    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline const Aws::String& GetContactEmail() const{ return m_contactEmail; }

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline bool ContactEmailHasBeenSet() const { return m_contactEmailHasBeenSet; }

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline void SetContactEmail(const Aws::String& value) { m_contactEmailHasBeenSet = true; m_contactEmail = value; }

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline void SetContactEmail(Aws::String&& value) { m_contactEmailHasBeenSet = true; m_contactEmail = std::move(value); }

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline void SetContactEmail(const char* value) { m_contactEmailHasBeenSet = true; m_contactEmail.assign(value); }

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline PutInvitationConfigurationRequest& WithContactEmail(const Aws::String& value) { SetContactEmail(value); return *this;}

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline PutInvitationConfigurationRequest& WithContactEmail(Aws::String&& value) { SetContactEmail(std::move(value)); return *this;}

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline PutInvitationConfigurationRequest& WithContactEmail(const char* value) { SetContactEmail(value); return *this;}


    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateSkillIds() const{ return m_privateSkillIds; }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline bool PrivateSkillIdsHasBeenSet() const { return m_privateSkillIdsHasBeenSet; }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline void SetPrivateSkillIds(const Aws::Vector<Aws::String>& value) { m_privateSkillIdsHasBeenSet = true; m_privateSkillIds = value; }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline void SetPrivateSkillIds(Aws::Vector<Aws::String>&& value) { m_privateSkillIdsHasBeenSet = true; m_privateSkillIds = std::move(value); }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline PutInvitationConfigurationRequest& WithPrivateSkillIds(const Aws::Vector<Aws::String>& value) { SetPrivateSkillIds(value); return *this;}

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline PutInvitationConfigurationRequest& WithPrivateSkillIds(Aws::Vector<Aws::String>&& value) { SetPrivateSkillIds(std::move(value)); return *this;}

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline PutInvitationConfigurationRequest& AddPrivateSkillIds(const Aws::String& value) { m_privateSkillIdsHasBeenSet = true; m_privateSkillIds.push_back(value); return *this; }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline PutInvitationConfigurationRequest& AddPrivateSkillIds(Aws::String&& value) { m_privateSkillIdsHasBeenSet = true; m_privateSkillIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline PutInvitationConfigurationRequest& AddPrivateSkillIds(const char* value) { m_privateSkillIdsHasBeenSet = true; m_privateSkillIds.push_back(value); return *this; }

  private:

    Aws::String m_organizationName;
    bool m_organizationNameHasBeenSet = false;

    Aws::String m_contactEmail;
    bool m_contactEmailHasBeenSet = false;

    Aws::Vector<Aws::String> m_privateSkillIds;
    bool m_privateSkillIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
