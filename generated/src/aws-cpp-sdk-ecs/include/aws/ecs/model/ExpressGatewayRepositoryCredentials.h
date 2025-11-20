/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The repository credentials for private registry authentication to pass to the
 * container.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExpressGatewayRepositoryCredentials">AWS
 * API Reference</a></p>
 */
class ExpressGatewayRepositoryCredentials {
 public:
  AWS_ECS_API ExpressGatewayRepositoryCredentials() = default;
  AWS_ECS_API ExpressGatewayRepositoryCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ExpressGatewayRepositoryCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the secret containing the private
   * repository credentials.</p>
   */
  inline const Aws::String& GetCredentialsParameter() const { return m_credentialsParameter; }
  inline bool CredentialsParameterHasBeenSet() const { return m_credentialsParameterHasBeenSet; }
  template <typename CredentialsParameterT = Aws::String>
  void SetCredentialsParameter(CredentialsParameterT&& value) {
    m_credentialsParameterHasBeenSet = true;
    m_credentialsParameter = std::forward<CredentialsParameterT>(value);
  }
  template <typename CredentialsParameterT = Aws::String>
  ExpressGatewayRepositoryCredentials& WithCredentialsParameter(CredentialsParameterT&& value) {
    SetCredentialsParameter(std::forward<CredentialsParameterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_credentialsParameter;
  bool m_credentialsParameterHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
