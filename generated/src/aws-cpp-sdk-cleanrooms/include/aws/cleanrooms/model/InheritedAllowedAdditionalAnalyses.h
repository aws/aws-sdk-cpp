/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/InheritedAllowedAdditionalAnalysesSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains the inherited allowed additional analyses constraint and its sources
 * from parent tables.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/InheritedAllowedAdditionalAnalyses">AWS
 * API Reference</a></p>
 */
class InheritedAllowedAdditionalAnalyses {
 public:
  AWS_CLEANROOMS_API InheritedAllowedAdditionalAnalyses() = default;
  AWS_CLEANROOMS_API InheritedAllowedAdditionalAnalyses(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API InheritedAllowedAdditionalAnalyses& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The effective list of allowed additional analyses inherited from parent
   * tables.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::Vector<Aws::String>>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::Vector<Aws::String>>
  InheritedAllowedAdditionalAnalyses& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  template <typename ValueT = Aws::String>
  InheritedAllowedAdditionalAnalyses& AddValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value.emplace_back(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of parent tables that contribute to this inherited constraint.</p>
   */
  inline const Aws::Vector<InheritedAllowedAdditionalAnalysesSource>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<InheritedAllowedAdditionalAnalysesSource>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<InheritedAllowedAdditionalAnalysesSource>>
  InheritedAllowedAdditionalAnalyses& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  template <typename SourcesT = InheritedAllowedAdditionalAnalysesSource>
  InheritedAllowedAdditionalAnalyses& AddSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources.emplace_back(std::forward<SourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_value;

  Aws::Vector<InheritedAllowedAdditionalAnalysesSource> m_sources;
  bool m_valueHasBeenSet = false;
  bool m_sourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
