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
class GetRecommenderRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API GetRecommenderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRecommender"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
  GetRecommenderRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommender.</p>
   */
  inline const Aws::String& GetRecommenderName() const { return m_recommenderName; }
  inline bool RecommenderNameHasBeenSet() const { return m_recommenderNameHasBeenSet; }
  template <typename RecommenderNameT = Aws::String>
  void SetRecommenderName(RecommenderNameT&& value) {
    m_recommenderNameHasBeenSet = true;
    m_recommenderName = std::forward<RecommenderNameT>(value);
  }
  template <typename RecommenderNameT = Aws::String>
  GetRecommenderRequest& WithRecommenderName(RecommenderNameT&& value) {
    SetRecommenderName(std::forward<RecommenderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of training metrics to retrieve for the recommender.</p>
   */
  inline int GetTrainingMetricsCount() const { return m_trainingMetricsCount; }
  inline bool TrainingMetricsCountHasBeenSet() const { return m_trainingMetricsCountHasBeenSet; }
  inline void SetTrainingMetricsCount(int value) {
    m_trainingMetricsCountHasBeenSet = true;
    m_trainingMetricsCount = value;
  }
  inline GetRecommenderRequest& WithTrainingMetricsCount(int value) {
    SetTrainingMetricsCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;
  bool m_domainNameHasBeenSet = false;

  Aws::String m_recommenderName;
  bool m_recommenderNameHasBeenSet = false;

  int m_trainingMetricsCount{0};
  bool m_trainingMetricsCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
