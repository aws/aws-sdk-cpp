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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GlueDataBrew
{
namespace Model
{
  class DescribeDatasetResult
  {
  public:
    AWS_GLUEDATABREW_API DescribeDatasetResult();
    AWS_GLUEDATABREW_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier (user name) of the user who created the dataset.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The identifier (user name) of the user who created the dataset.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The identifier (user name) of the user who created the dataset.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The identifier (user name) of the user who created the dataset.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The identifier (user name) of the user who created the dataset.</p>
     */
    inline DescribeDatasetResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The identifier (user name) of the user who created the dataset.</p>
     */
    inline DescribeDatasetResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier (user name) of the user who created the dataset.</p>
     */
    inline DescribeDatasetResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDate = value; }

    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDate = std::move(value); }

    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline DescribeDatasetResult& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline DescribeDatasetResult& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline DescribeDatasetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DescribeDatasetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DescribeDatasetResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline const InputFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline void SetFormat(const InputFormat& value) { m_format = value; }

    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline void SetFormat(InputFormat&& value) { m_format = std::move(value); }

    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline DescribeDatasetResult& WithFormat(const InputFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline DescribeDatasetResult& WithFormat(InputFormat&& value) { SetFormat(std::move(value)); return *this;}


    
    inline const FormatOptions& GetFormatOptions() const{ return m_formatOptions; }

    
    inline void SetFormatOptions(const FormatOptions& value) { m_formatOptions = value; }

    
    inline void SetFormatOptions(FormatOptions&& value) { m_formatOptions = std::move(value); }

    
    inline DescribeDatasetResult& WithFormatOptions(const FormatOptions& value) { SetFormatOptions(value); return *this;}

    
    inline DescribeDatasetResult& WithFormatOptions(FormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}


    
    inline const Input& GetInput() const{ return m_input; }

    
    inline void SetInput(const Input& value) { m_input = value; }

    
    inline void SetInput(Input&& value) { m_input = std::move(value); }

    
    inline DescribeDatasetResult& WithInput(const Input& value) { SetInput(value); return *this;}

    
    inline DescribeDatasetResult& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>The date and time that the dataset was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time that the dataset was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date and time that the dataset was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time that the dataset was last modified.</p>
     */
    inline DescribeDatasetResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time that the dataset was last modified.</p>
     */
    inline DescribeDatasetResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The identifier (user name) of the user who last modified the dataset.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The identifier (user name) of the user who last modified the dataset.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedBy = value; }

    /**
     * <p>The identifier (user name) of the user who last modified the dataset.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedBy = std::move(value); }

    /**
     * <p>The identifier (user name) of the user who last modified the dataset.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedBy.assign(value); }

    /**
     * <p>The identifier (user name) of the user who last modified the dataset.</p>
     */
    inline DescribeDatasetResult& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The identifier (user name) of the user who last modified the dataset.</p>
     */
    inline DescribeDatasetResult& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier (user name) of the user who last modified the dataset.</p>
     */
    inline DescribeDatasetResult& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The location of the data for this dataset, Amazon S3 or the Glue Data
     * Catalog.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The location of the data for this dataset, Amazon S3 or the Glue Data
     * Catalog.</p>
     */
    inline void SetSource(const Source& value) { m_source = value; }

    /**
     * <p>The location of the data for this dataset, Amazon S3 or the Glue Data
     * Catalog.</p>
     */
    inline void SetSource(Source&& value) { m_source = std::move(value); }

    /**
     * <p>The location of the data for this dataset, Amazon S3 or the Glue Data
     * Catalog.</p>
     */
    inline DescribeDatasetResult& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The location of the data for this dataset, Amazon S3 or the Glue Data
     * Catalog.</p>
     */
    inline DescribeDatasetResult& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline const PathOptions& GetPathOptions() const{ return m_pathOptions; }

    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline void SetPathOptions(const PathOptions& value) { m_pathOptions = value; }

    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline void SetPathOptions(PathOptions&& value) { m_pathOptions = std::move(value); }

    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline DescribeDatasetResult& WithPathOptions(const PathOptions& value) { SetPathOptions(value); return *this;}

    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline DescribeDatasetResult& WithPathOptions(PathOptions&& value) { SetPathOptions(std::move(value)); return *this;}


    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline DescribeDatasetResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline DescribeDatasetResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline DescribeDatasetResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline DescribeDatasetResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline DescribeDatasetResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline DescribeDatasetResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline DescribeDatasetResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline DescribeDatasetResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline DescribeDatasetResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DescribeDatasetResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DescribeDatasetResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DescribeDatasetResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_createDate;

    Aws::String m_name;

    InputFormat m_format;

    FormatOptions m_formatOptions;

    Input m_input;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_lastModifiedBy;

    Source m_source;

    PathOptions m_pathOptions;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_resourceArn;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
