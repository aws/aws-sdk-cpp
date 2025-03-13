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
    AWS_GLUEDATABREW_API DescribeDatasetResult() = default;
    AWS_GLUEDATABREW_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier (user name) of the user who created the dataset.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    DescribeDatasetResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeDatasetResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline InputFormat GetFormat() const { return m_format; }
    inline void SetFormat(InputFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline DescribeDatasetResult& WithFormat(InputFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const FormatOptions& GetFormatOptions() const { return m_formatOptions; }
    template<typename FormatOptionsT = FormatOptions>
    void SetFormatOptions(FormatOptionsT&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::forward<FormatOptionsT>(value); }
    template<typename FormatOptionsT = FormatOptions>
    DescribeDatasetResult& WithFormatOptions(FormatOptionsT&& value) { SetFormatOptions(std::forward<FormatOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Input& GetInput() const { return m_input; }
    template<typename InputT = Input>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Input>
    DescribeDatasetResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the dataset was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (user name) of the user who last modified the dataset.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    DescribeDatasetResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the data for this dataset, Amazon S3 or the Glue Data
     * Catalog.</p>
     */
    inline Source GetSource() const { return m_source; }
    inline void SetSource(Source value) { m_sourceHasBeenSet = true; m_source = value; }
    inline DescribeDatasetResult& WithSource(Source value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline const PathOptions& GetPathOptions() const { return m_pathOptions; }
    template<typename PathOptionsT = PathOptions>
    void SetPathOptions(PathOptionsT&& value) { m_pathOptionsHasBeenSet = true; m_pathOptions = std::forward<PathOptionsT>(value); }
    template<typename PathOptionsT = PathOptions>
    DescribeDatasetResult& WithPathOptions(PathOptionsT&& value) { SetPathOptions(std::forward<PathOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata tags associated with this dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeDatasetResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeDatasetResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    DescribeDatasetResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputFormat m_format{InputFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet = false;

    Input m_input;
    bool m_inputHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Source m_source{Source::NOT_SET};
    bool m_sourceHasBeenSet = false;

    PathOptions m_pathOptions;
    bool m_pathOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
