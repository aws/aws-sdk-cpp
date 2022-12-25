/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateExperimentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExperiment"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the experiment. The name must be unique in your Amazon Web
     * Services account and is not case-sensitive.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>The name of the experiment. The name must be unique in your Amazon Web
     * Services account and is not case-sensitive.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>The name of the experiment. The name must be unique in your Amazon Web
     * Services account and is not case-sensitive.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>The name of the experiment. The name must be unique in your Amazon Web
     * Services account and is not case-sensitive.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>The name of the experiment. The name must be unique in your Amazon Web
     * Services account and is not case-sensitive.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>The name of the experiment. The name must be unique in your Amazon Web
     * Services account and is not case-sensitive.</p>
     */
    inline CreateExperimentRequest& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>The name of the experiment. The name must be unique in your Amazon Web
     * Services account and is not case-sensitive.</p>
     */
    inline CreateExperimentRequest& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment. The name must be unique in your Amazon Web
     * Services account and is not case-sensitive.</p>
     */
    inline CreateExperimentRequest& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}


    /**
     * <p>The name of the experiment as displayed. The name doesn't need to be unique.
     * If you don't specify <code>DisplayName</code>, the value in
     * <code>ExperimentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the experiment as displayed. The name doesn't need to be unique.
     * If you don't specify <code>DisplayName</code>, the value in
     * <code>ExperimentName</code> is displayed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the experiment as displayed. The name doesn't need to be unique.
     * If you don't specify <code>DisplayName</code>, the value in
     * <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the experiment as displayed. The name doesn't need to be unique.
     * If you don't specify <code>DisplayName</code>, the value in
     * <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the experiment as displayed. The name doesn't need to be unique.
     * If you don't specify <code>DisplayName</code>, the value in
     * <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the experiment as displayed. The name doesn't need to be unique.
     * If you don't specify <code>DisplayName</code>, the value in
     * <code>ExperimentName</code> is displayed.</p>
     */
    inline CreateExperimentRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the experiment as displayed. The name doesn't need to be unique.
     * If you don't specify <code>DisplayName</code>, the value in
     * <code>ExperimentName</code> is displayed.</p>
     */
    inline CreateExperimentRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment as displayed. The name doesn't need to be unique.
     * If you don't specify <code>DisplayName</code>, the value in
     * <code>ExperimentName</code> is displayed.</p>
     */
    inline CreateExperimentRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The description of the experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the experiment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the experiment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the experiment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the experiment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the experiment.</p>
     */
    inline CreateExperimentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the experiment.</p>
     */
    inline CreateExperimentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the experiment.</p>
     */
    inline CreateExperimentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of tags to associate with the experiment. You can use <a>Search</a>
     * API to search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associate with the experiment. You can use <a>Search</a>
     * API to search on the tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to associate with the experiment. You can use <a>Search</a>
     * API to search on the tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with the experiment. You can use <a>Search</a>
     * API to search on the tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to associate with the experiment. You can use <a>Search</a>
     * API to search on the tags.</p>
     */
    inline CreateExperimentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with the experiment. You can use <a>Search</a>
     * API to search on the tags.</p>
     */
    inline CreateExperimentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to associate with the experiment. You can use <a>Search</a>
     * API to search on the tags.</p>
     */
    inline CreateExperimentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associate with the experiment. You can use <a>Search</a>
     * API to search on the tags.</p>
     */
    inline CreateExperimentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
