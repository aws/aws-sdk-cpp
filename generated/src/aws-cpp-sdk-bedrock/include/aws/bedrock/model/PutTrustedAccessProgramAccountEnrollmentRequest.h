/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/TrustedAccessProgramOptIn.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 * <p>The trusted access program and enrollment preference to save for the calling
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PutTrustedAccessProgramAccountEnrollmentRequest">AWS
 * API Reference</a></p>
 */
class PutTrustedAccessProgramAccountEnrollmentRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API PutTrustedAccessProgramAccountEnrollmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutTrustedAccessProgramAccountEnrollment"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the trusted access program.</p>
   */
  inline const Aws::String& GetProgramIdentifier() const { return m_programIdentifier; }
  inline bool ProgramIdentifierHasBeenSet() const { return m_programIdentifierHasBeenSet; }
  template <typename ProgramIdentifierT = Aws::String>
  void SetProgramIdentifier(ProgramIdentifierT&& value) {
    m_programIdentifierHasBeenSet = true;
    m_programIdentifier = std::forward<ProgramIdentifierT>(value);
  }
  template <typename ProgramIdentifierT = Aws::String>
  PutTrustedAccessProgramAccountEnrollmentRequest& WithProgramIdentifier(ProgramIdentifierT&& value) {
    SetProgramIdentifier(std::forward<ProgramIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enrollment preference to store. A transition to enabled accepts the
   * program's terms. Changing the preference records a new updatedAt. Repeating the
   * same stored preference preserves updatedAt.</p>
   */
  inline TrustedAccessProgramOptIn GetOptIn() const { return m_optIn; }
  inline bool OptInHasBeenSet() const { return m_optInHasBeenSet; }
  inline void SetOptIn(TrustedAccessProgramOptIn value) {
    m_optInHasBeenSet = true;
    m_optIn = value;
  }
  inline PutTrustedAccessProgramAccountEnrollmentRequest& WithOptIn(TrustedAccessProgramOptIn value) {
    SetOptIn(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_programIdentifier;

  TrustedAccessProgramOptIn m_optIn{TrustedAccessProgramOptIn::NOT_SET};
  bool m_programIdentifierHasBeenSet = false;
  bool m_optInHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
