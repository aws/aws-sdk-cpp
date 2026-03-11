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
namespace CustomerProfiles {
namespace Model {

/**
 */
class GetRecommenderFilterRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API GetRecommenderFilterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRecommenderFilter"; }

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
  GetRecommenderFilterRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommender filter to retrieve.</p>
   */
  inline const Aws::String& GetRecommenderFilterName() const { return m_recommenderFilterName; }
  inline bool RecommenderFilterNameHasBeenSet() const { return m_recommenderFilterNameHasBeenSet; }
  template <typename RecommenderFilterNameT = Aws::String>
  void SetRecommenderFilterName(RecommenderFilterNameT&& value) {
    m_recommenderFilterNameHasBeenSet = true;
    m_recommenderFilterName = std::forward<RecommenderFilterNameT>(value);
  }
  template <typename RecommenderFilterNameT = Aws::String>
  GetRecommenderFilterRequest& WithRecommenderFilterName(RecommenderFilterNameT&& value) {
    SetRecommenderFilterName(std::forward<RecommenderFilterNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_recommenderFilterName;
  bool m_domainNameHasBeenSet = false;
  bool m_recommenderFilterNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
