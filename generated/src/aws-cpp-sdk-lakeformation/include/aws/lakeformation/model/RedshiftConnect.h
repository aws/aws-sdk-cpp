/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/ServiceAuthorization.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {

/**
 * <p>Configuration for enabling trusted identity propagation with Redshift
 * Connect.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RedshiftConnect">AWS
 * API Reference</a></p>
 */
class RedshiftConnect {
 public:
  AWS_LAKEFORMATION_API RedshiftConnect() = default;
  AWS_LAKEFORMATION_API RedshiftConnect(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API RedshiftConnect& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The authorization status for Redshift Connect. Valid values are ENABLED or
   * DISABLED.</p>
   */
  inline ServiceAuthorization GetAuthorization() const { return m_authorization; }
  inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
  inline void SetAuthorization(ServiceAuthorization value) {
    m_authorizationHasBeenSet = true;
    m_authorization = value;
  }
  inline RedshiftConnect& WithAuthorization(ServiceAuthorization value) {
    SetAuthorization(value);
    return *this;
  }
  ///@}
 private:
  ServiceAuthorization m_authorization{ServiceAuthorization::NOT_SET};
  bool m_authorizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
