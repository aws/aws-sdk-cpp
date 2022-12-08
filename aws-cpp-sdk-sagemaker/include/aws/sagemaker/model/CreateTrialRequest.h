/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateTrialRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateTrialRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrial"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the trial. The name must be unique in your Amazon Web Services
     * account and is not case-sensitive.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }

    /**
     * <p>The name of the trial. The name must be unique in your Amazon Web Services
     * account and is not case-sensitive.</p>
     */
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }

    /**
     * <p>The name of the trial. The name must be unique in your Amazon Web Services
     * account and is not case-sensitive.</p>
     */
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }

    /**
     * <p>The name of the trial. The name must be unique in your Amazon Web Services
     * account and is not case-sensitive.</p>
     */
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }

    /**
     * <p>The name of the trial. The name must be unique in your Amazon Web Services
     * account and is not case-sensitive.</p>
     */
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }

    /**
     * <p>The name of the trial. The name must be unique in your Amazon Web Services
     * account and is not case-sensitive.</p>
     */
    inline CreateTrialRequest& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}

    /**
     * <p>The name of the trial. The name must be unique in your Amazon Web Services
     * account and is not case-sensitive.</p>
     */
    inline CreateTrialRequest& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial. The name must be unique in your Amazon Web Services
     * account and is not case-sensitive.</p>
     */
    inline CreateTrialRequest& WithTrialName(const char* value) { SetTrialName(value); return *this;}


    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline CreateTrialRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline CreateTrialRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline CreateTrialRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The name of the experiment to associate the trial with.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>The name of the experiment to associate the trial with.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>The name of the experiment to associate the trial with.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>The name of the experiment to associate the trial with.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>The name of the experiment to associate the trial with.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>The name of the experiment to associate the trial with.</p>
     */
    inline CreateTrialRequest& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>The name of the experiment to associate the trial with.</p>
     */
    inline CreateTrialRequest& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment to associate the trial with.</p>
     */
    inline CreateTrialRequest& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}


    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }

    
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }

    
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }

    
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }

    
    inline CreateTrialRequest& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}

    
    inline CreateTrialRequest& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}


    /**
     * <p>A list of tags to associate with the trial. You can use <a>Search</a> API to
     * search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associate with the trial. You can use <a>Search</a> API to
     * search on the tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to associate with the trial. You can use <a>Search</a> API to
     * search on the tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with the trial. You can use <a>Search</a> API to
     * search on the tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to associate with the trial. You can use <a>Search</a> API to
     * search on the tags.</p>
     */
    inline CreateTrialRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with the trial. You can use <a>Search</a> API to
     * search on the tags.</p>
     */
    inline CreateTrialRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to associate with the trial. You can use <a>Search</a> API to
     * search on the tags.</p>
     */
    inline CreateTrialRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associate with the trial. You can use <a>Search</a> API to
     * search on the tags.</p>
     */
    inline CreateTrialRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
