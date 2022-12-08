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
    AWS_CODEBUILD_API UpdateReportGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReportGroup"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ARN of the report group to update. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the report group to update. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the report group to update. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the report group to update. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the report group to update. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the report group to update. </p>
     */
    inline UpdateReportGroupRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the report group to update. </p>
     */
    inline UpdateReportGroupRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the report group to update. </p>
     */
    inline UpdateReportGroupRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> Used to specify an updated export type. Valid values are: </p> <ul> <li> <p>
     * <code>S3</code>: The report results are exported to an S3 bucket. </p> </li>
     * <li> <p> <code>NO_EXPORT</code>: The report results are not exported. </p> </li>
     * </ul>
     */
    inline const ReportExportConfig& GetExportConfig() const{ return m_exportConfig; }

    /**
     * <p> Used to specify an updated export type. Valid values are: </p> <ul> <li> <p>
     * <code>S3</code>: The report results are exported to an S3 bucket. </p> </li>
     * <li> <p> <code>NO_EXPORT</code>: The report results are not exported. </p> </li>
     * </ul>
     */
    inline bool ExportConfigHasBeenSet() const { return m_exportConfigHasBeenSet; }

    /**
     * <p> Used to specify an updated export type. Valid values are: </p> <ul> <li> <p>
     * <code>S3</code>: The report results are exported to an S3 bucket. </p> </li>
     * <li> <p> <code>NO_EXPORT</code>: The report results are not exported. </p> </li>
     * </ul>
     */
    inline void SetExportConfig(const ReportExportConfig& value) { m_exportConfigHasBeenSet = true; m_exportConfig = value; }

    /**
     * <p> Used to specify an updated export type. Valid values are: </p> <ul> <li> <p>
     * <code>S3</code>: The report results are exported to an S3 bucket. </p> </li>
     * <li> <p> <code>NO_EXPORT</code>: The report results are not exported. </p> </li>
     * </ul>
     */
    inline void SetExportConfig(ReportExportConfig&& value) { m_exportConfigHasBeenSet = true; m_exportConfig = std::move(value); }

    /**
     * <p> Used to specify an updated export type. Valid values are: </p> <ul> <li> <p>
     * <code>S3</code>: The report results are exported to an S3 bucket. </p> </li>
     * <li> <p> <code>NO_EXPORT</code>: The report results are not exported. </p> </li>
     * </ul>
     */
    inline UpdateReportGroupRequest& WithExportConfig(const ReportExportConfig& value) { SetExportConfig(value); return *this;}

    /**
     * <p> Used to specify an updated export type. Valid values are: </p> <ul> <li> <p>
     * <code>S3</code>: The report results are exported to an S3 bucket. </p> </li>
     * <li> <p> <code>NO_EXPORT</code>: The report results are not exported. </p> </li>
     * </ul>
     */
    inline UpdateReportGroupRequest& WithExportConfig(ReportExportConfig&& value) { SetExportConfig(std::move(value)); return *this;}


    /**
     * <p> An updated list of tag key and value pairs associated with this report
     * group. </p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild report group tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> An updated list of tag key and value pairs associated with this report
     * group. </p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild report group tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> An updated list of tag key and value pairs associated with this report
     * group. </p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild report group tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> An updated list of tag key and value pairs associated with this report
     * group. </p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild report group tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> An updated list of tag key and value pairs associated with this report
     * group. </p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild report group tags.</p>
     */
    inline UpdateReportGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> An updated list of tag key and value pairs associated with this report
     * group. </p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild report group tags.</p>
     */
    inline UpdateReportGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> An updated list of tag key and value pairs associated with this report
     * group. </p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild report group tags.</p>
     */
    inline UpdateReportGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> An updated list of tag key and value pairs associated with this report
     * group. </p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild report group tags.</p>
     */
    inline UpdateReportGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
