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
namespace Http {
class URI;
}  // namespace Http
namespace Bedrock {
namespace Model {

/**
 */
class GetInferenceProfileRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API GetInferenceProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetInferenceProfile"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID or Amazon Resource Name (ARN) of the inference profile.</p>
   */
  inline const Aws::String& GetInferenceProfileIdentifier() const { return m_inferenceProfileIdentifier; }
  inline bool InferenceProfileIdentifierHasBeenSet() const { return m_inferenceProfileIdentifierHasBeenSet; }
  template <typename InferenceProfileIdentifierT = Aws::String>
  void SetInferenceProfileIdentifier(InferenceProfileIdentifierT&& value) {
    m_inferenceProfileIdentifierHasBeenSet = true;
    m_inferenceProfileIdentifier = std::forward<InferenceProfileIdentifierT>(value);
  }
  template <typename InferenceProfileIdentifierT = Aws::String>
  GetInferenceProfileRequest& WithInferenceProfileIdentifier(InferenceProfileIdentifierT&& value) {
    SetInferenceProfileIdentifier(std::forward<InferenceProfileIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID or Amazon Resource Name (ARN) of a project. Amazon Bedrock uses the
   * project's trusted access program participation when determining whether to
   * return a system-defined inference profile. The project must belong to your
   * account in the same AWS Region and partition as the request.</p> <p>If you omit
   * this parameter or specify <code>default</code>, Amazon Bedrock uses your
   * account's participation, including organization inheritance.</p> <p>A project
   * that doesn't exist or is archived causes a <code>ValidationException</code>.
   * Specifying a project other than <code>default</code> for an application
   * inference profile also causes a <code>ValidationException</code>.</p>
   */
  inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
  inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
  template <typename ProjectIdentifierT = Aws::String>
  void SetProjectIdentifier(ProjectIdentifierT&& value) {
    m_projectIdentifierHasBeenSet = true;
    m_projectIdentifier = std::forward<ProjectIdentifierT>(value);
  }
  template <typename ProjectIdentifierT = Aws::String>
  GetInferenceProfileRequest& WithProjectIdentifier(ProjectIdentifierT&& value) {
    SetProjectIdentifier(std::forward<ProjectIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inferenceProfileIdentifier;

  Aws::String m_projectIdentifier;
  bool m_inferenceProfileIdentifierHasBeenSet = false;
  bool m_projectIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
