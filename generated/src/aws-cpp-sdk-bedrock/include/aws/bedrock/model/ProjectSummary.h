/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ProjectDataRetention.h>
#include <aws/bedrock/model/ProjectStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>A project. The same field set every project-returning operation uses: create,
 * get, update, and archive all return the full project, and list returns one per
 * project.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ProjectSummary">AWS
 * API Reference</a></p>
 */
class ProjectSummary {
 public:
  AWS_BEDROCK_API ProjectSummary() = default;
  AWS_BEDROCK_API ProjectSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API ProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The project ID. The account's default project uses <code>default</code>; a
   * named project's generated ID starts with <code>proj_</code>.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ProjectSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the project.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ProjectSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The project's display name. Project names do not have to be unique.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ProjectSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The project's lifecycle status.</p>
   */
  inline ProjectStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ProjectStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ProjectSummary& WithStatus(ProjectStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the project was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ProjectSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the project was archived.</p>
   */
  inline const Aws::Utils::DateTime& GetArchivedAt() const { return m_archivedAt; }
  inline bool ArchivedAtHasBeenSet() const { return m_archivedAtHasBeenSet; }
  template <typename ArchivedAtT = Aws::Utils::DateTime>
  void SetArchivedAt(ArchivedAtT&& value) {
    m_archivedAtHasBeenSet = true;
    m_archivedAt = std::forward<ArchivedAtT>(value);
  }
  template <typename ArchivedAtT = Aws::Utils::DateTime>
  ProjectSummary& WithArchivedAt(ArchivedAtT&& value) {
    SetArchivedAt(std::forward<ArchivedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The project's data retention setting. A mode of <code>inherit</code> defers
   * to the account setting or model default.</p>
   */
  inline const ProjectDataRetention& GetDataRetention() const { return m_dataRetention; }
  inline bool DataRetentionHasBeenSet() const { return m_dataRetentionHasBeenSet; }
  template <typename DataRetentionT = ProjectDataRetention>
  void SetDataRetention(DataRetentionT&& value) {
    m_dataRetentionHasBeenSet = true;
    m_dataRetention = std::forward<DataRetentionT>(value);
  }
  template <typename DataRetentionT = ProjectDataRetention>
  ProjectSummary& WithDataRetention(DataRetentionT&& value) {
    SetDataRetention(std::forward<DataRetentionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_name;

  ProjectStatus m_status{ProjectStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_archivedAt{};

  ProjectDataRetention m_dataRetention;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_archivedAtHasBeenSet = false;
  bool m_dataRetentionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
