/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/MLInputChannelStatus.h>
#include <aws/cleanroomsml/model/StatusDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanroomsml/model/InputChannel.h>
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
    AWS_CLEANROOMSML_API GetMLInputChannelResult() = default;
    AWS_CLEANROOMSML_API GetMLInputChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetMLInputChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The membership ID of the membership that contains the ML input channel.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    GetMLInputChannelResult& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the ML input
     * channel.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    GetMLInputChannelResult& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const { return m_mlInputChannelArn; }
    template<typename MlInputChannelArnT = Aws::String>
    void SetMlInputChannelArn(MlInputChannelArnT&& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = std::forward<MlInputChannelArnT>(value); }
    template<typename MlInputChannelArnT = Aws::String>
    GetMLInputChannelResult& WithMlInputChannelArn(MlInputChannelArnT&& value) { SetMlInputChannelArn(std::forward<MlInputChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ML input channel.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetMLInputChannelResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured model algorithm associations that were used to create the ML
     * input channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfiguredModelAlgorithmAssociations() const { return m_configuredModelAlgorithmAssociations; }
    template<typename ConfiguredModelAlgorithmAssociationsT = Aws::Vector<Aws::String>>
    void SetConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationsT&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations = std::forward<ConfiguredModelAlgorithmAssociationsT>(value); }
    template<typename ConfiguredModelAlgorithmAssociationsT = Aws::Vector<Aws::String>>
    GetMLInputChannelResult& WithConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationsT&& value) { SetConfiguredModelAlgorithmAssociations(std::forward<ConfiguredModelAlgorithmAssociationsT>(value)); return *this;}
    template<typename ConfiguredModelAlgorithmAssociationsT = Aws::String>
    GetMLInputChannelResult& AddConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationsT&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations.emplace_back(std::forward<ConfiguredModelAlgorithmAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the ML input channel.</p>
     */
    inline MLInputChannelStatus GetStatus() const { return m_status; }
    inline void SetStatus(MLInputChannelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetMLInputChannelResult& WithStatus(MLInputChannelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const StatusDetails& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = StatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StatusDetails>
    GetMLInputChannelResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to keep the data in the ML input channel.</p>
     */
    inline int GetRetentionInDays() const { return m_retentionInDays; }
    inline void SetRetentionInDays(int value) { m_retentionInDaysHasBeenSet = true; m_retentionInDays = value; }
    inline GetMLInputChannelResult& WithRetentionInDays(int value) { SetRetentionInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records in the ML input channel.</p>
     */
    inline long long GetNumberOfRecords() const { return m_numberOfRecords; }
    inline void SetNumberOfRecords(long long value) { m_numberOfRecordsHasBeenSet = true; m_numberOfRecords = value; }
    inline GetMLInputChannelResult& WithNumberOfRecords(long long value) { SetNumberOfRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ML input channel.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetMLInputChannelResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the ML input channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetMLInputChannelResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the ML input channel was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetMLInputChannelResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input channel that was used to create the ML input channel.</p>
     */
    inline const InputChannel& GetInputChannel() const { return m_inputChannel; }
    template<typename InputChannelT = InputChannel>
    void SetInputChannel(InputChannelT&& value) { m_inputChannelHasBeenSet = true; m_inputChannel = std::forward<InputChannelT>(value); }
    template<typename InputChannelT = InputChannel>
    GetMLInputChannelResult& WithInputChannel(InputChannelT&& value) { SetInputChannel(std::forward<InputChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the protected query that was used to create the ML input
     * channel.</p>
     */
    inline const Aws::String& GetProtectedQueryIdentifier() const { return m_protectedQueryIdentifier; }
    template<typename ProtectedQueryIdentifierT = Aws::String>
    void SetProtectedQueryIdentifier(ProtectedQueryIdentifierT&& value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier = std::forward<ProtectedQueryIdentifierT>(value); }
    template<typename ProtectedQueryIdentifierT = Aws::String>
    GetMLInputChannelResult& WithProtectedQueryIdentifier(ProtectedQueryIdentifierT&& value) { SetProtectedQueryIdentifier(std::forward<ProtectedQueryIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of files in the ML input channel.</p>
     */
    inline double GetNumberOfFiles() const { return m_numberOfFiles; }
    inline void SetNumberOfFiles(double value) { m_numberOfFilesHasBeenSet = true; m_numberOfFiles = value; }
    inline GetMLInputChannelResult& WithNumberOfFiles(double value) { SetNumberOfFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GB, of the ML input channel.</p>
     */
    inline double GetSizeInGb() const { return m_sizeInGb; }
    inline void SetSizeInGb(double value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }
    inline GetMLInputChannelResult& WithSizeInGb(double value) { SetSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that was used to create the ML
     * input channel.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GetMLInputChannelResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetMLInputChannelResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetMLInputChannelResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMLInputChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_mlInputChannelArn;
    bool m_mlInputChannelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_configuredModelAlgorithmAssociations;
    bool m_configuredModelAlgorithmAssociationsHasBeenSet = false;

    MLInputChannelStatus m_status{MLInputChannelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    int m_retentionInDays{0};
    bool m_retentionInDaysHasBeenSet = false;

    long long m_numberOfRecords{0};
    bool m_numberOfRecordsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    InputChannel m_inputChannel;
    bool m_inputChannelHasBeenSet = false;

    Aws::String m_protectedQueryIdentifier;
    bool m_protectedQueryIdentifierHasBeenSet = false;

    double m_numberOfFiles{0.0};
    bool m_numberOfFilesHasBeenSet = false;

    double m_sizeInGb{0.0};
    bool m_sizeInGbHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
