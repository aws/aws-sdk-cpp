/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovmsRequest.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

/**
 */
class GetMicrovmImageVersionRequest : public LambdaMicrovmsRequest {
 public:
  AWS_LAMBDAMICROVMS_API GetMicrovmImageVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetMicrovmImageVersion"; }

  AWS_LAMBDAMICROVMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier (ARN or ID) of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageIdentifier() const { return m_imageIdentifier; }
  inline bool ImageIdentifierHasBeenSet() const { return m_imageIdentifierHasBeenSet; }
  template <typename ImageIdentifierT = Aws::String>
  void SetImageIdentifier(ImageIdentifierT&& value) {
    m_imageIdentifierHasBeenSet = true;
    m_imageIdentifier = std::forward<ImageIdentifierT>(value);
  }
  template <typename ImageIdentifierT = Aws::String>
  GetMicrovmImageVersionRequest& WithImageIdentifier(ImageIdentifierT&& value) {
    SetImageIdentifier(std::forward<ImageIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the MicroVM image to retrieve.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  GetMicrovmImageVersionRequest& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageIdentifier;

  Aws::String m_imageVersion;
  bool m_imageIdentifierHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
