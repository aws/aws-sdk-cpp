/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/RedshiftScopeUnion.h>

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
 * <p>A union structure representing different service integration
 * types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ServiceIntegrationUnion">AWS
 * API Reference</a></p>
 */
class ServiceIntegrationUnion {
 public:
  AWS_LAKEFORMATION_API ServiceIntegrationUnion() = default;
  AWS_LAKEFORMATION_API ServiceIntegrationUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API ServiceIntegrationUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Redshift service integration configuration.</p>
   */
  inline const Aws::Vector<RedshiftScopeUnion>& GetRedshift() const { return m_redshift; }
  inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }
  template <typename RedshiftT = Aws::Vector<RedshiftScopeUnion>>
  void SetRedshift(RedshiftT&& value) {
    m_redshiftHasBeenSet = true;
    m_redshift = std::forward<RedshiftT>(value);
  }
  template <typename RedshiftT = Aws::Vector<RedshiftScopeUnion>>
  ServiceIntegrationUnion& WithRedshift(RedshiftT&& value) {
    SetRedshift(std::forward<RedshiftT>(value));
    return *this;
  }
  template <typename RedshiftT = RedshiftScopeUnion>
  ServiceIntegrationUnion& AddRedshift(RedshiftT&& value) {
    m_redshiftHasBeenSet = true;
    m_redshift.emplace_back(std::forward<RedshiftT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RedshiftScopeUnion> m_redshift;
  bool m_redshiftHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
