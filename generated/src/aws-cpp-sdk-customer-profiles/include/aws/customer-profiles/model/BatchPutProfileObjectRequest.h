/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/BatchPutProfileObjectRequestItem.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class BatchPutProfileObjectRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API BatchPutProfileObjectRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchPutProfileObject"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique name of the domain.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  BatchPutProfileObjectRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the profile object type.</p>
   */
  inline const Aws::String& GetObjectTypeName() const { return m_objectTypeName; }
  inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
  template <typename ObjectTypeNameT = Aws::String>
  void SetObjectTypeName(ObjectTypeNameT&& value) {
    m_objectTypeNameHasBeenSet = true;
    m_objectTypeName = std::forward<ObjectTypeNameT>(value);
  }
  template <typename ObjectTypeNameT = Aws::String>
  BatchPutProfileObjectRequest& WithObjectTypeName(ObjectTypeNameT&& value) {
    SetObjectTypeName(std::forward<ObjectTypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of items to add to the domain.</p>
   */
  inline const Aws::Vector<BatchPutProfileObjectRequestItem>& GetItems() const { return m_items; }
  inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
  template <typename ItemsT = Aws::Vector<BatchPutProfileObjectRequestItem>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<BatchPutProfileObjectRequestItem>>
  BatchPutProfileObjectRequest& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = BatchPutProfileObjectRequestItem>
  BatchPutProfileObjectRequest& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_objectTypeName;

  Aws::Vector<BatchPutProfileObjectRequestItem> m_items;
  bool m_domainNameHasBeenSet = false;
  bool m_objectTypeNameHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
