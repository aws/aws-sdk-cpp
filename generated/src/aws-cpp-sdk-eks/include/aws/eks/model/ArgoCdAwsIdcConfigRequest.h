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
 * <p>Configuration for integrating Argo CD with IAM Identity CenterIAM; Identity
 * Center. This allows you to use your organization's identity provider for
 * authentication to Argo CD.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ArgoCdAwsIdcConfigRequest">AWS
 * API Reference</a></p>
 */
class ArgoCdAwsIdcConfigRequest {
 public:
  AWS_EKS_API ArgoCdAwsIdcConfigRequest() = default;
  AWS_EKS_API ArgoCdAwsIdcConfigRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ArgoCdAwsIdcConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM Identity CenterIAM; Identity Center
   * instance to use for authentication.</p>
   */
  inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
  inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
  template <typename IdcInstanceArnT = Aws::String>
  void SetIdcInstanceArn(IdcInstanceArnT&& value) {
    m_idcInstanceArnHasBeenSet = true;
    m_idcInstanceArn = std::forward<IdcInstanceArnT>(value);
  }
  template <typename IdcInstanceArnT = Aws::String>
  ArgoCdAwsIdcConfigRequest& WithIdcInstanceArn(IdcInstanceArnT&& value) {
    SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region where your IAM Identity CenterIAM; Identity Center instance is
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
  ArgoCdAwsIdcConfigRequest& WithIdcRegion(IdcRegionT&& value) {
    SetIdcRegion(std::forward<IdcRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idcInstanceArn;

  Aws::String m_idcRegion;
  bool m_idcInstanceArnHasBeenSet = false;
  bool m_idcRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
