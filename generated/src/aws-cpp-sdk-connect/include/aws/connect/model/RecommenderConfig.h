/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Configuration for the recommender used to generate personalized
 * recommendations included in an outbound web notification.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RecommenderConfig">AWS
 * API Reference</a></p>
 */
class RecommenderConfig {
 public:
  AWS_CONNECT_API RecommenderConfig() = default;
  AWS_CONNECT_API RecommenderConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API RecommenderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Amazon Personalize domain that hosts the recommender.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  RecommenderConfig& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommender used to generate the recommendations.</p>
   */
  inline const Aws::String& GetRecommenderName() const { return m_recommenderName; }
  inline bool RecommenderNameHasBeenSet() const { return m_recommenderNameHasBeenSet; }
  template <typename RecommenderNameT = Aws::String>
  void SetRecommenderName(RecommenderNameT&& value) {
    m_recommenderNameHasBeenSet = true;
    m_recommenderName = std::forward<RecommenderNameT>(value);
  }
  template <typename RecommenderNameT = Aws::String>
  RecommenderConfig& WithRecommenderName(RecommenderNameT&& value) {
    SetRecommenderName(std::forward<RecommenderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of contextual key-value pairs supplied to the recommender to influence
   * the recommendations returned.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = Aws::Map<Aws::String, Aws::String>>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = Aws::Map<Aws::String, Aws::String>>
  RecommenderConfig& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  template <typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
  RecommenderConfig& AddContext(ContextKeyT&& key, ContextValueT&& value) {
    m_contextHasBeenSet = true;
    m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_recommenderName;

  Aws::Map<Aws::String, Aws::String> m_context;
  bool m_domainNameHasBeenSet = false;
  bool m_recommenderNameHasBeenSet = false;
  bool m_contextHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
