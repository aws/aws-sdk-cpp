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
    AWS_CODEBUILD_API CreateReportGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReportGroup"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the report group. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the report group. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the report group. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the report group. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the report group. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the report group. </p>
     */
    inline CreateReportGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the report group. </p>
     */
    inline CreateReportGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the report group. </p>
     */
    inline CreateReportGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The type of report group. </p>
     */
    inline const ReportType& GetType() const{ return m_type; }

    /**
     * <p> The type of report group. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of report group. </p>
     */
    inline void SetType(const ReportType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of report group. </p>
     */
    inline void SetType(ReportType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of report group. </p>
     */
    inline CreateReportGroupRequest& WithType(const ReportType& value) { SetType(value); return *this;}

    /**
     * <p> The type of report group. </p>
     */
    inline CreateReportGroupRequest& WithType(ReportType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> A <code>ReportExportConfig</code> object that contains information about
     * where the report group test results are exported. </p>
     */
    inline const ReportExportConfig& GetExportConfig() const{ return m_exportConfig; }

    /**
     * <p> A <code>ReportExportConfig</code> object that contains information about
     * where the report group test results are exported. </p>
     */
    inline bool ExportConfigHasBeenSet() const { return m_exportConfigHasBeenSet; }

    /**
     * <p> A <code>ReportExportConfig</code> object that contains information about
     * where the report group test results are exported. </p>
     */
    inline void SetExportConfig(const ReportExportConfig& value) { m_exportConfigHasBeenSet = true; m_exportConfig = value; }

    /**
     * <p> A <code>ReportExportConfig</code> object that contains information about
     * where the report group test results are exported. </p>
     */
    inline void SetExportConfig(ReportExportConfig&& value) { m_exportConfigHasBeenSet = true; m_exportConfig = std::move(value); }

    /**
     * <p> A <code>ReportExportConfig</code> object that contains information about
     * where the report group test results are exported. </p>
     */
    inline CreateReportGroupRequest& WithExportConfig(const ReportExportConfig& value) { SetExportConfig(value); return *this;}

    /**
     * <p> A <code>ReportExportConfig</code> object that contains information about
     * where the report group test results are exported. </p>
     */
    inline CreateReportGroupRequest& WithExportConfig(ReportExportConfig&& value) { SetExportConfig(std::move(value)); return *this;}


    /**
     * <p> A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline CreateReportGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline CreateReportGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline CreateReportGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline CreateReportGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReportType m_type;
    bool m_typeHasBeenSet = false;

    ReportExportConfig m_exportConfig;
    bool m_exportConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
