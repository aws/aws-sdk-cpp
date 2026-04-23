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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API GetInvitationConfigurationResult
  {
  public:
    GetInvitationConfigurationResult();
    GetInvitationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInvitationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline const Aws::String& GetOrganizationName() const{ return m_organizationName; }

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline void SetOrganizationName(const Aws::String& value) { m_organizationName = value; }

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline void SetOrganizationName(Aws::String&& value) { m_organizationName = std::move(value); }

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline void SetOrganizationName(const char* value) { m_organizationName.assign(value); }

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline GetInvitationConfigurationResult& WithOrganizationName(const Aws::String& value) { SetOrganizationName(value); return *this;}

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline GetInvitationConfigurationResult& WithOrganizationName(Aws::String&& value) { SetOrganizationName(std::move(value)); return *this;}

    /**
     * <p>The name of the organization sending the enrollment invite to a user.</p>
     */
    inline GetInvitationConfigurationResult& WithOrganizationName(const char* value) { SetOrganizationName(value); return *this;}


    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline const Aws::String& GetContactEmail() const{ return m_contactEmail; }

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline void SetContactEmail(const Aws::String& value) { m_contactEmail = value; }

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline void SetContactEmail(Aws::String&& value) { m_contactEmail = std::move(value); }

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline void SetContactEmail(const char* value) { m_contactEmail.assign(value); }

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline GetInvitationConfigurationResult& WithContactEmail(const Aws::String& value) { SetContactEmail(value); return *this;}

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline GetInvitationConfigurationResult& WithContactEmail(Aws::String&& value) { SetContactEmail(std::move(value)); return *this;}

    /**
     * <p>The email ID of the organization or individual contact that the enrolled user
     * can use. </p>
     */
    inline GetInvitationConfigurationResult& WithContactEmail(const char* value) { SetContactEmail(value); return *this;}


    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateSkillIds() const{ return m_privateSkillIds; }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline void SetPrivateSkillIds(const Aws::Vector<Aws::String>& value) { m_privateSkillIds = value; }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline void SetPrivateSkillIds(Aws::Vector<Aws::String>&& value) { m_privateSkillIds = std::move(value); }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline GetInvitationConfigurationResult& WithPrivateSkillIds(const Aws::Vector<Aws::String>& value) { SetPrivateSkillIds(value); return *this;}

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline GetInvitationConfigurationResult& WithPrivateSkillIds(Aws::Vector<Aws::String>&& value) { SetPrivateSkillIds(std::move(value)); return *this;}

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline GetInvitationConfigurationResult& AddPrivateSkillIds(const Aws::String& value) { m_privateSkillIds.push_back(value); return *this; }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline GetInvitationConfigurationResult& AddPrivateSkillIds(Aws::String&& value) { m_privateSkillIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of private skill IDs that you want to recommend to the user to
     * enable in the invitation.</p>
     */
    inline GetInvitationConfigurationResult& AddPrivateSkillIds(const char* value) { m_privateSkillIds.push_back(value); return *this; }

  private:

    Aws::String m_organizationName;

    Aws::String m_contactEmail;

    Aws::Vector<Aws::String> m_privateSkillIds;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
