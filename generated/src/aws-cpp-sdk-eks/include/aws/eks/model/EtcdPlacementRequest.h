/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/SpreadLevel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>The placement configuration for the etcd instances of your local Amazon EKS
 * cluster on an Amazon Web Services Outpost. For more information, see <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
 * considerations</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/EtcdPlacementRequest">AWS
 * API Reference</a></p>
 */
class EtcdPlacementRequest {
 public:
  AWS_EKS_API EtcdPlacementRequest() = default;
  AWS_EKS_API EtcdPlacementRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API EtcdPlacementRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Optional parameter to specify the placement group spread level for etcd
   * instances. If not provided, Amazon EKS will deploy etcd instances without a
   * placement group.</p>
   */
  inline SpreadLevel GetSpreadLevel() const { return m_spreadLevel; }
  inline bool SpreadLevelHasBeenSet() const { return m_spreadLevelHasBeenSet; }
  inline void SetSpreadLevel(SpreadLevel value) {
    m_spreadLevelHasBeenSet = true;
    m_spreadLevel = value;
  }
  inline EtcdPlacementRequest& WithSpreadLevel(SpreadLevel value) {
    SetSpreadLevel(value);
    return *this;
  }
  ///@}
 private:
  SpreadLevel m_spreadLevel{SpreadLevel::NOT_SET};
  bool m_spreadLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
