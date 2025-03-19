/**
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
    AWS_CODEBUILD_API ReportGroup() = default;
    AWS_CODEBUILD_API ReportGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ReportGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>ReportGroup</code>. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ReportGroup& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>ReportGroup</code>. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ReportGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>ReportGroup</code>. This can be one of the following
     * values:</p> <dl> <dt>CODE_COVERAGE</dt> <dd> <p>The report group contains code
     * coverage reports.</p> </dd> <dt>TEST</dt> <dd> <p>The report group contains test
     * reports.</p> </dd> </dl>
     */
    inline ReportType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ReportType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ReportGroup& WithType(ReportType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the destination where the raw data of this
     * <code>ReportGroup</code> is exported. </p>
     */
    inline const ReportExportConfig& GetExportConfig() const { return m_exportConfig; }
    inline bool ExportConfigHasBeenSet() const { return m_exportConfigHasBeenSet; }
    template<typename ExportConfigT = ReportExportConfig>
    void SetExportConfig(ExportConfigT&& value) { m_exportConfigHasBeenSet = true; m_exportConfig = std::forward<ExportConfigT>(value); }
    template<typename ExportConfigT = ReportExportConfig>
    ReportGroup& WithExportConfig(ExportConfigT&& value) { SetExportConfig(std::forward<ExportConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this <code>ReportGroup</code> was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    ReportGroup& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this <code>ReportGroup</code> was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    ReportGroup& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag key and value pairs associated with this report group. </p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild report group tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ReportGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ReportGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the report group. This property is read-only.</p> <p>This can
     * be one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd> <p>The report
     * group is active.</p> </dd> <dt>DELETING</dt> <dd> <p>The report group is in the
     * process of being deleted.</p> </dd> </dl>
     */
    inline ReportGroupStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReportGroupStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReportGroup& WithStatus(ReportGroupStatusType value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReportType m_type{ReportType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ReportExportConfig m_exportConfig;
    bool m_exportConfigHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ReportGroupStatusType m_status{ReportGroupStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
