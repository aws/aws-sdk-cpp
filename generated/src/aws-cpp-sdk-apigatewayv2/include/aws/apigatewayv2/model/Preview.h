/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/PreviewStatus.h>
#include <aws/apigatewayv2/model/StatusException.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>Contains the preview status and preview URL.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/Preview">AWS
 * API Reference</a></p>
 */
class Preview {
 public:
  AWS_APIGATEWAYV2_API Preview() = default;
  AWS_APIGATEWAYV2_API Preview(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Preview& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the preview.</p>
   */
  inline PreviewStatus GetPreviewStatus() const { return m_previewStatus; }
  inline bool PreviewStatusHasBeenSet() const { return m_previewStatusHasBeenSet; }
  inline void SetPreviewStatus(PreviewStatus value) {
    m_previewStatusHasBeenSet = true;
    m_previewStatus = value;
  }
  inline Preview& WithPreviewStatus(PreviewStatus value) {
    SetPreviewStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the preview.</p>
   */
  inline const Aws::String& GetPreviewUrl() const { return m_previewUrl; }
  inline bool PreviewUrlHasBeenSet() const { return m_previewUrlHasBeenSet; }
  template <typename PreviewUrlT = Aws::String>
  void SetPreviewUrl(PreviewUrlT&& value) {
    m_previewUrlHasBeenSet = true;
    m_previewUrl = std::forward<PreviewUrlT>(value);
  }
  template <typename PreviewUrlT = Aws::String>
  Preview& WithPreviewUrl(PreviewUrlT&& value) {
    SetPreviewUrl(std::forward<PreviewUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status exception information.</p>
   */
  inline const StatusException& GetStatusException() const { return m_statusException; }
  inline bool StatusExceptionHasBeenSet() const { return m_statusExceptionHasBeenSet; }
  template <typename StatusExceptionT = StatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = StatusException>
  Preview& WithStatusException(StatusExceptionT&& value) {
    SetStatusException(std::forward<StatusExceptionT>(value));
    return *this;
  }
  ///@}
 private:
  PreviewStatus m_previewStatus{PreviewStatus::NOT_SET};
  bool m_previewStatusHasBeenSet = false;

  Aws::String m_previewUrl;
  bool m_previewUrlHasBeenSet = false;

  StatusException m_statusException;
  bool m_statusExceptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
