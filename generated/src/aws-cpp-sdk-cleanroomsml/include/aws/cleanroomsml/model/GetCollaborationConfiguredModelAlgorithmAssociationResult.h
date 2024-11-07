/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/PrivacyConfiguration.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class GetCollaborationConfiguredModelAlgorithmAssociationResult
  {
  public:
    AWS_CLEANROOMSML_API GetCollaborationConfiguredModelAlgorithmAssociationResult();
    AWS_CLEANROOMSML_API GetCollaborationConfiguredModelAlgorithmAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetCollaborationConfiguredModelAlgorithmAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the configured model algorithm association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the configured model algorithm association was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm
     * association.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const{ return m_configuredModelAlgorithmAssociationArn; }
    inline void SetConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { m_configuredModelAlgorithmAssociationArn = value; }
    inline void SetConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { m_configuredModelAlgorithmAssociationArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmAssociationArn(const char* value) { m_configuredModelAlgorithmAssociationArn.assign(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { SetConfiguredModelAlgorithmAssociationArn(std::move(value)); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmAssociationArn(const char* value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the member that created the configured model algorithm
     * association.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifier.assign(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the configured model
     * algorithm association.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifier = value; }
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifier = std::move(value); }
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifier.assign(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm
     * association.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmArn() const{ return m_configuredModelAlgorithmArn; }
    inline void SetConfiguredModelAlgorithmArn(const Aws::String& value) { m_configuredModelAlgorithmArn = value; }
    inline void SetConfiguredModelAlgorithmArn(Aws::String&& value) { m_configuredModelAlgorithmArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmArn(const char* value) { m_configuredModelAlgorithmArn.assign(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmArn(const Aws::String& value) { SetConfiguredModelAlgorithmArn(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmArn(Aws::String&& value) { SetConfiguredModelAlgorithmArn(std::move(value)); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmArn(const char* value) { SetConfiguredModelAlgorithmArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configured model algorithm association.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configured model algorithm association.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the member that created the configured model algorithm
     * association.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountId = value; }
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountId = std::move(value); }
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountId.assign(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}
    ///@}

    ///@{
    
    inline const PrivacyConfiguration& GetPrivacyConfiguration() const{ return m_privacyConfiguration; }
    inline void SetPrivacyConfiguration(const PrivacyConfiguration& value) { m_privacyConfiguration = value; }
    inline void SetPrivacyConfiguration(PrivacyConfiguration&& value) { m_privacyConfiguration = std::move(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithPrivacyConfiguration(const PrivacyConfiguration& value) { SetPrivacyConfiguration(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithPrivacyConfiguration(PrivacyConfiguration&& value) { SetPrivacyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCollaborationConfiguredModelAlgorithmAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_configuredModelAlgorithmAssociationArn;

    Aws::String m_membershipIdentifier;

    Aws::String m_collaborationIdentifier;

    Aws::String m_configuredModelAlgorithmArn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_creatorAccountId;

    PrivacyConfiguration m_privacyConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
