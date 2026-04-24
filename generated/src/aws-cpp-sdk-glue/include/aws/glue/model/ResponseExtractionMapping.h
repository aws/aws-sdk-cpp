/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Configuration that defines how to extract values from HTTP response content
 * or headers for use in subsequent requests or parameter mapping.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResponseExtractionMapping">AWS
 * API Reference</a></p>
 */
class ResponseExtractionMapping {
 public:
  AWS_GLUE_API ResponseExtractionMapping() = default;
  AWS_GLUE_API ResponseExtractionMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ResponseExtractionMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A JSON path expression that specifies how to extract a value from the
   * response body content.</p>
   */
  inline const Aws::String& GetContentPath() const { return m_contentPath; }
  inline bool ContentPathHasBeenSet() const { return m_contentPathHasBeenSet; }
  template <typename ContentPathT = Aws::String>
  void SetContentPath(ContentPathT&& value) {
    m_contentPathHasBeenSet = true;
    m_contentPath = std::forward<ContentPathT>(value);
  }
  template <typename ContentPathT = Aws::String>
  ResponseExtractionMapping& WithContentPath(ContentPathT&& value) {
    SetContentPath(std::forward<ContentPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of an HTTP response header from which to extract the value.</p>
   */
  inline const Aws::String& GetHeaderKey() const { return m_headerKey; }
  inline bool HeaderKeyHasBeenSet() const { return m_headerKeyHasBeenSet; }
  template <typename HeaderKeyT = Aws::String>
  void SetHeaderKey(HeaderKeyT&& value) {
    m_headerKeyHasBeenSet = true;
    m_headerKey = std::forward<HeaderKeyT>(value);
  }
  template <typename HeaderKeyT = Aws::String>
  ResponseExtractionMapping& WithHeaderKey(HeaderKeyT&& value) {
    SetHeaderKey(std::forward<HeaderKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contentPath;

  Aws::String m_headerKey;
  bool m_contentPathHasBeenSet = false;
  bool m_headerKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
