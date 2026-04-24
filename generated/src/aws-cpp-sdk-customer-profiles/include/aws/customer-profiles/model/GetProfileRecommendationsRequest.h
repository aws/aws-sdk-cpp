/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/MetadataConfig.h>
#include <aws/customer-profiles/model/RecommenderFilter.h>
#include <aws/customer-profiles/model/RecommenderPromotionalFilter.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class GetProfileRecommendationsRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API GetProfileRecommendationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetProfileRecommendations"; }

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
  GetProfileRecommendationsRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the profile for which to retrieve
   * recommendations.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  GetProfileRecommendationsRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique name of the recommender.</p>
   */
  inline const Aws::String& GetRecommenderName() const { return m_recommenderName; }
  inline bool RecommenderNameHasBeenSet() const { return m_recommenderNameHasBeenSet; }
  template <typename RecommenderNameT = Aws::String>
  void SetRecommenderName(RecommenderNameT&& value) {
    m_recommenderNameHasBeenSet = true;
    m_recommenderName = std::forward<RecommenderNameT>(value);
  }
  template <typename RecommenderNameT = Aws::String>
  GetProfileRecommendationsRequest& WithRecommenderName(RecommenderNameT&& value) {
    SetRecommenderName(std::forward<RecommenderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contextual metadata used to provide dynamic runtime information to tailor
   * recommendations.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = Aws::Map<Aws::String, Aws::String>>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = Aws::Map<Aws::String, Aws::String>>
  GetProfileRecommendationsRequest& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  template <typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
  GetProfileRecommendationsRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
    m_contextHasBeenSet = true;
    m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of filters to apply to the returned recommendations. Filters define
   * criteria for including or excluding items from the recommendation results.</p>
   */
  inline const Aws::Vector<RecommenderFilter>& GetRecommenderFilters() const { return m_recommenderFilters; }
  inline bool RecommenderFiltersHasBeenSet() const { return m_recommenderFiltersHasBeenSet; }
  template <typename RecommenderFiltersT = Aws::Vector<RecommenderFilter>>
  void SetRecommenderFilters(RecommenderFiltersT&& value) {
    m_recommenderFiltersHasBeenSet = true;
    m_recommenderFilters = std::forward<RecommenderFiltersT>(value);
  }
  template <typename RecommenderFiltersT = Aws::Vector<RecommenderFilter>>
  GetProfileRecommendationsRequest& WithRecommenderFilters(RecommenderFiltersT&& value) {
    SetRecommenderFilters(std::forward<RecommenderFiltersT>(value));
    return *this;
  }
  template <typename RecommenderFiltersT = RecommenderFilter>
  GetProfileRecommendationsRequest& AddRecommenderFilters(RecommenderFiltersT&& value) {
    m_recommenderFiltersHasBeenSet = true;
    m_recommenderFilters.emplace_back(std::forward<RecommenderFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of promotional filters to apply to the recommendations. Promotional
   * filters allow you to promote specific items within a configurable subset of
   * recommendation results.</p>
   */
  inline const Aws::Vector<RecommenderPromotionalFilter>& GetRecommenderPromotionalFilters() const {
    return m_recommenderPromotionalFilters;
  }
  inline bool RecommenderPromotionalFiltersHasBeenSet() const { return m_recommenderPromotionalFiltersHasBeenSet; }
  template <typename RecommenderPromotionalFiltersT = Aws::Vector<RecommenderPromotionalFilter>>
  void SetRecommenderPromotionalFilters(RecommenderPromotionalFiltersT&& value) {
    m_recommenderPromotionalFiltersHasBeenSet = true;
    m_recommenderPromotionalFilters = std::forward<RecommenderPromotionalFiltersT>(value);
  }
  template <typename RecommenderPromotionalFiltersT = Aws::Vector<RecommenderPromotionalFilter>>
  GetProfileRecommendationsRequest& WithRecommenderPromotionalFilters(RecommenderPromotionalFiltersT&& value) {
    SetRecommenderPromotionalFilters(std::forward<RecommenderPromotionalFiltersT>(value));
    return *this;
  }
  template <typename RecommenderPromotionalFiltersT = RecommenderPromotionalFilter>
  GetProfileRecommendationsRequest& AddRecommenderPromotionalFilters(RecommenderPromotionalFiltersT&& value) {
    m_recommenderPromotionalFiltersHasBeenSet = true;
    m_recommenderPromotionalFilters.emplace_back(std::forward<RecommenderPromotionalFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of item IDs to rank for the user. Use this when you want to re-rank a
   * specific set of items rather than getting recommendations from the full item
   * catalog. Required for personalized-ranking use cases.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCandidateIds() const { return m_candidateIds; }
  inline bool CandidateIdsHasBeenSet() const { return m_candidateIdsHasBeenSet; }
  template <typename CandidateIdsT = Aws::Vector<Aws::String>>
  void SetCandidateIds(CandidateIdsT&& value) {
    m_candidateIdsHasBeenSet = true;
    m_candidateIds = std::forward<CandidateIdsT>(value);
  }
  template <typename CandidateIdsT = Aws::Vector<Aws::String>>
  GetProfileRecommendationsRequest& WithCandidateIds(CandidateIdsT&& value) {
    SetCandidateIds(std::forward<CandidateIdsT>(value));
    return *this;
  }
  template <typename CandidateIdsT = Aws::String>
  GetProfileRecommendationsRequest& AddCandidateIds(CandidateIdsT&& value) {
    m_candidateIdsHasBeenSet = true;
    m_candidateIds.emplace_back(std::forward<CandidateIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of recommendations to return. The default value is 10.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetProfileRecommendationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for including item metadata in the recommendation response. Use
   * this to specify which metadata columns to return alongside recommended
   * items.</p>
   */
  inline const MetadataConfig& GetMetadataConfig() const { return m_metadataConfig; }
  inline bool MetadataConfigHasBeenSet() const { return m_metadataConfigHasBeenSet; }
  template <typename MetadataConfigT = MetadataConfig>
  void SetMetadataConfig(MetadataConfigT&& value) {
    m_metadataConfigHasBeenSet = true;
    m_metadataConfig = std::forward<MetadataConfigT>(value);
  }
  template <typename MetadataConfigT = MetadataConfig>
  GetProfileRecommendationsRequest& WithMetadataConfig(MetadataConfigT&& value) {
    SetMetadataConfig(std::forward<MetadataConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_profileId;

  Aws::String m_recommenderName;

  Aws::Map<Aws::String, Aws::String> m_context;

  Aws::Vector<RecommenderFilter> m_recommenderFilters;

  Aws::Vector<RecommenderPromotionalFilter> m_recommenderPromotionalFilters;

  Aws::Vector<Aws::String> m_candidateIds;

  int m_maxResults{0};

  MetadataConfig m_metadataConfig;
  bool m_domainNameHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
  bool m_recommenderNameHasBeenSet = false;
  bool m_contextHasBeenSet = false;
  bool m_recommenderFiltersHasBeenSet = false;
  bool m_recommenderPromotionalFiltersHasBeenSet = false;
  bool m_candidateIdsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_metadataConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
