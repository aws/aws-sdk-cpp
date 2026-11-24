/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class AssociateManagedApisRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API AssociateManagedApisRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateManagedApis"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the product to associate the Managed APIs with.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  AssociateManagedApisRequest& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetManagedApiIds() const { return m_managedApiIds; }
  inline bool ManagedApiIdsHasBeenSet() const { return m_managedApiIdsHasBeenSet; }
  template <typename ManagedApiIdsT = Aws::Vector<Aws::String>>
  void SetManagedApiIds(ManagedApiIdsT&& value) {
    m_managedApiIdsHasBeenSet = true;
    m_managedApiIds = std::forward<ManagedApiIdsT>(value);
  }
  template <typename ManagedApiIdsT = Aws::Vector<Aws::String>>
  AssociateManagedApisRequest& WithManagedApiIds(ManagedApiIdsT&& value) {
    SetManagedApiIds(std::forward<ManagedApiIdsT>(value));
    return *this;
  }
  template <typename ManagedApiIdsT = Aws::String>
  AssociateManagedApisRequest& AddManagedApiIds(ManagedApiIdsT&& value) {
    m_managedApiIdsHasBeenSet = true;
    m_managedApiIds.emplace_back(std::forward<ManagedApiIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::Vector<Aws::String> m_managedApiIds;
  bool m_productIdHasBeenSet = false;
  bool m_managedApiIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
