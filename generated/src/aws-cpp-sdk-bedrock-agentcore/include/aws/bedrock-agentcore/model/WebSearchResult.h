/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>A web search result.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/WebSearchResult">AWS
 * API Reference</a></p>
 */
class WebSearchResult {
 public:
  AWS_BEDROCKAGENTCORE_API WebSearchResult() = default;
  AWS_BEDROCKAGENTCORE_API WebSearchResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API WebSearchResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The title of the page.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  WebSearchResult& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the page.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  WebSearchResult& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A text extract from the page.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  WebSearchResult& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the page was published. This field is absent when the publication
   * time is not known.</p>
   */
  inline const Aws::Utils::DateTime& GetPublishedAt() const { return m_publishedAt; }
  inline bool PublishedAtHasBeenSet() const { return m_publishedAtHasBeenSet; }
  template <typename PublishedAtT = Aws::Utils::DateTime>
  void SetPublishedAt(PublishedAtT&& value) {
    m_publishedAtHasBeenSet = true;
    m_publishedAt = std::forward<PublishedAtT>(value);
  }
  template <typename PublishedAtT = Aws::Utils::DateTime>
  WebSearchResult& WithPublishedAt(PublishedAtT&& value) {
    SetPublishedAt(std::forward<PublishedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_url;

  Aws::String m_text;

  Aws::Utils::DateTime m_publishedAt{};
  bool m_titleHasBeenSet = false;
  bool m_urlHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_publishedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
