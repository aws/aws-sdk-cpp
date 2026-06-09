/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/IssuerType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>Specifies the issuer configuration for a user pool. Contains settings that
 * determine how tokens are issued and validated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/IssuerConfigurationType">AWS
 * API Reference</a></p>
 */
class IssuerConfigurationType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API IssuerConfigurationType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API IssuerConfigurationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API IssuerConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of issuer configuration. Determines the token issuing behavior for
   * the user pool.</p> <dl> <dt>ORIGINAL</dt> <dd> <p>The original issuer
   * configuration for user pools. The issuer URL is hosted in the user pool’s region
   * and provides OIDC endpoints specific to that region.</p> <p>Original issuers
   * have the format of
   * <code>https://cognito-idp.[region].amazonaws.com/[userPoolId]</code> </p> </dd>
   * <dt>UPDATED</dt> <dd> <p>Recommended for all user pools, including for
   * multi-Region replication. Updated issuers host the same JWKS content in multiple
   * regions, resulting in improved resilience and efficiency.</p> <p>Updated issuers
   * have the format of
   * <code>https://issuer-cognito-idp.[region].amazonaws.com/[userPoolId]</code>,
   * where region is the primary Amazon Web Services Region of your user pool.</p>
   * </dd> </dl>
   */
  inline IssuerType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(IssuerType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline IssuerConfigurationType& WithType(IssuerType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  IssuerType m_type{IssuerType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
