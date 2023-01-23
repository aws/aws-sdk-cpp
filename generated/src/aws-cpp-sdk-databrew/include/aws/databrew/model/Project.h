/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/databrew/model/Sample.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents all of the attributes of a DataBrew project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Project">AWS
   * API Reference</a></p>
   */
  class Project
  {
  public:
    AWS_GLUEDATABREW_API Project();
    AWS_GLUEDATABREW_API Project(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Project& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services account that owns the project.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the project.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the project.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the project.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the project.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the project.</p>
     */
    inline Project& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the project.</p>
     */
    inline Project& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the project.</p>
     */
    inline Project& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The date and time that the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the project was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the project was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the project was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the project was created.</p>
     */
    inline Project& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the project was created.</p>
     */
    inline Project& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who crated the project.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who crated the project.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who crated the project.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who crated the project.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who crated the project.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who crated the project.</p>
     */
    inline Project& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who crated the project.</p>
     */
    inline Project& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who crated the project.</p>
     */
    inline Project& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The dataset that the project is to act upon.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The dataset that the project is to act upon.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The dataset that the project is to act upon.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The dataset that the project is to act upon.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The dataset that the project is to act upon.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The dataset that the project is to act upon.</p>
     */
    inline Project& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The dataset that the project is to act upon.</p>
     */
    inline Project& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The dataset that the project is to act upon.</p>
     */
    inline Project& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The last modification date and time for the project.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last modification date and time for the project.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The last modification date and time for the project.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last modification date and time for the project.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last modification date and time for the project.</p>
     */
    inline Project& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last modification date and time for the project.</p>
     */
    inline Project& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the project.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the project.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the project.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the project.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the project.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the project.</p>
     */
    inline Project& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the project.</p>
     */
    inline Project& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the project.</p>
     */
    inline Project& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The unique name of a project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of a project.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of a project.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of a project.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of a project.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of a project.</p>
     */
    inline Project& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of a project.</p>
     */
    inline Project& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of a project.</p>
     */
    inline Project& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of a recipe that will be developed during a project session.</p>
     */
    inline const Aws::String& GetRecipeName() const{ return m_recipeName; }

    /**
     * <p>The name of a recipe that will be developed during a project session.</p>
     */
    inline bool RecipeNameHasBeenSet() const { return m_recipeNameHasBeenSet; }

    /**
     * <p>The name of a recipe that will be developed during a project session.</p>
     */
    inline void SetRecipeName(const Aws::String& value) { m_recipeNameHasBeenSet = true; m_recipeName = value; }

    /**
     * <p>The name of a recipe that will be developed during a project session.</p>
     */
    inline void SetRecipeName(Aws::String&& value) { m_recipeNameHasBeenSet = true; m_recipeName = std::move(value); }

    /**
     * <p>The name of a recipe that will be developed during a project session.</p>
     */
    inline void SetRecipeName(const char* value) { m_recipeNameHasBeenSet = true; m_recipeName.assign(value); }

    /**
     * <p>The name of a recipe that will be developed during a project session.</p>
     */
    inline Project& WithRecipeName(const Aws::String& value) { SetRecipeName(value); return *this;}

    /**
     * <p>The name of a recipe that will be developed during a project session.</p>
     */
    inline Project& WithRecipeName(Aws::String&& value) { SetRecipeName(std::move(value)); return *this;}

    /**
     * <p>The name of a recipe that will be developed during a project session.</p>
     */
    inline Project& WithRecipeName(const char* value) { SetRecipeName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline Project& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline Project& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline Project& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The sample size and sampling type to apply to the data. If this parameter
     * isn't specified, then the sample consists of the first 500 rows from the
     * dataset.</p>
     */
    inline const Sample& GetSample() const{ return m_sample; }

    /**
     * <p>The sample size and sampling type to apply to the data. If this parameter
     * isn't specified, then the sample consists of the first 500 rows from the
     * dataset.</p>
     */
    inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }

    /**
     * <p>The sample size and sampling type to apply to the data. If this parameter
     * isn't specified, then the sample consists of the first 500 rows from the
     * dataset.</p>
     */
    inline void SetSample(const Sample& value) { m_sampleHasBeenSet = true; m_sample = value; }

    /**
     * <p>The sample size and sampling type to apply to the data. If this parameter
     * isn't specified, then the sample consists of the first 500 rows from the
     * dataset.</p>
     */
    inline void SetSample(Sample&& value) { m_sampleHasBeenSet = true; m_sample = std::move(value); }

    /**
     * <p>The sample size and sampling type to apply to the data. If this parameter
     * isn't specified, then the sample consists of the first 500 rows from the
     * dataset.</p>
     */
    inline Project& WithSample(const Sample& value) { SetSample(value); return *this;}

    /**
     * <p>The sample size and sampling type to apply to the data. If this parameter
     * isn't specified, then the sample consists of the first 500 rows from the
     * dataset.</p>
     */
    inline Project& WithSample(Sample&& value) { SetSample(std::move(value)); return *this;}


    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline Project& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline Project& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline Project& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline Project& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline Project& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline Project& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline Project& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline Project& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the project.</p>
     */
    inline Project& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the role that will be assumed for this
     * project.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that will be assumed for this
     * project.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that will be assumed for this
     * project.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that will be assumed for this
     * project.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that will be assumed for this
     * project.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that will be assumed for this
     * project.</p>
     */
    inline Project& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that will be assumed for this
     * project.</p>
     */
    inline Project& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that will be assumed for this
     * project.</p>
     */
    inline Project& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user that opened the project for
     * use.</p>
     */
    inline const Aws::String& GetOpenedBy() const{ return m_openedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user that opened the project for
     * use.</p>
     */
    inline bool OpenedByHasBeenSet() const { return m_openedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user that opened the project for
     * use.</p>
     */
    inline void SetOpenedBy(const Aws::String& value) { m_openedByHasBeenSet = true; m_openedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user that opened the project for
     * use.</p>
     */
    inline void SetOpenedBy(Aws::String&& value) { m_openedByHasBeenSet = true; m_openedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user that opened the project for
     * use.</p>
     */
    inline void SetOpenedBy(const char* value) { m_openedByHasBeenSet = true; m_openedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user that opened the project for
     * use.</p>
     */
    inline Project& WithOpenedBy(const Aws::String& value) { SetOpenedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user that opened the project for
     * use.</p>
     */
    inline Project& WithOpenedBy(Aws::String&& value) { SetOpenedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user that opened the project for
     * use.</p>
     */
    inline Project& WithOpenedBy(const char* value) { SetOpenedBy(value); return *this;}


    /**
     * <p>The date and time when the project was opened.</p>
     */
    inline const Aws::Utils::DateTime& GetOpenDate() const{ return m_openDate; }

    /**
     * <p>The date and time when the project was opened.</p>
     */
    inline bool OpenDateHasBeenSet() const { return m_openDateHasBeenSet; }

    /**
     * <p>The date and time when the project was opened.</p>
     */
    inline void SetOpenDate(const Aws::Utils::DateTime& value) { m_openDateHasBeenSet = true; m_openDate = value; }

    /**
     * <p>The date and time when the project was opened.</p>
     */
    inline void SetOpenDate(Aws::Utils::DateTime&& value) { m_openDateHasBeenSet = true; m_openDate = std::move(value); }

    /**
     * <p>The date and time when the project was opened.</p>
     */
    inline Project& WithOpenDate(const Aws::Utils::DateTime& value) { SetOpenDate(value); return *this;}

    /**
     * <p>The date and time when the project was opened.</p>
     */
    inline Project& WithOpenDate(Aws::Utils::DateTime&& value) { SetOpenDate(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recipeName;
    bool m_recipeNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Sample m_sample;
    bool m_sampleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_openedBy;
    bool m_openedByHasBeenSet = false;

    Aws::Utils::DateTime m_openDate;
    bool m_openDateHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
