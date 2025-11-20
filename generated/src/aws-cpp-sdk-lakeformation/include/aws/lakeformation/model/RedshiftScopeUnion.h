/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/RedshiftConnect.h>

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
 * <p>A union structure representing different Redshift integration
 * scopes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RedshiftScopeUnion">AWS
 * API Reference</a></p>
 */
class RedshiftScopeUnion {
 public:
  AWS_LAKEFORMATION_API RedshiftScopeUnion() = default;
  AWS_LAKEFORMATION_API RedshiftScopeUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API RedshiftScopeUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for Redshift Connect integration.</p>
   */
  inline const RedshiftConnect& GetRedshiftConnect() const { return m_redshiftConnect; }
  inline bool RedshiftConnectHasBeenSet() const { return m_redshiftConnectHasBeenSet; }
  template <typename RedshiftConnectT = RedshiftConnect>
  void SetRedshiftConnect(RedshiftConnectT&& value) {
    m_redshiftConnectHasBeenSet = true;
    m_redshiftConnect = std::forward<RedshiftConnectT>(value);
  }
  template <typename RedshiftConnectT = RedshiftConnect>
  RedshiftScopeUnion& WithRedshiftConnect(RedshiftConnectT&& value) {
    SetRedshiftConnect(std::forward<RedshiftConnectT>(value));
    return *this;
  }
  ///@}
 private:
  RedshiftConnect m_redshiftConnect;
  bool m_redshiftConnectHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
