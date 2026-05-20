/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/KMSRequest.h>
#include <aws/kms/KMS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace KMS {
namespace Model {

/**
 */
class ListRetirableGrantsRequest : public KMSRequest {
 public:
  AWS_KMS_API ListRetirableGrantsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRetirableGrants"; }

  AWS_KMS_API Aws::String SerializePayload() const override;

  AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Use this parameter to specify the maximum number of items to return. When
   * this value is present, KMS does not return more than the specified number of
   * items, but it might return fewer.</p> <p>This value is optional. If you include
   * a value, it must be between 1 and 100, inclusive. If you do not include a value,
   * it defaults to 50.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListRetirableGrantsRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this parameter in a subsequent request after you receive a response with
   * truncated results. Set it to the value of <code>NextMarker</code> from the
   * truncated response you just received.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListRetirableGrantsRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retiring principal for which to list grants. Enter a principal in your
   * Amazon Web Services account.</p> <p>To specify the retiring principal, use the
   * <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Name (ARN)</a> of an Amazon Web Services principal. Valid principals
   * include Amazon Web Services accounts, IAM users, IAM roles, federated users, and
   * assumed role users. For help with the ARN syntax for a principal, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
   * ARNs</a> in the <i> <i>Identity and Access Management User Guide</i> </i>.</p>
   * <p>You must specify either <code>RetiringPrincipal</code> or
   * <code>RetiringServicePrincipal</code>, but not both.</p>
   */
  inline const Aws::String& GetRetiringPrincipal() const { return m_retiringPrincipal; }
  inline bool RetiringPrincipalHasBeenSet() const { return m_retiringPrincipalHasBeenSet; }
  template <typename RetiringPrincipalT = Aws::String>
  void SetRetiringPrincipal(RetiringPrincipalT&& value) {
    m_retiringPrincipalHasBeenSet = true;
    m_retiringPrincipal = std::forward<RetiringPrincipalT>(value);
  }
  template <typename RetiringPrincipalT = Aws::String>
  ListRetirableGrantsRequest& WithRetiringPrincipal(RetiringPrincipalT&& value) {
    SetRetiringPrincipal(std::forward<RetiringPrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retiring service principal for which to list grants. This filter is only
   * usable by callers in a service principal.</p> <p>You must specify either
   * <code>RetiringPrincipal</code> or <code>RetiringServicePrincipal</code>, but not
   * both.</p>
   */
  inline const Aws::String& GetRetiringServicePrincipal() const { return m_retiringServicePrincipal; }
  inline bool RetiringServicePrincipalHasBeenSet() const { return m_retiringServicePrincipalHasBeenSet; }
  template <typename RetiringServicePrincipalT = Aws::String>
  void SetRetiringServicePrincipal(RetiringServicePrincipalT&& value) {
    m_retiringServicePrincipalHasBeenSet = true;
    m_retiringServicePrincipal = std::forward<RetiringServicePrincipalT>(value);
  }
  template <typename RetiringServicePrincipalT = Aws::String>
  ListRetirableGrantsRequest& WithRetiringServicePrincipal(RetiringServicePrincipalT&& value) {
    SetRetiringServicePrincipal(std::forward<RetiringServicePrincipalT>(value));
    return *this;
  }
  ///@}
 private:
  int m_limit{0};

  Aws::String m_marker;

  Aws::String m_retiringPrincipal;

  Aws::String m_retiringServicePrincipal;
  bool m_limitHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_retiringPrincipalHasBeenSet = false;
  bool m_retiringServicePrincipalHasBeenSet = false;
};

}  // namespace Model
}  // namespace KMS
}  // namespace Aws
