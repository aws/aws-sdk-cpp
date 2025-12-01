/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderConfig.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class UpdateRecommenderRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API UpdateRecommenderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRecommender"; }

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
  UpdateRecommenderRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommender to update.</p>
   */
  inline const Aws::String& GetRecommenderName() const { return m_recommenderName; }
  inline bool RecommenderNameHasBeenSet() const { return m_recommenderNameHasBeenSet; }
  template <typename RecommenderNameT = Aws::String>
  void SetRecommenderName(RecommenderNameT&& value) {
    m_recommenderNameHasBeenSet = true;
    m_recommenderName = std::forward<RecommenderNameT>(value);
  }
  template <typename RecommenderNameT = Aws::String>
  UpdateRecommenderRequest& WithRecommenderName(RecommenderNameT&& value) {
    SetRecommenderName(std::forward<RecommenderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new description to assign to the recommender.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateRecommenderRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new configuration settings to apply to the recommender, including updated
   * parameters and settings that define its behavior.</p>
   */
  inline const RecommenderConfig& GetRecommenderConfig() const { return m_recommenderConfig; }
  inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }
  template <typename RecommenderConfigT = RecommenderConfig>
  void SetRecommenderConfig(RecommenderConfigT&& value) {
    m_recommenderConfigHasBeenSet = true;
    m_recommenderConfig = std::forward<RecommenderConfigT>(value);
  }
  template <typename RecommenderConfigT = RecommenderConfig>
  UpdateRecommenderRequest& WithRecommenderConfig(RecommenderConfigT&& value) {
    SetRecommenderConfig(std::forward<RecommenderConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;
  bool m_domainNameHasBeenSet = false;

  Aws::String m_recommenderName;
  bool m_recommenderNameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  RecommenderConfig m_recommenderConfig;
  bool m_recommenderConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
