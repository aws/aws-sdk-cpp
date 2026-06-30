/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AdditionalAnalyses.h>
#include <aws/cleanrooms/model/InheritedAdditionalAnalysesSource.h>
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
 * <p>Contains the inherited additional analyses constraint and its sources from
 * parent tables.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/InheritedAdditionalAnalyses">AWS
 * API Reference</a></p>
 */
class InheritedAdditionalAnalyses {
 public:
  AWS_CLEANROOMS_API InheritedAdditionalAnalyses() = default;
  AWS_CLEANROOMS_API InheritedAdditionalAnalyses(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API InheritedAdditionalAnalyses& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The effective additional analyses setting inherited from parent tables.</p>
   */
  inline AdditionalAnalyses GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(AdditionalAnalyses value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline InheritedAdditionalAnalyses& WithValue(AdditionalAnalyses value) {
    SetValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of parent tables that contribute to this inherited constraint.</p>
   */
  inline const Aws::Vector<InheritedAdditionalAnalysesSource>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<InheritedAdditionalAnalysesSource>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<InheritedAdditionalAnalysesSource>>
  InheritedAdditionalAnalyses& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  template <typename SourcesT = InheritedAdditionalAnalysesSource>
  InheritedAdditionalAnalyses& AddSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources.emplace_back(std::forward<SourcesT>(value));
    return *this;
  }
  ///@}
 private:
  AdditionalAnalyses m_value{AdditionalAnalyses::NOT_SET};

  Aws::Vector<InheritedAdditionalAnalysesSource> m_sources;
  bool m_valueHasBeenSet = false;
  bool m_sourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
