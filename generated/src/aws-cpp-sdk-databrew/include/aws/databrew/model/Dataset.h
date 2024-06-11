/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/databrew/model/InputFormat.h>
#include <aws/databrew/model/FormatOptions.h>
#include <aws/databrew/model/Input.h>
#include <aws/databrew/model/Source.h>
#include <aws/databrew/model/PathOptions.h>
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
   * <p>Represents a dataset that can be processed by DataBrew.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Dataset">AWS
   * API Reference</a></p>
   */
  class Dataset
  {
  public:
    AWS_GLUEDATABREW_API Dataset();
    AWS_GLUEDATABREW_API Dataset(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Dataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the dataset.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Dataset& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Dataset& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Dataset& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the dataset.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline Dataset& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline Dataset& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline Dataset& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline Dataset& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}
    inline Dataset& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Dataset& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Dataset& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Dataset& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline const InputFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const InputFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(InputFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline Dataset& WithFormat(const InputFormat& value) { SetFormat(value); return *this;}
    inline Dataset& WithFormat(InputFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of options that define how DataBrew interprets the data in the
     * dataset.</p>
     */
    inline const FormatOptions& GetFormatOptions() const{ return m_formatOptions; }
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }
    inline void SetFormatOptions(const FormatOptions& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = value; }
    inline void SetFormatOptions(FormatOptions&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::move(value); }
    inline Dataset& WithFormatOptions(const FormatOptions& value) { SetFormatOptions(value); return *this;}
    inline Dataset& WithFormatOptions(FormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on how DataBrew can find the dataset, in either the Glue Data
     * Catalog or Amazon S3.</p>
     */
    inline const Input& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Input& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Input&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline Dataset& WithInput(const Input& value) { SetInput(value); return *this;}
    inline Dataset& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modification date and time of the dataset.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline Dataset& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline Dataset& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the dataset.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }
    inline Dataset& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline Dataset& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline Dataset& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the data for the dataset, either Amazon S3 or the Glue Data
     * Catalog.</p>
     */
    inline const Source& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline Dataset& WithSource(const Source& value) { SetSource(value); return *this;}
    inline Dataset& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline const PathOptions& GetPathOptions() const{ return m_pathOptions; }
    inline bool PathOptionsHasBeenSet() const { return m_pathOptionsHasBeenSet; }
    inline void SetPathOptions(const PathOptions& value) { m_pathOptionsHasBeenSet = true; m_pathOptions = value; }
    inline void SetPathOptions(PathOptions&& value) { m_pathOptionsHasBeenSet = true; m_pathOptions = std::move(value); }
    inline Dataset& WithPathOptions(const PathOptions& value) { SetPathOptions(value); return *this;}
    inline Dataset& WithPathOptions(PathOptions&& value) { SetPathOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata tags that have been applied to the dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Dataset& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Dataset& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Dataset& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Dataset& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Dataset& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Dataset& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Dataset& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Dataset& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Dataset& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) for the dataset.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline Dataset& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline Dataset& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline Dataset& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputFormat m_format;
    bool m_formatHasBeenSet = false;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet = false;

    Input m_input;
    bool m_inputHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    PathOptions m_pathOptions;
    bool m_pathOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
