/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/CitationsConfig.h>
#include <aws/bedrock-runtime/model/SearchResultContentBlock.h>
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
namespace BedrockRuntime {
namespace Model {

/**
 * <p>A search result block that enables natural citations with proper source
 * attribution for retrieved content.</p>  <p>This field is only supported by
 * Anthropic Claude Opus 4.1, Opus 4, Sonnet 4.5, Sonnet 4, Sonnet 3.7, and 3.5
 * Haiku models.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/SearchResultBlock">AWS
 * API Reference</a></p>
 */
class SearchResultBlock {
 public:
  AWS_BEDROCKRUNTIME_API SearchResultBlock() = default;
  AWS_BEDROCKRUNTIME_API SearchResultBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API SearchResultBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source URL or identifier for the content.</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  SearchResultBlock& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive title for the search result.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  SearchResultBlock& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of search result content block.</p>
   */
  inline const Aws::Vector<SearchResultContentBlock>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Vector<SearchResultContentBlock>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Vector<SearchResultContentBlock>>
  SearchResultBlock& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  template <typename ContentT = SearchResultContentBlock>
  SearchResultBlock& AddContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content.emplace_back(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration setting for citations</p>
   */
  inline const CitationsConfig& GetCitations() const { return m_citations; }
  inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }
  template <typename CitationsT = CitationsConfig>
  void SetCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations = std::forward<CitationsT>(value);
  }
  template <typename CitationsT = CitationsConfig>
  SearchResultBlock& WithCitations(CitationsT&& value) {
    SetCitations(std::forward<CitationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_source;
  bool m_sourceHasBeenSet = false;

  Aws::String m_title;
  bool m_titleHasBeenSet = false;

  Aws::Vector<SearchResultContentBlock> m_content;
  bool m_contentHasBeenSet = false;

  CitationsConfig m_citations;
  bool m_citationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
