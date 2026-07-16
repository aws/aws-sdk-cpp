/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RecommenderConfig.h>

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
 * <p>Optional attributes used to populate the content of an outbound web
 * notification, such as recommender configuration for personalized
 * content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContentAttributes">AWS
 * API Reference</a></p>
 */
class ContentAttributes {
 public:
  AWS_CONNECT_API ContentAttributes() = default;
  AWS_CONNECT_API ContentAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContentAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for the recommender used to generate personalized
   * recommendations for the notification content.</p>
   */
  inline const RecommenderConfig& GetRecommenderConfig() const { return m_recommenderConfig; }
  inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }
  template <typename RecommenderConfigT = RecommenderConfig>
  void SetRecommenderConfig(RecommenderConfigT&& value) {
    m_recommenderConfigHasBeenSet = true;
    m_recommenderConfig = std::forward<RecommenderConfigT>(value);
  }
  template <typename RecommenderConfigT = RecommenderConfig>
  ContentAttributes& WithRecommenderConfig(RecommenderConfigT&& value) {
    SetRecommenderConfig(std::forward<RecommenderConfigT>(value));
    return *this;
  }
  ///@}
 private:
  RecommenderConfig m_recommenderConfig;
  bool m_recommenderConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
