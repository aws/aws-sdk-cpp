/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/InputChannel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class CreateMLInputChannelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API CreateMLInputChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMLInputChannel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The membership ID of the member that is creating the ML input channel.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    CreateMLInputChannelRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated configured model algorithms that are necessary to create this
     * ML input channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfiguredModelAlgorithmAssociations() const { return m_configuredModelAlgorithmAssociations; }
    inline bool ConfiguredModelAlgorithmAssociationsHasBeenSet() const { return m_configuredModelAlgorithmAssociationsHasBeenSet; }
    template<typename ConfiguredModelAlgorithmAssociationsT = Aws::Vector<Aws::String>>
    void SetConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationsT&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations = std::forward<ConfiguredModelAlgorithmAssociationsT>(value); }
    template<typename ConfiguredModelAlgorithmAssociationsT = Aws::Vector<Aws::String>>
    CreateMLInputChannelRequest& WithConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationsT&& value) { SetConfiguredModelAlgorithmAssociations(std::forward<ConfiguredModelAlgorithmAssociationsT>(value)); return *this;}
    template<typename ConfiguredModelAlgorithmAssociationsT = Aws::String>
    CreateMLInputChannelRequest& AddConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationsT&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations.emplace_back(std::forward<ConfiguredModelAlgorithmAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input data that is used to create this ML input channel.</p>
     */
    inline const InputChannel& GetInputChannel() const { return m_inputChannel; }
    inline bool InputChannelHasBeenSet() const { return m_inputChannelHasBeenSet; }
    template<typename InputChannelT = InputChannel>
    void SetInputChannel(InputChannelT&& value) { m_inputChannelHasBeenSet = true; m_inputChannel = std::forward<InputChannelT>(value); }
    template<typename InputChannelT = InputChannel>
    CreateMLInputChannelRequest& WithInputChannel(InputChannelT&& value) { SetInputChannel(std::forward<InputChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ML input channel.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateMLInputChannelRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that the data in the ML input channel is retained.</p>
     */
    inline int GetRetentionInDays() const { return m_retentionInDays; }
    inline bool RetentionInDaysHasBeenSet() const { return m_retentionInDaysHasBeenSet; }
    inline void SetRetentionInDays(int value) { m_retentionInDaysHasBeenSet = true; m_retentionInDays = value; }
    inline CreateMLInputChannelRequest& WithRetentionInDays(int value) { SetRetentionInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ML input channel.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateMLInputChannelRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to access the
     * input channel.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    CreateMLInputChannelRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
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
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMLInputChannelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMLInputChannelRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_configuredModelAlgorithmAssociations;
    bool m_configuredModelAlgorithmAssociationsHasBeenSet = false;

    InputChannel m_inputChannel;
    bool m_inputChannelHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_retentionInDays{0};
    bool m_retentionInDaysHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
