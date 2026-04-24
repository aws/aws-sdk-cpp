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
class GetRecommenderSchemaRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API GetRecommenderSchemaRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRecommenderSchema"; }

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
  GetRecommenderSchemaRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommender schema to retrieve.</p>
   */
  inline const Aws::String& GetRecommenderSchemaName() const { return m_recommenderSchemaName; }
  inline bool RecommenderSchemaNameHasBeenSet() const { return m_recommenderSchemaNameHasBeenSet; }
  template <typename RecommenderSchemaNameT = Aws::String>
  void SetRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    m_recommenderSchemaNameHasBeenSet = true;
    m_recommenderSchemaName = std::forward<RecommenderSchemaNameT>(value);
  }
  template <typename RecommenderSchemaNameT = Aws::String>
  GetRecommenderSchemaRequest& WithRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    SetRecommenderSchemaName(std::forward<RecommenderSchemaNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_recommenderSchemaName;
  bool m_domainNameHasBeenSet = false;
  bool m_recommenderSchemaNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
