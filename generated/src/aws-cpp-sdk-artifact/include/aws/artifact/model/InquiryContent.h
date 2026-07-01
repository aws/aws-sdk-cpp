/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/InquiryFileContent.h>
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
 * <p>Content for creating a compliance inquiry - either a single query or file
 * content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/InquiryContent">AWS
 * API Reference</a></p>
 */
class InquiryContent {
 public:
  AWS_ARTIFACT_API InquiryContent() = default;
  AWS_ARTIFACT_API InquiryContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API InquiryContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Single text query for AI-generated answer.</p>
   */
  inline const Aws::String& GetQuery() const { return m_query; }
  inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
  template <typename QueryT = Aws::String>
  void SetQuery(QueryT&& value) {
    m_queryHasBeenSet = true;
    m_query = std::forward<QueryT>(value);
  }
  template <typename QueryT = Aws::String>
  InquiryContent& WithQuery(QueryT&& value) {
    SetQuery(std::forward<QueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>File content with multiple questions.</p>
   */
  inline const InquiryFileContent& GetFileContent() const { return m_fileContent; }
  inline bool FileContentHasBeenSet() const { return m_fileContentHasBeenSet; }
  template <typename FileContentT = InquiryFileContent>
  void SetFileContent(FileContentT&& value) {
    m_fileContentHasBeenSet = true;
    m_fileContent = std::forward<FileContentT>(value);
  }
  template <typename FileContentT = InquiryFileContent>
  InquiryContent& WithFileContent(FileContentT&& value) {
    SetFileContent(std::forward<FileContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_query;

  InquiryFileContent m_fileContent;
  bool m_queryHasBeenSet = false;
  bool m_fileContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
