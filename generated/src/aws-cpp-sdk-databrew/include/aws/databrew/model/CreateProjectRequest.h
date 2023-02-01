/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/Sample.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class CreateProjectRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of an existing dataset to associate this project with.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of an existing dataset to associate this project with.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of an existing dataset to associate this project with.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of an existing dataset to associate this project with.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of an existing dataset to associate this project with.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of an existing dataset to associate this project with.</p>
     */
    inline CreateProjectRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of an existing dataset to associate this project with.</p>
     */
    inline CreateProjectRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing dataset to associate this project with.</p>
     */
    inline CreateProjectRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>A unique name for the new project. Valid characters are alphanumeric (A-Z,
     * a-z, 0-9), hyphen (-), period (.), and space.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique name for the new project. Valid characters are alphanumeric (A-Z,
     * a-z, 0-9), hyphen (-), period (.), and space.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique name for the new project. Valid characters are alphanumeric (A-Z,
     * a-z, 0-9), hyphen (-), period (.), and space.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique name for the new project. Valid characters are alphanumeric (A-Z,
     * a-z, 0-9), hyphen (-), period (.), and space.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique name for the new project. Valid characters are alphanumeric (A-Z,
     * a-z, 0-9), hyphen (-), period (.), and space.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique name for the new project. Valid characters are alphanumeric (A-Z,
     * a-z, 0-9), hyphen (-), period (.), and space.</p>
     */
    inline CreateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique name for the new project. Valid characters are alphanumeric (A-Z,
     * a-z, 0-9), hyphen (-), period (.), and space.</p>
     */
    inline CreateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the new project. Valid characters are alphanumeric (A-Z,
     * a-z, 0-9), hyphen (-), period (.), and space.</p>
     */
    inline CreateProjectRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of an existing recipe to associate with the project.</p>
     */
    inline const Aws::String& GetRecipeName() const{ return m_recipeName; }

    /**
     * <p>The name of an existing recipe to associate with the project.</p>
     */
    inline bool RecipeNameHasBeenSet() const { return m_recipeNameHasBeenSet; }

    /**
     * <p>The name of an existing recipe to associate with the project.</p>
     */
    inline void SetRecipeName(const Aws::String& value) { m_recipeNameHasBeenSet = true; m_recipeName = value; }

    /**
     * <p>The name of an existing recipe to associate with the project.</p>
     */
    inline void SetRecipeName(Aws::String&& value) { m_recipeNameHasBeenSet = true; m_recipeName = std::move(value); }

    /**
     * <p>The name of an existing recipe to associate with the project.</p>
     */
    inline void SetRecipeName(const char* value) { m_recipeNameHasBeenSet = true; m_recipeName.assign(value); }

    /**
     * <p>The name of an existing recipe to associate with the project.</p>
     */
    inline CreateProjectRequest& WithRecipeName(const Aws::String& value) { SetRecipeName(value); return *this;}

    /**
     * <p>The name of an existing recipe to associate with the project.</p>
     */
    inline CreateProjectRequest& WithRecipeName(Aws::String&& value) { SetRecipeName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing recipe to associate with the project.</p>
     */
    inline CreateProjectRequest& WithRecipeName(const char* value) { SetRecipeName(value); return *this;}


    
    inline const Sample& GetSample() const{ return m_sample; }

    
    inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }

    
    inline void SetSample(const Sample& value) { m_sampleHasBeenSet = true; m_sample = value; }

    
    inline void SetSample(Sample&& value) { m_sampleHasBeenSet = true; m_sample = std::move(value); }

    
    inline CreateProjectRequest& WithSample(const Sample& value) { SetSample(value); return *this;}

    
    inline CreateProjectRequest& WithSample(Sample&& value) { SetSample(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed for this request.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed for this request.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed for this request.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed for this request.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed for this request.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed for this request.</p>
     */
    inline CreateProjectRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed for this request.</p>
     */
    inline CreateProjectRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed for this request.</p>
     */
    inline CreateProjectRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline CreateProjectRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline CreateProjectRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline CreateProjectRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline CreateProjectRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline CreateProjectRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags to apply to this project.</p>
     */
    inline CreateProjectRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recipeName;
    bool m_recipeNameHasBeenSet = false;

    Sample m_sample;
    bool m_sampleHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
