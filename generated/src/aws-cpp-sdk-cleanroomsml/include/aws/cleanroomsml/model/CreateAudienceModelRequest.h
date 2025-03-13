/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateAudienceModelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API CreateAudienceModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAudienceModel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The start date and time of the training window.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const { return m_trainingDataStartTime; }
    inline bool TrainingDataStartTimeHasBeenSet() const { return m_trainingDataStartTimeHasBeenSet; }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    void SetTrainingDataStartTime(TrainingDataStartTimeT&& value) { m_trainingDataStartTimeHasBeenSet = true; m_trainingDataStartTime = std::forward<TrainingDataStartTimeT>(value); }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    CreateAudienceModelRequest& WithTrainingDataStartTime(TrainingDataStartTimeT&& value) { SetTrainingDataStartTime(std::forward<TrainingDataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date and time of the training window.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const { return m_trainingDataEndTime; }
    inline bool TrainingDataEndTimeHasBeenSet() const { return m_trainingDataEndTimeHasBeenSet; }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    void SetTrainingDataEndTime(TrainingDataEndTimeT&& value) { m_trainingDataEndTimeHasBeenSet = true; m_trainingDataEndTime = std::forward<TrainingDataEndTimeT>(value); }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    CreateAudienceModelRequest& WithTrainingDataEndTime(TrainingDataEndTimeT&& value) { SetTrainingDataEndTime(std::forward<TrainingDataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the audience model resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAudienceModelRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset for this audience
     * model.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const { return m_trainingDatasetArn; }
    inline bool TrainingDatasetArnHasBeenSet() const { return m_trainingDatasetArnHasBeenSet; }
    template<typename TrainingDatasetArnT = Aws::String>
    void SetTrainingDatasetArn(TrainingDatasetArnT&& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = std::forward<TrainingDatasetArnT>(value); }
    template<typename TrainingDatasetArnT = Aws::String>
    CreateAudienceModelRequest& WithTrainingDatasetArn(TrainingDatasetArnT&& value) { SetTrainingDatasetArn(std::forward<TrainingDatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    CreateAudienceModelRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
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
    CreateAudienceModelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAudienceModelRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The description of the audience model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAudienceModelRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_trainingDataStartTime{};
    bool m_trainingDataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataEndTime{};
    bool m_trainingDataEndTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trainingDatasetArn;
    bool m_trainingDatasetArnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
