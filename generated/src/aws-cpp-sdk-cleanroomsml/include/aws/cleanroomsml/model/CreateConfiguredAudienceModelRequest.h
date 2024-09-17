/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/AudienceSizeConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanroomsml/model/TagOnCreatePolicy.h>
#include <aws/cleanroomsml/model/SharedAudienceMetrics.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class CreateConfiguredAudienceModelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API CreateConfiguredAudienceModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguredAudienceModel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the configured audience model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateConfiguredAudienceModelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the audience model to use for the
     * configured audience model.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const{ return m_audienceModelArn; }
    inline bool AudienceModelArnHasBeenSet() const { return m_audienceModelArnHasBeenSet; }
    inline void SetAudienceModelArn(const Aws::String& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = value; }
    inline void SetAudienceModelArn(Aws::String&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::move(value); }
    inline void SetAudienceModelArn(const char* value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn.assign(value); }
    inline CreateConfiguredAudienceModelRequest& WithAudienceModelArn(const Aws::String& value) { SetAudienceModelArn(value); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithAudienceModelArn(Aws::String&& value) { SetAudienceModelArn(std::move(value)); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithAudienceModelArn(const char* value) { SetAudienceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configure the Amazon S3 location and IAM Role for audiences created using
     * this configured audience model. Each audience will have a unique location. The
     * IAM Role must have <code>s3:PutObject</code> permission on the destination
     * Amazon S3 location. If the destination is protected with Amazon S3 KMS-SSE, then
     * the Role must also have the required KMS permissions.</p>
     */
    inline const ConfiguredAudienceModelOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline CreateConfiguredAudienceModelRequest& WithOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configured audience model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateConfiguredAudienceModelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether audience metrics are shared.</p>
     */
    inline const Aws::Vector<SharedAudienceMetrics>& GetSharedAudienceMetrics() const{ return m_sharedAudienceMetrics; }
    inline bool SharedAudienceMetricsHasBeenSet() const { return m_sharedAudienceMetricsHasBeenSet; }
    inline void SetSharedAudienceMetrics(const Aws::Vector<SharedAudienceMetrics>& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics = value; }
    inline void SetSharedAudienceMetrics(Aws::Vector<SharedAudienceMetrics>&& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics = std::move(value); }
    inline CreateConfiguredAudienceModelRequest& WithSharedAudienceMetrics(const Aws::Vector<SharedAudienceMetrics>& value) { SetSharedAudienceMetrics(value); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithSharedAudienceMetrics(Aws::Vector<SharedAudienceMetrics>&& value) { SetSharedAudienceMetrics(std::move(value)); return *this;}
    inline CreateConfiguredAudienceModelRequest& AddSharedAudienceMetrics(const SharedAudienceMetrics& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics.push_back(value); return *this; }
    inline CreateConfiguredAudienceModelRequest& AddSharedAudienceMetrics(SharedAudienceMetrics&& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model. The default value is 500.</p>
     */
    inline int GetMinMatchingSeedSize() const{ return m_minMatchingSeedSize; }
    inline bool MinMatchingSeedSizeHasBeenSet() const { return m_minMatchingSeedSizeHasBeenSet; }
    inline void SetMinMatchingSeedSize(int value) { m_minMatchingSeedSizeHasBeenSet = true; m_minMatchingSeedSize = value; }
    inline CreateConfiguredAudienceModelRequest& WithMinMatchingSeedSize(int value) { SetMinMatchingSeedSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configure the list of output sizes of audiences that can be created using
     * this configured audience model. A request to <a>StartAudienceGenerationJob</a>
     * that uses this configured audience model must have an <code>audienceSize</code>
     * selected from this list. You can use the <code>ABSOLUTE</code>
     * <a>AudienceSize</a> to configure out audience sizes using the count of
     * identifiers in the output. You can use the <code>Percentage</code>
     * <a>AudienceSize</a> to configure sizes in the range 1-100 percent.</p>
     */
    inline const AudienceSizeConfig& GetAudienceSizeConfig() const{ return m_audienceSizeConfig; }
    inline bool AudienceSizeConfigHasBeenSet() const { return m_audienceSizeConfigHasBeenSet; }
    inline void SetAudienceSizeConfig(const AudienceSizeConfig& value) { m_audienceSizeConfigHasBeenSet = true; m_audienceSizeConfig = value; }
    inline void SetAudienceSizeConfig(AudienceSizeConfig&& value) { m_audienceSizeConfigHasBeenSet = true; m_audienceSizeConfig = std::move(value); }
    inline CreateConfiguredAudienceModelRequest& WithAudienceSizeConfig(const AudienceSizeConfig& value) { SetAudienceSizeConfig(value); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithAudienceSizeConfig(AudienceSizeConfig&& value) { SetAudienceSizeConfig(std::move(value)); return *this;}
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
    inline CreateConfiguredAudienceModelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConfiguredAudienceModelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateConfiguredAudienceModelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConfiguredAudienceModelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConfiguredAudienceModelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateConfiguredAudienceModelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConfiguredAudienceModelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConfiguredAudienceModelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configure how the service tags audience generation jobs created using this
     * configured audience model. If you specify <code>NONE</code>, the tags from the
     * <a>StartAudienceGenerationJob</a> request determine the tags of the audience
     * generation job. If you specify <code>FROM_PARENT_RESOURCE</code>, the audience
     * generation job inherits the tags from the configured audience model, by default.
     * Tags in the <a>StartAudienceGenerationJob</a> will override the default.</p>
     * <p>When the client is in a different account than the configured audience model,
     * the tags from the client are never applied to a resource in the caller's
     * account.</p>
     */
    inline const TagOnCreatePolicy& GetChildResourceTagOnCreatePolicy() const{ return m_childResourceTagOnCreatePolicy; }
    inline bool ChildResourceTagOnCreatePolicyHasBeenSet() const { return m_childResourceTagOnCreatePolicyHasBeenSet; }
    inline void SetChildResourceTagOnCreatePolicy(const TagOnCreatePolicy& value) { m_childResourceTagOnCreatePolicyHasBeenSet = true; m_childResourceTagOnCreatePolicy = value; }
    inline void SetChildResourceTagOnCreatePolicy(TagOnCreatePolicy&& value) { m_childResourceTagOnCreatePolicyHasBeenSet = true; m_childResourceTagOnCreatePolicy = std::move(value); }
    inline CreateConfiguredAudienceModelRequest& WithChildResourceTagOnCreatePolicy(const TagOnCreatePolicy& value) { SetChildResourceTagOnCreatePolicy(value); return *this;}
    inline CreateConfiguredAudienceModelRequest& WithChildResourceTagOnCreatePolicy(TagOnCreatePolicy&& value) { SetChildResourceTagOnCreatePolicy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;

    ConfiguredAudienceModelOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<SharedAudienceMetrics> m_sharedAudienceMetrics;
    bool m_sharedAudienceMetricsHasBeenSet = false;

    int m_minMatchingSeedSize;
    bool m_minMatchingSeedSizeHasBeenSet = false;

    AudienceSizeConfig m_audienceSizeConfig;
    bool m_audienceSizeConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TagOnCreatePolicy m_childResourceTagOnCreatePolicy;
    bool m_childResourceTagOnCreatePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
