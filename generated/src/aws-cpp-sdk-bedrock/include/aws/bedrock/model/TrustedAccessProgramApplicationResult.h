/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/TrustedAccessProgramProviderHandoff.h>

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
 * <p>Result of preparing an application. A provider handoff does not submit an
 * application, grant eligibility, or change enrollment. Clients must tolerate
 * unknown union members.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/TrustedAccessProgramApplicationResult">AWS
 * API Reference</a></p>
 */
class TrustedAccessProgramApplicationResult {
 public:
  AWS_BEDROCK_API TrustedAccessProgramApplicationResult() = default;
  AWS_BEDROCK_API TrustedAccessProgramApplicationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API TrustedAccessProgramApplicationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information for continuing the application with the provider.</p>
   */
  inline const TrustedAccessProgramProviderHandoff& GetProviderHandoff() const { return m_providerHandoff; }
  inline bool ProviderHandoffHasBeenSet() const { return m_providerHandoffHasBeenSet; }
  template <typename ProviderHandoffT = TrustedAccessProgramProviderHandoff>
  void SetProviderHandoff(ProviderHandoffT&& value) {
    m_providerHandoffHasBeenSet = true;
    m_providerHandoff = std::forward<ProviderHandoffT>(value);
  }
  template <typename ProviderHandoffT = TrustedAccessProgramProviderHandoff>
  TrustedAccessProgramApplicationResult& WithProviderHandoff(ProviderHandoffT&& value) {
    SetProviderHandoff(std::forward<ProviderHandoffT>(value));
    return *this;
  }
  ///@}
 private:
  TrustedAccessProgramProviderHandoff m_providerHandoff;
  bool m_providerHandoffHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
