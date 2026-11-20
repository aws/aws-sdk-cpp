/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 * <p>Identifies the project to archive.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ArchiveProjectRequest">AWS
 * API Reference</a></p>
 */
class ArchiveProjectRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API ArchiveProjectRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ArchiveProject"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The id or ARN of the project to archive.</p>
   */
  inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
  inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
  template <typename ProjectIdentifierT = Aws::String>
  void SetProjectIdentifier(ProjectIdentifierT&& value) {
    m_projectIdentifierHasBeenSet = true;
    m_projectIdentifier = std::forward<ProjectIdentifierT>(value);
  }
  template <typename ProjectIdentifierT = Aws::String>
  ArchiveProjectRequest& WithProjectIdentifier(ProjectIdentifierT&& value) {
    SetProjectIdentifier(std::forward<ProjectIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectIdentifier;
  bool m_projectIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
