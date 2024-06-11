﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportType.h>
#include <aws/codebuild/model/ReportExportConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/ReportGroupStatusType.h>
#include <aws/codebuild/model/Tag.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>A series of reports. Each report contains information about the results from
   * running a series of test cases. You specify the test cases for a report group in
   * the buildspec for a build project using one or more paths to the test case
   * files. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ReportGroup">AWS
   * API Reference</a></p>
   */
  class ReportGroup
  {
  public:
    AWS_CODEBUILD_API ReportGroup();
    AWS_CODEBUILD_API ReportGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ReportGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>ReportGroup</code>. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ReportGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ReportGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ReportGroup& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>ReportGroup</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ReportGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ReportGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ReportGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>ReportGroup</code>. This can be one of the following
     * values:</p> <dl> <dt>CODE_COVERAGE</dt> <dd> <p>The report group contains code
     * coverage reports.</p> </dd> <dt>TEST</dt> <dd> <p>The report group contains test
     * reports.</p> </dd> </dl>
     */
    inline const ReportType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ReportType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ReportType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ReportGroup& WithType(const ReportType& value) { SetType(value); return *this;}
    inline ReportGroup& WithType(ReportType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the destination where the raw data of this
     * <code>ReportGroup</code> is exported. </p>
     */
    inline const ReportExportConfig& GetExportConfig() const{ return m_exportConfig; }
    inline bool ExportConfigHasBeenSet() const { return m_exportConfigHasBeenSet; }
    inline void SetExportConfig(const ReportExportConfig& value) { m_exportConfigHasBeenSet = true; m_exportConfig = value; }
    inline void SetExportConfig(ReportExportConfig&& value) { m_exportConfigHasBeenSet = true; m_exportConfig = std::move(value); }
    inline ReportGroup& WithExportConfig(const ReportExportConfig& value) { SetExportConfig(value); return *this;}
    inline ReportGroup& WithExportConfig(ReportExportConfig&& value) { SetExportConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this <code>ReportGroup</code> was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline ReportGroup& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline ReportGroup& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this <code>ReportGroup</code> was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline ReportGroup& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline ReportGroup& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ReportGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ReportGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ReportGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ReportGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the report group. This property is read-only.</p> <p>This can
     * be one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd> <p>The report
     * group is active.</p> </dd> <dt>DELETING</dt> <dd> <p>The report group is in the
     * process of being deleted.</p> </dd> </dl>
     */
    inline const ReportGroupStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReportGroupStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReportGroupStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReportGroup& WithStatus(const ReportGroupStatusType& value) { SetStatus(value); return *this;}
    inline ReportGroup& WithStatus(ReportGroupStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReportType m_type;
    bool m_typeHasBeenSet = false;

    ReportExportConfig m_exportConfig;
    bool m_exportConfigHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ReportGroupStatusType m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
