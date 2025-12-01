/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/SsoIdentityType.h>

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
 * <p>An IAM Identity CenterIAM; Identity Center identity (user or group) that can
 * be assigned permissions in a capability.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/SsoIdentity">AWS API
 * Reference</a></p>
 */
class SsoIdentity {
 public:
  AWS_EKS_API SsoIdentity() = default;
  AWS_EKS_API SsoIdentity(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API SsoIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the IAM Identity CenterIAM; Identity Center user or
   * group.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  SsoIdentity& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of identity. Valid values are <code>SSO_USER</code> or
   * <code>SSO_GROUP</code>.</p>
   */
  inline SsoIdentityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SsoIdentityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SsoIdentity& WithType(SsoIdentityType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  SsoIdentityType m_type{SsoIdentityType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
