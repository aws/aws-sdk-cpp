/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ProjectDataRetention.h>
#include <aws/bedrock/model/ProjectStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {
/**
 * <p>The project after the update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/UpdateProjectResponse">AWS
 * API Reference</a></p>
 */
class UpdateProjectResult {
 public:
  AWS_BEDROCK_API UpdateProjectResult() = default;
  AWS_BEDROCK_API UpdateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API UpdateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The project ID. The account's default project uses <code>default</code>; a
   * named project's generated ID starts with <code>proj_</code>.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateProjectResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the project.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateProjectResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The project's display name. Project names do not have to be unique.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateProjectResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The project's lifecycle status.</p>
   */
  inline ProjectStatus GetStatus() const { return m_status; }
  inline void SetStatus(ProjectStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateProjectResult& WithStatus(ProjectStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the project was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateProjectResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the project was archived.</p>
   */
  inline const Aws::Utils::DateTime& GetArchivedAt() const { return m_archivedAt; }
  template <typename ArchivedAtT = Aws::Utils::DateTime>
  void SetArchivedAt(ArchivedAtT&& value) {
    m_archivedAtHasBeenSet = true;
    m_archivedAt = std::forward<ArchivedAtT>(value);
  }
  template <typename ArchivedAtT = Aws::Utils::DateTime>
  UpdateProjectResult& WithArchivedAt(ArchivedAtT&& value) {
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
  template <typename DataRetentionT = ProjectDataRetention>
  void SetDataRetention(DataRetentionT&& value) {
    m_dataRetentionHasBeenSet = true;
    m_dataRetention = std::forward<DataRetentionT>(value);
  }
  template <typename DataRetentionT = ProjectDataRetention>
  UpdateProjectResult& WithDataRetention(DataRetentionT&& value) {
    SetDataRetention(std::forward<DataRetentionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateProjectResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_name;

  ProjectStatus m_status{ProjectStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_archivedAt{};

  ProjectDataRetention m_dataRetention;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_archivedAtHasBeenSet = false;
  bool m_dataRetentionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
