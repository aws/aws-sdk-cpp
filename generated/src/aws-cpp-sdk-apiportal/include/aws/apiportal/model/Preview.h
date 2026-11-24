/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/PortalStatusException.h>
#include <aws/apiportal/model/PreviewStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>A preview of a portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/Preview">AWS
 * API Reference</a></p>
 */
class Preview {
 public:
  AWS_APIPORTAL_API Preview() = default;
  AWS_APIPORTAL_API Preview(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Preview& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

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

  inline const PortalStatusException& GetStatusException() const { return m_statusException; }
  inline bool StatusExceptionHasBeenSet() const { return m_statusExceptionHasBeenSet; }
  template <typename StatusExceptionT = PortalStatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = PortalStatusException>
  Preview& WithStatusException(StatusExceptionT&& value) {
    SetStatusException(std::forward<StatusExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL to view the preview. Present when <code>previewStatus</code> is
   * <code>PREVIEW_READY</code>.</p>
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
 private:
  PreviewStatus m_previewStatus{PreviewStatus::NOT_SET};

  PortalStatusException m_statusException;

  Aws::String m_previewUrl;
  bool m_previewStatusHasBeenSet = false;
  bool m_statusExceptionHasBeenSet = false;
  bool m_previewUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
