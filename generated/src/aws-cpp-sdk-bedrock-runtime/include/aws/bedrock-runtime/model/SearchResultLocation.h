/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>Specifies a search result location within the content array, providing
 * positioning information for cited content using search result index and block
 * positions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/SearchResultLocation">AWS
 * API Reference</a></p>
 */
class SearchResultLocation {
 public:
  AWS_BEDROCKRUNTIME_API SearchResultLocation() = default;
  AWS_BEDROCKRUNTIME_API SearchResultLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API SearchResultLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The index of the search result content block where the cited content is
   * found.</p>
   */
  inline int GetSearchResultIndex() const { return m_searchResultIndex; }
  inline bool SearchResultIndexHasBeenSet() const { return m_searchResultIndexHasBeenSet; }
  inline void SetSearchResultIndex(int value) {
    m_searchResultIndexHasBeenSet = true;
    m_searchResultIndex = value;
  }
  inline SearchResultLocation& WithSearchResultIndex(int value) {
    SetSearchResultIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The starting position in the content array where the cited content
   * begins.</p>
   */
  inline int GetStart() const { return m_start; }
  inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
  inline void SetStart(int value) {
    m_startHasBeenSet = true;
    m_start = value;
  }
  inline SearchResultLocation& WithStart(int value) {
    SetStart(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ending position in the content array where the cited content ends.</p>
   */
  inline int GetEnd() const { return m_end; }
  inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
  inline void SetEnd(int value) {
    m_endHasBeenSet = true;
    m_end = value;
  }
  inline SearchResultLocation& WithEnd(int value) {
    SetEnd(value);
    return *this;
  }
  ///@}
 private:
  int m_searchResultIndex{0};
  bool m_searchResultIndexHasBeenSet = false;

  int m_start{0};
  bool m_startHasBeenSet = false;

  int m_end{0};
  bool m_endHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
