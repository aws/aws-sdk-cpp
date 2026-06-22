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
class CreateMicrovmShellAuthTokenRequest : public LambdaMicrovmsRequest {
 public:
  AWS_LAMBDAMICROVMS_API CreateMicrovmShellAuthTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMicrovmShellAuthToken"; }

  AWS_LAMBDAMICROVMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the MicroVM to create a shell authentication token for.</p>
   */
  inline const Aws::String& GetMicrovmIdentifier() const { return m_microvmIdentifier; }
  inline bool MicrovmIdentifierHasBeenSet() const { return m_microvmIdentifierHasBeenSet; }
  template <typename MicrovmIdentifierT = Aws::String>
  void SetMicrovmIdentifier(MicrovmIdentifierT&& value) {
    m_microvmIdentifierHasBeenSet = true;
    m_microvmIdentifier = std::forward<MicrovmIdentifierT>(value);
  }
  template <typename MicrovmIdentifierT = Aws::String>
  CreateMicrovmShellAuthTokenRequest& WithMicrovmIdentifier(MicrovmIdentifierT&& value) {
    SetMicrovmIdentifier(std::forward<MicrovmIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration in minutes before the shell authentication token expires.</p>
   */
  inline int GetExpirationInMinutes() const { return m_expirationInMinutes; }
  inline bool ExpirationInMinutesHasBeenSet() const { return m_expirationInMinutesHasBeenSet; }
  inline void SetExpirationInMinutes(int value) {
    m_expirationInMinutesHasBeenSet = true;
    m_expirationInMinutes = value;
  }
  inline CreateMicrovmShellAuthTokenRequest& WithExpirationInMinutes(int value) {
    SetExpirationInMinutes(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_microvmIdentifier;

  int m_expirationInMinutes{0};
  bool m_microvmIdentifierHasBeenSet = false;
  bool m_expirationInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
