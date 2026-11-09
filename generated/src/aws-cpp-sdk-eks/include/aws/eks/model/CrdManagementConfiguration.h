/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>Indicates the current configuration of Gateway API custom resource definition
 * (CRD) management on your EKS Auto Mode cluster. For example, if CRD management
 * is enabled or disabled. For more information, see EKS Auto Mode load balancing
 * capability in the <i>Amazon EKS User Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CrdManagementConfiguration">AWS
 * API Reference</a></p>
 */
class CrdManagementConfiguration {
 public:
  AWS_EKS_API CrdManagementConfiguration() = default;
  AWS_EKS_API CrdManagementConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CrdManagementConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates if Gateway API CRD management is enabled on your EKS Auto Mode
   * cluster. If CRD management is enabled, EKS Auto Mode will create and update the
   * Gateway API CRDs in your EKS Auto Mode cluster.</p>
   */
  inline bool GetManaged() const { return m_managed; }
  inline bool ManagedHasBeenSet() const { return m_managedHasBeenSet; }
  inline void SetManaged(bool value) {
    m_managedHasBeenSet = true;
    m_managed = value;
  }
  inline CrdManagementConfiguration& WithManaged(bool value) {
    SetManaged(value);
    return *this;
  }
  ///@}
 private:
  bool m_managed{false};
  bool m_managedHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
