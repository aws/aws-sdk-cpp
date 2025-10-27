/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

#include <utility>

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
 * <p>The logging configuration that's defined for the image. Image Builder uses
 * the defined settings to direct execution log output during image
 * creation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageLoggingConfiguration">AWS
 * API Reference</a></p>
 */
class ImageLoggingConfiguration {
 public:
  AWS_IMAGEBUILDER_API ImageLoggingConfiguration() = default;
  AWS_IMAGEBUILDER_API ImageLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API ImageLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The log group name that Image Builder uses for image creation. If not
   * specified, the log group name defaults to
   * <code>/aws/imagebuilder/image-name</code>.</p>
   */
  inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
  inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
  template <typename LogGroupNameT = Aws::String>
  void SetLogGroupName(LogGroupNameT&& value) {
    m_logGroupNameHasBeenSet = true;
    m_logGroupName = std::forward<LogGroupNameT>(value);
  }
  template <typename LogGroupNameT = Aws::String>
  ImageLoggingConfiguration& WithLogGroupName(LogGroupNameT&& value) {
    SetLogGroupName(std::forward<LogGroupNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupName;
  bool m_logGroupNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
