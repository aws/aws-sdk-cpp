/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportType.h>
#include <aws/codebuild/model/ReportExportConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class CreateReportGroupRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API CreateReportGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReportGroup"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the report group. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateReportGroupRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of report group. </p>
     */
    inline ReportType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ReportType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateReportGroupRequest& WithType(ReportType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ReportExportConfig</code> object that contains information about
     * where the report group test results are exported. </p>
     */
    inline const ReportExportConfig& GetExportConfig() const { return m_exportConfig; }
    inline bool ExportConfigHasBeenSet() const { return m_exportConfigHasBeenSet; }
    template<typename ExportConfigT = ReportExportConfig>
    void SetExportConfig(ExportConfigT&& value) { m_exportConfigHasBeenSet = true; m_exportConfig = std::forward<ExportConfigT>(value); }
    template<typename ExportConfigT = ReportExportConfig>
    CreateReportGroupRequest& WithExportConfig(ExportConfigT&& value) { SetExportConfig(std::forward<ExportConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateReportGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateReportGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReportType m_type{ReportType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ReportExportConfig m_exportConfig;
    bool m_exportConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
