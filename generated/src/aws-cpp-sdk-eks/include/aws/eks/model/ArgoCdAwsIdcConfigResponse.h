/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>The response object containing IAM Identity CenterIAM; Identity Center
 * configuration details for an Argo CD capability.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ArgoCdAwsIdcConfigResponse">AWS
 * API Reference</a></p>
 */
class ArgoCdAwsIdcConfigResponse {
 public:
  AWS_EKS_API ArgoCdAwsIdcConfigResponse() = default;
  AWS_EKS_API ArgoCdAwsIdcConfigResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ArgoCdAwsIdcConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM Identity CenterIAM; Identity Center
   * instance used for authentication.</p>
   */
  inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
  inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
  template <typename IdcInstanceArnT = Aws::String>
  void SetIdcInstanceArn(IdcInstanceArnT&& value) {
    m_idcInstanceArnHasBeenSet = true;
    m_idcInstanceArn = std::forward<IdcInstanceArnT>(value);
  }
  template <typename IdcInstanceArnT = Aws::String>
  ArgoCdAwsIdcConfigResponse& WithIdcInstanceArn(IdcInstanceArnT&& value) {
    SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region where the IAM Identity CenterIAM; Identity Center instance is
   * located.</p>
   */
  inline const Aws::String& GetIdcRegion() const { return m_idcRegion; }
  inline bool IdcRegionHasBeenSet() const { return m_idcRegionHasBeenSet; }
  template <typename IdcRegionT = Aws::String>
  void SetIdcRegion(IdcRegionT&& value) {
    m_idcRegionHasBeenSet = true;
    m_idcRegion = std::forward<IdcRegionT>(value);
  }
  template <typename IdcRegionT = Aws::String>
  ArgoCdAwsIdcConfigResponse& WithIdcRegion(IdcRegionT&& value) {
    SetIdcRegion(std::forward<IdcRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the managed application created in IAM
   * Identity CenterIAM; Identity Center for this Argo CD capability. This
   * application is automatically created and managed by Amazon EKS.</p>
   */
  inline const Aws::String& GetIdcManagedApplicationArn() const { return m_idcManagedApplicationArn; }
  inline bool IdcManagedApplicationArnHasBeenSet() const { return m_idcManagedApplicationArnHasBeenSet; }
  template <typename IdcManagedApplicationArnT = Aws::String>
  void SetIdcManagedApplicationArn(IdcManagedApplicationArnT&& value) {
    m_idcManagedApplicationArnHasBeenSet = true;
    m_idcManagedApplicationArn = std::forward<IdcManagedApplicationArnT>(value);
  }
  template <typename IdcManagedApplicationArnT = Aws::String>
  ArgoCdAwsIdcConfigResponse& WithIdcManagedApplicationArn(IdcManagedApplicationArnT&& value) {
    SetIdcManagedApplicationArn(std::forward<IdcManagedApplicationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idcInstanceArn;

  Aws::String m_idcRegion;

  Aws::String m_idcManagedApplicationArn;
  bool m_idcInstanceArnHasBeenSet = false;
  bool m_idcRegionHasBeenSet = false;
  bool m_idcManagedApplicationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
