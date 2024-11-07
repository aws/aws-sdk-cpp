/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/MLInputChannelStatus.h>
#include <aws/cleanroomsml/model/StatusDetails.h>
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
  class GetCollaborationMLInputChannelResult
  {
  public:
    AWS_CLEANROOMSML_API GetCollaborationMLInputChannelResult();
    AWS_CLEANROOMSML_API GetCollaborationMLInputChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetCollaborationMLInputChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the ML input channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline GetCollaborationMLInputChannelResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the ML input channel was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetCollaborationMLInputChannelResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the member who created the ML input channel.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountId = value; }
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountId = std::move(value); }
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountId.assign(value); }
    inline GetCollaborationMLInputChannelResult& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}
    inline GetCollaborationMLInputChannelResult& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the membership that contains the ML input channel.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifier.assign(value); }
    inline GetCollaborationMLInputChannelResult& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline GetCollaborationMLInputChannelResult& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the ML input
     * channel.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifier = value; }
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifier = std::move(value); }
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifier.assign(value); }
    inline GetCollaborationMLInputChannelResult& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}
    inline GetCollaborationMLInputChannelResult& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const{ return m_mlInputChannelArn; }
    inline void SetMlInputChannelArn(const Aws::String& value) { m_mlInputChannelArn = value; }
    inline void SetMlInputChannelArn(Aws::String&& value) { m_mlInputChannelArn = std::move(value); }
    inline void SetMlInputChannelArn(const char* value) { m_mlInputChannelArn.assign(value); }
    inline GetCollaborationMLInputChannelResult& WithMlInputChannelArn(const Aws::String& value) { SetMlInputChannelArn(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithMlInputChannelArn(Aws::String&& value) { SetMlInputChannelArn(std::move(value)); return *this;}
    inline GetCollaborationMLInputChannelResult& WithMlInputChannelArn(const char* value) { SetMlInputChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ML input channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetCollaborationMLInputChannelResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetCollaborationMLInputChannelResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured model algorithm associations that were used to create the ML
     * input channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfiguredModelAlgorithmAssociations() const{ return m_configuredModelAlgorithmAssociations; }
    inline void SetConfiguredModelAlgorithmAssociations(const Aws::Vector<Aws::String>& value) { m_configuredModelAlgorithmAssociations = value; }
    inline void SetConfiguredModelAlgorithmAssociations(Aws::Vector<Aws::String>&& value) { m_configuredModelAlgorithmAssociations = std::move(value); }
    inline GetCollaborationMLInputChannelResult& WithConfiguredModelAlgorithmAssociations(const Aws::Vector<Aws::String>& value) { SetConfiguredModelAlgorithmAssociations(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithConfiguredModelAlgorithmAssociations(Aws::Vector<Aws::String>&& value) { SetConfiguredModelAlgorithmAssociations(std::move(value)); return *this;}
    inline GetCollaborationMLInputChannelResult& AddConfiguredModelAlgorithmAssociations(const Aws::String& value) { m_configuredModelAlgorithmAssociations.push_back(value); return *this; }
    inline GetCollaborationMLInputChannelResult& AddConfiguredModelAlgorithmAssociations(Aws::String&& value) { m_configuredModelAlgorithmAssociations.push_back(std::move(value)); return *this; }
    inline GetCollaborationMLInputChannelResult& AddConfiguredModelAlgorithmAssociations(const char* value) { m_configuredModelAlgorithmAssociations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the ML input channel.</p>
     */
    inline const MLInputChannelStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const MLInputChannelStatus& value) { m_status = value; }
    inline void SetStatus(MLInputChannelStatus&& value) { m_status = std::move(value); }
    inline GetCollaborationMLInputChannelResult& WithStatus(const MLInputChannelStatus& value) { SetStatus(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithStatus(MLInputChannelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StatusDetails& GetStatusDetails() const{ return m_statusDetails; }
    inline void SetStatusDetails(const StatusDetails& value) { m_statusDetails = value; }
    inline void SetStatusDetails(StatusDetails&& value) { m_statusDetails = std::move(value); }
    inline GetCollaborationMLInputChannelResult& WithStatusDetails(const StatusDetails& value) { SetStatusDetails(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithStatusDetails(StatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain the data for the ML input channel.</p>
     */
    inline int GetRetentionInDays() const{ return m_retentionInDays; }
    inline void SetRetentionInDays(int value) { m_retentionInDays = value; }
    inline GetCollaborationMLInputChannelResult& WithRetentionInDays(int value) { SetRetentionInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records in the ML input channel.</p>
     */
    inline long long GetNumberOfRecords() const{ return m_numberOfRecords; }
    inline void SetNumberOfRecords(long long value) { m_numberOfRecords = value; }
    inline GetCollaborationMLInputChannelResult& WithNumberOfRecords(long long value) { SetNumberOfRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ML input channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetCollaborationMLInputChannelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetCollaborationMLInputChannelResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCollaborationMLInputChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCollaborationMLInputChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCollaborationMLInputChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_creatorAccountId;

    Aws::String m_membershipIdentifier;

    Aws::String m_collaborationIdentifier;

    Aws::String m_mlInputChannelArn;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_configuredModelAlgorithmAssociations;

    MLInputChannelStatus m_status;

    StatusDetails m_statusDetails;

    int m_retentionInDays;

    long long m_numberOfRecords;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
