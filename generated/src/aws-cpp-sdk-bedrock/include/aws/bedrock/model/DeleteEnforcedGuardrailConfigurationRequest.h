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
 */
class DeleteEnforcedGuardrailConfigurationRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API DeleteEnforcedGuardrailConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteEnforcedGuardrailConfiguration"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Unique ID for the account enforced configuration.</p>
   */
  inline const Aws::String& GetConfigId() const { return m_configId; }
  inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }
  template <typename ConfigIdT = Aws::String>
  void SetConfigId(ConfigIdT&& value) {
    m_configIdHasBeenSet = true;
    m_configId = std::forward<ConfigIdT>(value);
  }
  template <typename ConfigIdT = Aws::String>
  DeleteEnforcedGuardrailConfigurationRequest& WithConfigId(ConfigIdT&& value) {
    SetConfigId(std::forward<ConfigIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_configId;
  bool m_configIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
