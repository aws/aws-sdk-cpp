/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ProjectDataRetention.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 * <p>Identifies the project and the field to update. Specify exactly one of
 * <code>name</code> or <code>dataRetention</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/UpdateProjectRequest">AWS
 * API Reference</a></p>
 */
class UpdateProjectRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API UpdateProjectRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The id or ARN of the project to update.</p>
   */
  inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
  inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
  template <typename ProjectIdentifierT = Aws::String>
  void SetProjectIdentifier(ProjectIdentifierT&& value) {
    m_projectIdentifierHasBeenSet = true;
    m_projectIdentifier = std::forward<ProjectIdentifierT>(value);
  }
  template <typename ProjectIdentifierT = Aws::String>
  UpdateProjectRequest& WithProjectIdentifier(ProjectIdentifierT&& value) {
    SetProjectIdentifier(std::forward<ProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The project's new display name. Specify this field only when
   * <code>dataRetention</code> is omitted. Project names do not have to be
   * unique.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateProjectRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The project's new data-retention mode. Must be set on its own.</p>
   */
  inline const ProjectDataRetention& GetDataRetention() const { return m_dataRetention; }
  inline bool DataRetentionHasBeenSet() const { return m_dataRetentionHasBeenSet; }
  template <typename DataRetentionT = ProjectDataRetention>
  void SetDataRetention(DataRetentionT&& value) {
    m_dataRetentionHasBeenSet = true;
    m_dataRetention = std::forward<DataRetentionT>(value);
  }
  template <typename DataRetentionT = ProjectDataRetention>
  UpdateProjectRequest& WithDataRetention(DataRetentionT&& value) {
    SetDataRetention(std::forward<DataRetentionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectIdentifier;

  Aws::String m_name;

  ProjectDataRetention m_dataRetention;
  bool m_projectIdentifierHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_dataRetentionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
