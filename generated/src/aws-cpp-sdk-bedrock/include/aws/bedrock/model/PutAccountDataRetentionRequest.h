/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/DataRetentionMode.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 */
class PutAccountDataRetentionRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API PutAccountDataRetentionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAccountDataRetention"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The data retention mode to set for the account.</p>
   */
  inline DataRetentionMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(DataRetentionMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline PutAccountDataRetentionRequest& WithMode(DataRetentionMode value) {
    SetMode(value);
    return *this;
  }
  ///@}
 private:
  DataRetentionMode m_mode{DataRetentionMode::NOT_SET};
  bool m_modeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
