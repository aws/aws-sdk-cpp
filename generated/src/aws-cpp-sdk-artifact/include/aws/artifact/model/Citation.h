/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Artifact {
namespace Model {

/**
 * <p>Citation information for AI-generated responses.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/Citation">AWS
 * API Reference</a></p>
 */
class Citation {
 public:
  AWS_ARTIFACT_API Citation() = default;
  AWS_ARTIFACT_API Citation(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API Citation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Label identifying the compliance source.</p>
   */
  inline const Aws::String& GetSourceLabel() const { return m_sourceLabel; }
  inline bool SourceLabelHasBeenSet() const { return m_sourceLabelHasBeenSet; }
  template <typename SourceLabelT = Aws::String>
  void SetSourceLabel(SourceLabelT&& value) {
    m_sourceLabelHasBeenSet = true;
    m_sourceLabel = std::forward<SourceLabelT>(value);
  }
  template <typename SourceLabelT = Aws::String>
  Citation& WithSourceLabel(SourceLabelT&& value) {
    SetSourceLabel(std::forward<SourceLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Content text from the compliance source.</p>
   */
  inline const Aws::String& GetSourceContent() const { return m_sourceContent; }
  inline bool SourceContentHasBeenSet() const { return m_sourceContentHasBeenSet; }
  template <typename SourceContentT = Aws::String>
  void SetSourceContent(SourceContentT&& value) {
    m_sourceContentHasBeenSet = true;
    m_sourceContent = std::forward<SourceContentT>(value);
  }
  template <typename SourceContentT = Aws::String>
  Citation& WithSourceContent(SourceContentT&& value) {
    SetSourceContent(std::forward<SourceContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Link to the compliance source.</p>
   */
  inline const Aws::String& GetSourceLink() const { return m_sourceLink; }
  inline bool SourceLinkHasBeenSet() const { return m_sourceLinkHasBeenSet; }
  template <typename SourceLinkT = Aws::String>
  void SetSourceLink(SourceLinkT&& value) {
    m_sourceLinkHasBeenSet = true;
    m_sourceLink = std::forward<SourceLinkT>(value);
  }
  template <typename SourceLinkT = Aws::String>
  Citation& WithSourceLink(SourceLinkT&& value) {
    SetSourceLink(std::forward<SourceLinkT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceLabel;

  Aws::String m_sourceContent;

  Aws::String m_sourceLink;
  bool m_sourceLabelHasBeenSet = false;
  bool m_sourceContentHasBeenSet = false;
  bool m_sourceLinkHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
