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
 * <p>Identifies the trusted access program and optional named project for which to
 * resolve participation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetTrustedAccessProgramRequest">AWS
 * API Reference</a></p>
 */
class GetTrustedAccessProgramRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API GetTrustedAccessProgramRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetTrustedAccessProgram"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Identifier of the trusted access program.</p>
   */
  inline const Aws::String& GetProgramIdentifier() const { return m_programIdentifier; }
  inline bool ProgramIdentifierHasBeenSet() const { return m_programIdentifierHasBeenSet; }
  template <typename ProgramIdentifierT = Aws::String>
  void SetProgramIdentifier(ProgramIdentifierT&& value) {
    m_programIdentifierHasBeenSet = true;
    m_programIdentifier = std::forward<ProgramIdentifierT>(value);
  }
  template <typename ProgramIdentifierT = Aws::String>
  GetTrustedAccessProgramRequest& WithProgramIdentifier(ProgramIdentifierT&& value) {
    SetProgramIdentifier(std::forward<ProgramIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID or ARN of a named Bedrock project owned by the calling account in this
   * Region. When omitted, resolves participation for the calling account, including
   * participation inherited from its current organization. When specified, resolves
   * participation for the project, including participation inherited from the
   * account and its current organization. You cannot specify the default project.
   * Omit this field to resolve its inherited participation. An ARN from another
   * account, Region, or partition returns ValidationException. A project that does
   * not exist in the calling account returns ResourceNotFoundException.</p>
   */
  inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
  inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
  template <typename ProjectIdentifierT = Aws::String>
  void SetProjectIdentifier(ProjectIdentifierT&& value) {
    m_projectIdentifierHasBeenSet = true;
    m_projectIdentifier = std::forward<ProjectIdentifierT>(value);
  }
  template <typename ProjectIdentifierT = Aws::String>
  GetTrustedAccessProgramRequest& WithProjectIdentifier(ProjectIdentifierT&& value) {
    SetProjectIdentifier(std::forward<ProjectIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_programIdentifier;

  Aws::String m_projectIdentifier;
  bool m_programIdentifierHasBeenSet = false;
  bool m_projectIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
