/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Collector data access configuration returned for an
 * environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CollectorDetails">AWS
 * API Reference</a></p>
 */
class CollectorDetails {
 public:
  AWS_CONTINUUM_API CollectorDetails() = default;
  AWS_CONTINUUM_API CollectorDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API CollectorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>IAM role that Continuum assumes to authorize its access to associated
   * Collector inventory. Required for nonempty Collector inventory resolution, in
   * the same account or across accounts. This is independent from any S3 source
   * role.</p>
   */
  inline const Aws::String& GetCollectorDataAccessRoleArn() const { return m_collectorDataAccessRoleArn; }
  inline bool CollectorDataAccessRoleArnHasBeenSet() const { return m_collectorDataAccessRoleArnHasBeenSet; }
  template <typename CollectorDataAccessRoleArnT = Aws::String>
  void SetCollectorDataAccessRoleArn(CollectorDataAccessRoleArnT&& value) {
    m_collectorDataAccessRoleArnHasBeenSet = true;
    m_collectorDataAccessRoleArn = std::forward<CollectorDataAccessRoleArnT>(value);
  }
  template <typename CollectorDataAccessRoleArnT = Aws::String>
  CollectorDetails& WithCollectorDataAccessRoleArn(CollectorDataAccessRoleArnT&& value) {
    SetCollectorDataAccessRoleArn(std::forward<CollectorDataAccessRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_collectorDataAccessRoleArn;
  bool m_collectorDataAccessRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
