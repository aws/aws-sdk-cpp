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
 * <p>Identifies the trusted access program for which to prepare an account
 * application handoff.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/StartTrustedAccessProgramAccountApplicationRequest">AWS
 * API Reference</a></p>
 */
class StartTrustedAccessProgramAccountApplicationRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API StartTrustedAccessProgramAccountApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartTrustedAccessProgramAccountApplication"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

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
  StartTrustedAccessProgramAccountApplicationRequest& WithProgramIdentifier(ProgramIdentifierT&& value) {
    SetProgramIdentifier(std::forward<ProgramIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_programIdentifier;
  bool m_programIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
