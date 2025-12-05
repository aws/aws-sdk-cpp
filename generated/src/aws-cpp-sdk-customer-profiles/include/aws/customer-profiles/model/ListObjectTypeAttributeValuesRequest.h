/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace CustomerProfiles {
namespace Model {

/**
 */
class ListObjectTypeAttributeValuesRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API ListObjectTypeAttributeValuesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListObjectTypeAttributeValues"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The pagination token from the previous call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListObjectTypeAttributeValuesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of objects returned per page. Valid Range: Minimum value
   * of 1. Maximum value of 100. If not provided default as 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListObjectTypeAttributeValuesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

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
  ListObjectTypeAttributeValuesRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique name of the domain object type.</p>
   */
  inline const Aws::String& GetObjectTypeName() const { return m_objectTypeName; }
  inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
  template <typename ObjectTypeNameT = Aws::String>
  void SetObjectTypeName(ObjectTypeNameT&& value) {
    m_objectTypeNameHasBeenSet = true;
    m_objectTypeName = std::forward<ObjectTypeNameT>(value);
  }
  template <typename ObjectTypeNameT = Aws::String>
  ListObjectTypeAttributeValuesRequest& WithObjectTypeName(ObjectTypeNameT&& value) {
    SetObjectTypeName(std::forward<ObjectTypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attribute name.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  ListObjectTypeAttributeValuesRequest& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::String m_domainName;

  Aws::String m_objectTypeName;

  Aws::String m_attributeName;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_objectTypeNameHasBeenSet = false;
  bool m_attributeNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
