/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/KMSRequest.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/ResourceOwnerType.h>

#include <utility>

namespace Aws {
namespace KMS {
namespace Model {

/**
 */
class ListKeysRequest : public KMSRequest {
 public:
  AWS_KMS_API ListKeysRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListKeys"; }

  AWS_KMS_API Aws::String SerializePayload() const override;

  AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Use this parameter to specify the maximum number of items to return. When
   * this value is present, KMS does not return more than the specified number of
   * items, but it might return fewer.</p> <p>This value is optional. If you include
   * a value, it must be between 1 and 1000, inclusive. If you do not include a
   * value, it defaults to 100.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListKeysRequest& WithLimit(int value) {
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
  ListKeysRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whose KMS keys to list. Use this parameter to list KMS keys that
   * other Amazon Web Services accounts shared with your Amazon Web Services account
   * through Resource Access Manager (RAM).</p> <p>Specify one or two values. Valid
   * values are:</p> <dl> <dt>SELF</dt> <dd> <p>Lists the KMS keys in your Amazon Web
   * Services account and Region.</p> </dd> <dt>OTHER_ACCOUNTS_VIA_RAM</dt> <dd>
   * <p>Lists the KMS keys in the Region that other Amazon Web Services accounts
   * currently share with your Amazon Web Services account through RAM. This list
   * doesn't include KMS keys that your Amazon Web Services account owns. For each of
   * these KMS keys, the key ARN in the response contains the account ID of the
   * Amazon Web Services account that owns the KMS key.</p> </dd> </dl> <p>If you
   * omit this parameter, <code>ListKeys</code> lists only the KMS keys in your
   * Amazon Web Services account. If you specify both values, in either order,
   * <code>ListKeys</code> returns the KMS keys in your Amazon Web Services account
   * first, and then the KMS keys that other Amazon Web Services accounts shared with
   * you. A single response doesn't contain both kinds of KMS keys.</p> <p>When
   * <code>ResourceOwners</code> includes <code>OTHER_ACCOUNTS_VIA_RAM</code>, a
   * response can contain fewer KMS keys than the <code>Limit</code> value, or none,
   * even when <code>Truncated</code> is true. To get all of the KMS keys, continue
   * calling <code>ListKeys</code> with the <code>NextMarker</code> value from each
   * response until <code>Truncated</code> is false. Use a <code>NextMarker</code>
   * value only in a request that has the same <code>ResourceOwners</code> value as
   * the request that returned it. Otherwise, the request can fail with an
   * <code>InvalidMarkerException</code>.</p> <p>KMS keys that other Amazon Web
   * Services accounts share with you can take some time to appear in or disappear
   * from the results after changes to resource shares.</p>
   */
  inline const Aws::Vector<ResourceOwnerType>& GetResourceOwners() const { return m_resourceOwners; }
  inline bool ResourceOwnersHasBeenSet() const { return m_resourceOwnersHasBeenSet; }
  template <typename ResourceOwnersT = Aws::Vector<ResourceOwnerType>>
  void SetResourceOwners(ResourceOwnersT&& value) {
    m_resourceOwnersHasBeenSet = true;
    m_resourceOwners = std::forward<ResourceOwnersT>(value);
  }
  template <typename ResourceOwnersT = Aws::Vector<ResourceOwnerType>>
  ListKeysRequest& WithResourceOwners(ResourceOwnersT&& value) {
    SetResourceOwners(std::forward<ResourceOwnersT>(value));
    return *this;
  }
  inline ListKeysRequest& AddResourceOwners(ResourceOwnerType value) {
    m_resourceOwnersHasBeenSet = true;
    m_resourceOwners.push_back(value);
    return *this;
  }
  ///@}
 private:
  int m_limit{0};

  Aws::String m_marker;

  Aws::Vector<ResourceOwnerType> m_resourceOwners;
  bool m_limitHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_resourceOwnersHasBeenSet = false;
};

}  // namespace Model
}  // namespace KMS
}  // namespace Aws
