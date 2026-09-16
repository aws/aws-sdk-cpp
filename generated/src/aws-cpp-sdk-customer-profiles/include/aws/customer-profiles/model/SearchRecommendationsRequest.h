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
#include <aws/customer-profiles/model/RecommendationDiversityConfig.h>
#include <aws/customer-profiles/model/RecommendationMetadata.h>
#include <aws/customer-profiles/model/Recommender.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class SearchRecommendationsRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API SearchRecommendationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchRecommendations"; }

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
  SearchRecommendationsRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A searchable identifier of a customer profile. You can use a predefined key,
   * such as <code>_profileId</code>, <code>_phone</code>, or <code>_email</code>, or
   * a custom-defined key.</p>
   */
  inline const Aws::String& GetKeyName() const { return m_keyName; }
  inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
  template <typename KeyNameT = Aws::String>
  void SetKeyName(KeyNameT&& value) {
    m_keyNameHasBeenSet = true;
    m_keyName = std::forward<KeyNameT>(value);
  }
  template <typename KeyNameT = Aws::String>
  SearchRecommendationsRequest& WithKeyName(KeyNameT&& value) {
    SetKeyName(std::forward<KeyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key values. Provide one value for each field of the search key.</p>
   */
  inline const Aws::Vector<Aws::String>& GetKeyValues() const { return m_keyValues; }
  inline bool KeyValuesHasBeenSet() const { return m_keyValuesHasBeenSet; }
  template <typename KeyValuesT = Aws::Vector<Aws::String>>
  void SetKeyValues(KeyValuesT&& value) {
    m_keyValuesHasBeenSet = true;
    m_keyValues = std::forward<KeyValuesT>(value);
  }
  template <typename KeyValuesT = Aws::Vector<Aws::String>>
  SearchRecommendationsRequest& WithKeyValues(KeyValuesT&& value) {
    SetKeyValues(std::forward<KeyValuesT>(value));
    return *this;
  }
  template <typename KeyValuesT = Aws::String>
  SearchRecommendationsRequest& AddKeyValues(KeyValuesT&& value) {
    m_keyValuesHasBeenSet = true;
    m_keyValues.emplace_back(std::forward<KeyValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommender used to generate the recommendations.</p>
   */
  inline const Recommender& GetRecommender() const { return m_recommender; }
  inline bool RecommenderHasBeenSet() const { return m_recommenderHasBeenSet; }
  template <typename RecommenderT = Recommender>
  void SetRecommender(RecommenderT&& value) {
    m_recommenderHasBeenSet = true;
    m_recommender = std::forward<RecommenderT>(value);
  }
  template <typename RecommenderT = Recommender>
  SearchRecommendationsRequest& WithRecommender(RecommenderT&& value) {
    SetRecommender(std::forward<RecommenderT>(value));
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
  SearchRecommendationsRequest& WithCandidateIds(CandidateIdsT&& value) {
    SetCandidateIds(std::forward<CandidateIdsT>(value));
    return *this;
  }
  template <typename CandidateIdsT = Aws::String>
  SearchRecommendationsRequest& AddCandidateIds(CandidateIdsT&& value) {
    m_candidateIdsHasBeenSet = true;
    m_candidateIds.emplace_back(std::forward<CandidateIdsT>(value));
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
  SearchRecommendationsRequest& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  template <typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
  SearchRecommendationsRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
    m_contextHasBeenSet = true;
    m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Runtime diversity configuration for this request. Enables diversity-aware
   * recommendations and optionally supplies values for placeholder-based diversity
   * caps configured on the recommender.</p>
   */
  inline const RecommendationDiversityConfig& GetDiversity() const { return m_diversity; }
  inline bool DiversityHasBeenSet() const { return m_diversityHasBeenSet; }
  template <typename DiversityT = RecommendationDiversityConfig>
  void SetDiversity(DiversityT&& value) {
    m_diversityHasBeenSet = true;
    m_diversity = std::forward<DiversityT>(value);
  }
  template <typename DiversityT = RecommendationDiversityConfig>
  SearchRecommendationsRequest& WithDiversity(DiversityT&& value) {
    SetDiversity(std::forward<DiversityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for metadata to include in recommendation responses.</p>
   */
  inline const RecommendationMetadata& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = RecommendationMetadata>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = RecommendationMetadata>
  SearchRecommendationsRequest& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of recommendations to return. The default value is 5.</p>
   */
  inline int GetMaxRecommendations() const { return m_maxRecommendations; }
  inline bool MaxRecommendationsHasBeenSet() const { return m_maxRecommendationsHasBeenSet; }
  inline void SetMaxRecommendations(int value) {
    m_maxRecommendationsHasBeenSet = true;
    m_maxRecommendations = value;
  }
  inline SearchRecommendationsRequest& WithMaxRecommendations(int value) {
    SetMaxRecommendations(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_keyName;

  Aws::Vector<Aws::String> m_keyValues;

  Recommender m_recommender;

  Aws::Vector<Aws::String> m_candidateIds;

  Aws::Map<Aws::String, Aws::String> m_context;

  RecommendationDiversityConfig m_diversity;

  RecommendationMetadata m_metadata;

  int m_maxRecommendations{0};
  bool m_domainNameHasBeenSet = false;
  bool m_keyNameHasBeenSet = false;
  bool m_keyValuesHasBeenSet = false;
  bool m_recommenderHasBeenSet = false;
  bool m_candidateIdsHasBeenSet = false;
  bool m_contextHasBeenSet = false;
  bool m_diversityHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_maxRecommendationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
