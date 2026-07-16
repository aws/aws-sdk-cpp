/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace Artifact {
namespace Model {

/**
 * <p>File content structure for compliance inquiry uploads.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/InquiryFileContent">AWS
 * API Reference</a></p>
 */
class InquiryFileContent {
 public:
  AWS_ARTIFACT_API InquiryFileContent() = default;
  AWS_ARTIFACT_API InquiryFileContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API InquiryFileContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of file sections/sheets to process.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFileSections() const { return m_fileSections; }
  inline bool FileSectionsHasBeenSet() const { return m_fileSectionsHasBeenSet; }
  template <typename FileSectionsT = Aws::Vector<Aws::String>>
  void SetFileSections(FileSectionsT&& value) {
    m_fileSectionsHasBeenSet = true;
    m_fileSections = std::forward<FileSectionsT>(value);
  }
  template <typename FileSectionsT = Aws::Vector<Aws::String>>
  InquiryFileContent& WithFileSections(FileSectionsT&& value) {
    SetFileSections(std::forward<FileSectionsT>(value));
    return *this;
  }
  template <typename FileSectionsT = Aws::String>
  InquiryFileContent& AddFileSections(FileSectionsT&& value) {
    m_fileSectionsHasBeenSet = true;
    m_fileSections.emplace_back(std::forward<FileSectionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Binary content of the uploaded file.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Utils::ByteBuffer>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Utils::ByteBuffer>
  InquiryFileContent& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_fileSections;

  Aws::Utils::ByteBuffer m_content{};
  bool m_fileSectionsHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
