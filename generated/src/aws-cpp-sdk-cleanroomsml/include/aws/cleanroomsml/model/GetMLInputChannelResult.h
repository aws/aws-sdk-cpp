/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/InputChannel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/MLInputChannelStatus.h>
#include <aws/cleanroomsml/model/StatusDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetMLInputChannelResult
  {
  public:
    AWS_CLEANROOMSML_API GetMLInputChannelResult();
    AWS_CLEANROOMSML_API GetMLInputChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetMLInputChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the ML input channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline GetMLInputChannelResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GetMLInputChannelResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the ML input channel was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetMLInputChannelResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetMLInputChannelResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the membership that contains the ML input channel.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifier.assign(value); }
    inline GetMLInputChannelResult& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline GetMLInputChannelResult& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline GetMLInputChannelResult& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
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
    inline GetMLInputChannelResult& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}
    inline GetMLInputChannelResult& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}
    inline GetMLInputChannelResult& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input channel that was used to create the ML input channel.</p>
     */
    inline const InputChannel& GetInputChannel() const{ return m_inputChannel; }
    inline void SetInputChannel(const InputChannel& value) { m_inputChannel = value; }
    inline void SetInputChannel(InputChannel&& value) { m_inputChannel = std::move(value); }
    inline GetMLInputChannelResult& WithInputChannel(const InputChannel& value) { SetInputChannel(value); return *this;}
    inline GetMLInputChannelResult& WithInputChannel(InputChannel&& value) { SetInputChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the protected query that was used to create the ML input
     * channel.</p>
     */
    inline const Aws::String& GetProtectedQueryIdentifier() const{ return m_protectedQueryIdentifier; }
    inline void SetProtectedQueryIdentifier(const Aws::String& value) { m_protectedQueryIdentifier = value; }
    inline void SetProtectedQueryIdentifier(Aws::String&& value) { m_protectedQueryIdentifier = std::move(value); }
    inline void SetProtectedQueryIdentifier(const char* value) { m_protectedQueryIdentifier.assign(value); }
    inline GetMLInputChannelResult& WithProtectedQueryIdentifier(const Aws::String& value) { SetProtectedQueryIdentifier(value); return *this;}
    inline GetMLInputChannelResult& WithProtectedQueryIdentifier(Aws::String&& value) { SetProtectedQueryIdentifier(std::move(value)); return *this;}
    inline GetMLInputChannelResult& WithProtectedQueryIdentifier(const char* value) { SetProtectedQueryIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const{ return m_mlInputChannelArn; }
    inline void SetMlInputChannelArn(const Aws::String& value) { m_mlInputChannelArn = value; }
    inline void SetMlInputChannelArn(Aws::String&& value) { m_mlInputChannelArn = std::move(value); }
    inline void SetMlInputChannelArn(const char* value) { m_mlInputChannelArn.assign(value); }
    inline GetMLInputChannelResult& WithMlInputChannelArn(const Aws::String& value) { SetMlInputChannelArn(value); return *this;}
    inline GetMLInputChannelResult& WithMlInputChannelArn(Aws::String&& value) { SetMlInputChannelArn(std::move(value)); return *this;}
    inline GetMLInputChannelResult& WithMlInputChannelArn(const char* value) { SetMlInputChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ML input channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetMLInputChannelResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetMLInputChannelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetMLInputChannelResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured model algorithm associations that were used to create the ML
     * input channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfiguredModelAlgorithmAssociations() const{ return m_configuredModelAlgorithmAssociations; }
    inline void SetConfiguredModelAlgorithmAssociations(const Aws::Vector<Aws::String>& value) { m_configuredModelAlgorithmAssociations = value; }
    inline void SetConfiguredModelAlgorithmAssociations(Aws::Vector<Aws::String>&& value) { m_configuredModelAlgorithmAssociations = std::move(value); }
    inline GetMLInputChannelResult& WithConfiguredModelAlgorithmAssociations(const Aws::Vector<Aws::String>& value) { SetConfiguredModelAlgorithmAssociations(value); return *this;}
    inline GetMLInputChannelResult& WithConfiguredModelAlgorithmAssociations(Aws::Vector<Aws::String>&& value) { SetConfiguredModelAlgorithmAssociations(std::move(value)); return *this;}
    inline GetMLInputChannelResult& AddConfiguredModelAlgorithmAssociations(const Aws::String& value) { m_configuredModelAlgorithmAssociations.push_back(value); return *this; }
    inline GetMLInputChannelResult& AddConfiguredModelAlgorithmAssociations(Aws::String&& value) { m_configuredModelAlgorithmAssociations.push_back(std::move(value)); return *this; }
    inline GetMLInputChannelResult& AddConfiguredModelAlgorithmAssociations(const char* value) { m_configuredModelAlgorithmAssociations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the ML input channel.</p>
     */
    inline const MLInputChannelStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const MLInputChannelStatus& value) { m_status = value; }
    inline void SetStatus(MLInputChannelStatus&& value) { m_status = std::move(value); }
    inline GetMLInputChannelResult& WithStatus(const MLInputChannelStatus& value) { SetStatus(value); return *this;}
    inline GetMLInputChannelResult& WithStatus(MLInputChannelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StatusDetails& GetStatusDetails() const{ return m_statusDetails; }
    inline void SetStatusDetails(const StatusDetails& value) { m_statusDetails = value; }
    inline void SetStatusDetails(StatusDetails&& value) { m_statusDetails = std::move(value); }
    inline GetMLInputChannelResult& WithStatusDetails(const StatusDetails& value) { SetStatusDetails(value); return *this;}
    inline GetMLInputChannelResult& WithStatusDetails(StatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to keep the data in the ML input channel.</p>
     */
    inline int GetRetentionInDays() const{ return m_retentionInDays; }
    inline void SetRetentionInDays(int value) { m_retentionInDays = value; }
    inline GetMLInputChannelResult& WithRetentionInDays(int value) { SetRetentionInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records in the ML input channel.</p>
     */
    inline long long GetNumberOfRecords() const{ return m_numberOfRecords; }
    inline void SetNumberOfRecords(long long value) { m_numberOfRecords = value; }
    inline GetMLInputChannelResult& WithNumberOfRecords(long long value) { SetNumberOfRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of files in the ML input channel.</p>
     */
    inline double GetNumberOfFiles() const{ return m_numberOfFiles; }
    inline void SetNumberOfFiles(double value) { m_numberOfFiles = value; }
    inline GetMLInputChannelResult& WithNumberOfFiles(double value) { SetNumberOfFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GB, of the ML input channel.</p>
     */
    inline double GetSizeInGb() const{ return m_sizeInGb; }
    inline void SetSizeInGb(double value) { m_sizeInGb = value; }
    inline GetMLInputChannelResult& WithSizeInGb(double value) { SetSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ML input channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetMLInputChannelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetMLInputChannelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetMLInputChannelResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that was used to create the ML
     * input channel.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetMLInputChannelResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetMLInputChannelResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetMLInputChannelResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional metadata that you applied to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Clean Rooms ML considers it to be a user tag and will
     * count against the limit of 50 tags. Tags with only the key prefix of aws do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetMLInputChannelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetMLInputChannelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetMLInputChannelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetMLInputChannelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetMLInputChannelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetMLInputChannelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetMLInputChannelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetMLInputChannelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetMLInputChannelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMLInputChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMLInputChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMLInputChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_membershipIdentifier;

    Aws::String m_collaborationIdentifier;

    InputChannel m_inputChannel;

    Aws::String m_protectedQueryIdentifier;

    Aws::String m_mlInputChannelArn;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_configuredModelAlgorithmAssociations;

    MLInputChannelStatus m_status;

    StatusDetails m_statusDetails;

    int m_retentionInDays;

    long long m_numberOfRecords;

    double m_numberOfFiles;

    double m_sizeInGb;

    Aws::String m_description;

    Aws::String m_kmsKeyArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
