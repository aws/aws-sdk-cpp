/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class CreateRecommenderFilterRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API CreateRecommenderFilterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRecommenderFilter"; }

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
  CreateRecommenderFilterRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommender filter. The name must be unique within the
   * domain.</p>
   */
  inline const Aws::String& GetRecommenderFilterName() const { return m_recommenderFilterName; }
  inline bool RecommenderFilterNameHasBeenSet() const { return m_recommenderFilterNameHasBeenSet; }
  template <typename RecommenderFilterNameT = Aws::String>
  void SetRecommenderFilterName(RecommenderFilterNameT&& value) {
    m_recommenderFilterNameHasBeenSet = true;
    m_recommenderFilterName = std::forward<RecommenderFilterNameT>(value);
  }
  template <typename RecommenderFilterNameT = Aws::String>
  CreateRecommenderFilterRequest& WithRecommenderFilterName(RecommenderFilterNameT&& value) {
    SetRecommenderFilterName(std::forward<RecommenderFilterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter expression that defines which items to include or exclude from
   * recommendations.</p>
   */
  inline const Aws::String& GetRecommenderFilterExpression() const { return m_recommenderFilterExpression; }
  inline bool RecommenderFilterExpressionHasBeenSet() const { return m_recommenderFilterExpressionHasBeenSet; }
  template <typename RecommenderFilterExpressionT = Aws::String>
  void SetRecommenderFilterExpression(RecommenderFilterExpressionT&& value) {
    m_recommenderFilterExpressionHasBeenSet = true;
    m_recommenderFilterExpression = std::forward<RecommenderFilterExpressionT>(value);
  }
  template <typename RecommenderFilterExpressionT = Aws::String>
  CreateRecommenderFilterRequest& WithRecommenderFilterExpression(RecommenderFilterExpressionT&& value) {
    SetRecommenderFilterExpression(std::forward<RecommenderFilterExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommender schema to use for this recommender filter. If not
   * specified, the default schema is used.</p>
   */
  inline const Aws::String& GetRecommenderSchemaName() const { return m_recommenderSchemaName; }
  inline bool RecommenderSchemaNameHasBeenSet() const { return m_recommenderSchemaNameHasBeenSet; }
  template <typename RecommenderSchemaNameT = Aws::String>
  void SetRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    m_recommenderSchemaNameHasBeenSet = true;
    m_recommenderSchemaName = std::forward<RecommenderSchemaNameT>(value);
  }
  template <typename RecommenderSchemaNameT = Aws::String>
  CreateRecommenderFilterRequest& WithRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    SetRecommenderSchemaName(std::forward<RecommenderSchemaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the recommender filter.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateRecommenderFilterRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateRecommenderFilterRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateRecommenderFilterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_recommenderFilterName;

  Aws::String m_recommenderFilterExpression;

  Aws::String m_recommenderSchemaName;

  Aws::String m_description;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_domainNameHasBeenSet = false;
  bool m_recommenderFilterNameHasBeenSet = false;
  bool m_recommenderFilterExpressionHasBeenSet = false;
  bool m_recommenderSchemaNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
