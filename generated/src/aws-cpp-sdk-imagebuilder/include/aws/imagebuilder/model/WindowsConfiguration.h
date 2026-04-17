/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>Windows-specific configuration settings for an ISO import, including the
 * edition to install from a multi-edition Windows ISO file.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/WindowsConfiguration">AWS
 * API Reference</a></p>
 */
class WindowsConfiguration {
 public:
  AWS_IMAGEBUILDER_API WindowsConfiguration() = default;
  AWS_IMAGEBUILDER_API WindowsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API WindowsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The 1-based index that specifies which Windows edition to install from a
   * multi-edition Windows ISO file. A Windows ISO can contain a <code>.wim</code>
   * file with multiple image indexes, each representing a different edition.</p>
   */
  inline long long GetImageIndex() const { return m_imageIndex; }
  inline bool ImageIndexHasBeenSet() const { return m_imageIndexHasBeenSet; }
  inline void SetImageIndex(long long value) {
    m_imageIndexHasBeenSet = true;
    m_imageIndex = value;
  }
  inline WindowsConfiguration& WithImageIndex(long long value) {
    SetImageIndex(value);
    return *this;
  }
  ///@}
 private:
  long long m_imageIndex{0};
  bool m_imageIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
