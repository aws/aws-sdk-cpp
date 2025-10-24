/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStreamRequest.h>
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AppStream {
namespace Model {

/**
 */
class StartSoftwareDeploymentToImageBuilderRequest : public AppStreamRequest {
 public:
  AWS_APPSTREAM_API StartSoftwareDeploymentToImageBuilderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartSoftwareDeploymentToImageBuilder"; }

  AWS_APPSTREAM_API Aws::String SerializePayload() const override;

  AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the target image builder instance.</p>
   */
  inline const Aws::String& GetImageBuilderName() const { return m_imageBuilderName; }
  inline bool ImageBuilderNameHasBeenSet() const { return m_imageBuilderNameHasBeenSet; }
  template <typename ImageBuilderNameT = Aws::String>
  void SetImageBuilderName(ImageBuilderNameT&& value) {
    m_imageBuilderNameHasBeenSet = true;
    m_imageBuilderName = std::forward<ImageBuilderNameT>(value);
  }
  template <typename ImageBuilderNameT = Aws::String>
  StartSoftwareDeploymentToImageBuilderRequest& WithImageBuilderName(ImageBuilderNameT&& value) {
    SetImageBuilderName(std::forward<ImageBuilderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to retry previously failed license included application
   * deployments.</p>
   */
  inline bool GetRetryFailedDeployments() const { return m_retryFailedDeployments; }
  inline bool RetryFailedDeploymentsHasBeenSet() const { return m_retryFailedDeploymentsHasBeenSet; }
  inline void SetRetryFailedDeployments(bool value) {
    m_retryFailedDeploymentsHasBeenSet = true;
    m_retryFailedDeployments = value;
  }
  inline StartSoftwareDeploymentToImageBuilderRequest& WithRetryFailedDeployments(bool value) {
    SetRetryFailedDeployments(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageBuilderName;
  bool m_imageBuilderNameHasBeenSet = false;

  bool m_retryFailedDeployments{false};
  bool m_retryFailedDeploymentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
