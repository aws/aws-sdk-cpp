/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovmsRequest.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

/**
 */
class SuspendMicrovmRequest : public LambdaMicrovmsRequest {
 public:
  AWS_LAMBDAMICROVMS_API SuspendMicrovmRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SuspendMicrovm"; }

  AWS_LAMBDAMICROVMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the MicroVM to suspend.</p>
   */
  inline const Aws::String& GetMicrovmIdentifier() const { return m_microvmIdentifier; }
  inline bool MicrovmIdentifierHasBeenSet() const { return m_microvmIdentifierHasBeenSet; }
  template <typename MicrovmIdentifierT = Aws::String>
  void SetMicrovmIdentifier(MicrovmIdentifierT&& value) {
    m_microvmIdentifierHasBeenSet = true;
    m_microvmIdentifier = std::forward<MicrovmIdentifierT>(value);
  }
  template <typename MicrovmIdentifierT = Aws::String>
  SuspendMicrovmRequest& WithMicrovmIdentifier(MicrovmIdentifierT&& value) {
    SetMicrovmIdentifier(std::forward<MicrovmIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_microvmIdentifier;
  bool m_microvmIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
