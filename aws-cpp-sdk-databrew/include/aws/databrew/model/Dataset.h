/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/databrew/model/FormatOptions.h>
#include <aws/databrew/model/Input.h>
#include <aws/databrew/model/Source.h>
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
   * <p>Represents a dataset that can be processed by AWS Glue
   * DataBrew.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Dataset">AWS
   * API Reference</a></p>
   */
  class AWS_GLUEDATABREW_API Dataset
  {
  public:
    Dataset();
    Dataset(Aws::Utils::Json::JsonView jsonValue);
    Dataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the AWS account that owns the dataset.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the AWS account that owns the dataset.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the dataset.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the AWS account that owns the dataset.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the dataset.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the dataset.</p>
     */
    inline Dataset& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the dataset.</p>
     */
    inline Dataset& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the dataset.</p>
     */
    inline Dataset& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The identifier (the user name) of the user who created the dataset.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The identifier (the user name) of the user who created the dataset.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The identifier (the user name) of the user who created the dataset.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The identifier (the user name) of the user who created the dataset.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The identifier (the user name) of the user who created the dataset.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The identifier (the user name) of the user who created the dataset.</p>
     */
    inline Dataset& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The identifier (the user name) of the user who created the dataset.</p>
     */
    inline Dataset& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier (the user name) of the user who created the dataset.</p>
     */
    inline Dataset& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline Dataset& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline Dataset& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The unique name of the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the dataset.</p>
     */
    inline Dataset& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the dataset.</p>
     */
    inline Dataset& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the dataset.</p>
     */
    inline Dataset& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Options that define how DataBrew interprets the data in the dataset.</p>
     */
    inline const FormatOptions& GetFormatOptions() const{ return m_formatOptions; }

    /**
     * <p>Options that define how DataBrew interprets the data in the dataset.</p>
     */
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }

    /**
     * <p>Options that define how DataBrew interprets the data in the dataset.</p>
     */
    inline void SetFormatOptions(const FormatOptions& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = value; }

    /**
     * <p>Options that define how DataBrew interprets the data in the dataset.</p>
     */
    inline void SetFormatOptions(FormatOptions&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::move(value); }

    /**
     * <p>Options that define how DataBrew interprets the data in the dataset.</p>
     */
    inline Dataset& WithFormatOptions(const FormatOptions& value) { SetFormatOptions(value); return *this;}

    /**
     * <p>Options that define how DataBrew interprets the data in the dataset.</p>
     */
    inline Dataset& WithFormatOptions(FormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}


    /**
     * <p>Information on how DataBrew can find the dataset, in either the AWS Glue Data
     * Catalog or Amazon S3.</p>
     */
    inline const Input& GetInput() const{ return m_input; }

    /**
     * <p>Information on how DataBrew can find the dataset, in either the AWS Glue Data
     * Catalog or Amazon S3.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Information on how DataBrew can find the dataset, in either the AWS Glue Data
     * Catalog or Amazon S3.</p>
     */
    inline void SetInput(const Input& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Information on how DataBrew can find the dataset, in either the AWS Glue Data
     * Catalog or Amazon S3.</p>
     */
    inline void SetInput(Input&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Information on how DataBrew can find the dataset, in either the AWS Glue Data
     * Catalog or Amazon S3.</p>
     */
    inline Dataset& WithInput(const Input& value) { SetInput(value); return *this;}

    /**
     * <p>Information on how DataBrew can find the dataset, in either the AWS Glue Data
     * Catalog or Amazon S3.</p>
     */
    inline Dataset& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>The last modification date and time of the dataset.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last modification date and time of the dataset.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The last modification date and time of the dataset.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last modification date and time of the dataset.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last modification date and time of the dataset.</p>
     */
    inline Dataset& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last modification date and time of the dataset.</p>
     */
    inline Dataset& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The identifier (the user name) of the user who last modified the dataset.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The identifier (the user name) of the user who last modified the dataset.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The identifier (the user name) of the user who last modified the dataset.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The identifier (the user name) of the user who last modified the dataset.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The identifier (the user name) of the user who last modified the dataset.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The identifier (the user name) of the user who last modified the dataset.</p>
     */
    inline Dataset& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The identifier (the user name) of the user who last modified the dataset.</p>
     */
    inline Dataset& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier (the user name) of the user who last modified the dataset.</p>
     */
    inline Dataset& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The location of the data for the dataset, either Amazon S3 or the AWS Glue
     * Data Catalog.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The location of the data for the dataset, either Amazon S3 or the AWS Glue
     * Data Catalog.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The location of the data for the dataset, either Amazon S3 or the AWS Glue
     * Data Catalog.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The location of the data for the dataset, either Amazon S3 or the AWS Glue
     * Data Catalog.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The location of the data for the dataset, either Amazon S3 or the AWS Glue
     * Data Catalog.</p>
     */
    inline Dataset& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The location of the data for the dataset, either Amazon S3 or the AWS Glue
     * Data Catalog.</p>
     */
    inline Dataset& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline Dataset& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline Dataset& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline Dataset& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline Dataset& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline Dataset& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline Dataset& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline Dataset& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline Dataset& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline Dataset& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The unique Amazon Resource Name (ARN) for the dataset.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the dataset.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the dataset.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the dataset.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the dataset.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the dataset.</p>
     */
    inline Dataset& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the dataset.</p>
     */
    inline Dataset& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the dataset.</p>
     */
    inline Dataset& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet;

    Input m_input;
    bool m_inputHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet;

    Source m_source;
    bool m_sourceHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
