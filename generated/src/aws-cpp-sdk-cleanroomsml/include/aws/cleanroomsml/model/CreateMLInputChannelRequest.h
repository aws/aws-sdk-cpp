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
    AWS_CLEANROOMSML_API CreateMLInputChannelRequest();

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
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline CreateMLInputChannelRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline CreateMLInputChannelRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline CreateMLInputChannelRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated configured model algorithms that are necessary to create this
     * ML input channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfiguredModelAlgorithmAssociations() const{ return m_configuredModelAlgorithmAssociations; }
    inline bool ConfiguredModelAlgorithmAssociationsHasBeenSet() const { return m_configuredModelAlgorithmAssociationsHasBeenSet; }
    inline void SetConfiguredModelAlgorithmAssociations(const Aws::Vector<Aws::String>& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations = value; }
    inline void SetConfiguredModelAlgorithmAssociations(Aws::Vector<Aws::String>&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations = std::move(value); }
    inline CreateMLInputChannelRequest& WithConfiguredModelAlgorithmAssociations(const Aws::Vector<Aws::String>& value) { SetConfiguredModelAlgorithmAssociations(value); return *this;}
    inline CreateMLInputChannelRequest& WithConfiguredModelAlgorithmAssociations(Aws::Vector<Aws::String>&& value) { SetConfiguredModelAlgorithmAssociations(std::move(value)); return *this;}
    inline CreateMLInputChannelRequest& AddConfiguredModelAlgorithmAssociations(const Aws::String& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations.push_back(value); return *this; }
    inline CreateMLInputChannelRequest& AddConfiguredModelAlgorithmAssociations(Aws::String&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations.push_back(std::move(value)); return *this; }
    inline CreateMLInputChannelRequest& AddConfiguredModelAlgorithmAssociations(const char* value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input data that is used to create this ML input channel.</p>
     */
    inline const InputChannel& GetInputChannel() const{ return m_inputChannel; }
    inline bool InputChannelHasBeenSet() const { return m_inputChannelHasBeenSet; }
    inline void SetInputChannel(const InputChannel& value) { m_inputChannelHasBeenSet = true; m_inputChannel = value; }
    inline void SetInputChannel(InputChannel&& value) { m_inputChannelHasBeenSet = true; m_inputChannel = std::move(value); }
    inline CreateMLInputChannelRequest& WithInputChannel(const InputChannel& value) { SetInputChannel(value); return *this;}
    inline CreateMLInputChannelRequest& WithInputChannel(InputChannel&& value) { SetInputChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ML input channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateMLInputChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateMLInputChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateMLInputChannelRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that the data in the ML input channel is retained.</p>
     */
    inline int GetRetentionInDays() const{ return m_retentionInDays; }
    inline bool RetentionInDaysHasBeenSet() const { return m_retentionInDaysHasBeenSet; }
    inline void SetRetentionInDays(int value) { m_retentionInDaysHasBeenSet = true; m_retentionInDays = value; }
    inline CreateMLInputChannelRequest& WithRetentionInDays(int value) { SetRetentionInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ML input channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateMLInputChannelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateMLInputChannelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateMLInputChannelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to access the
     * input channel.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline CreateMLInputChannelRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline CreateMLInputChannelRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline CreateMLInputChannelRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMLInputChannelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateMLInputChannelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMLInputChannelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateMLInputChannelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMLInputChannelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMLInputChannelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateMLInputChannelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMLInputChannelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMLInputChannelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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

    int m_retentionInDays;
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
