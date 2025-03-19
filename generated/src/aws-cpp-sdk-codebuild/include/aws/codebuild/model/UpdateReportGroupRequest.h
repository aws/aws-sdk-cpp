/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateReportGroupRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API UpdateReportGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReportGroup"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN of the report group to update. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateReportGroupRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used to specify an updated export type. Valid values are: </p> <ul> <li> <p>
     * <code>S3</code>: The report results are exported to an S3 bucket. </p> </li>
     * <li> <p> <code>NO_EXPORT</code>: The report results are not exported. </p> </li>
     * </ul>
     */
    inline const ReportExportConfig& GetExportConfig() const { return m_exportConfig; }
    inline bool ExportConfigHasBeenSet() const { return m_exportConfigHasBeenSet; }
    template<typename ExportConfigT = ReportExportConfig>
    void SetExportConfig(ExportConfigT&& value) { m_exportConfigHasBeenSet = true; m_exportConfig = std::forward<ExportConfigT>(value); }
    template<typename ExportConfigT = ReportExportConfig>
    UpdateReportGroupRequest& WithExportConfig(ExportConfigT&& value) { SetExportConfig(std::forward<ExportConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An updated list of tag key and value pairs associated with this report
     * group. </p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild report group tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UpdateReportGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UpdateReportGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ReportExportConfig m_exportConfig;
    bool m_exportConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
