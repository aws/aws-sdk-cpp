/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class DetachImageWatermarkRequest : public EC2Request {
 public:
  AWS_EC2_API DetachImageWatermarkRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DetachImageWatermark"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the AMI.</p>
   */
  inline const Aws::String& GetImageId() const { return m_imageId; }
  inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
  template <typename ImageIdT = Aws::String>
  void SetImageId(ImageIdT&& value) {
    m_imageIdHasBeenSet = true;
    m_imageId = std::forward<ImageIdT>(value);
  }
  template <typename ImageIdT = Aws::String>
  DetachImageWatermarkRequest& WithImageId(ImageIdT&& value) {
    SetImageId(std::forward<ImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The watermark key to remove, in <code>accountId:watermarkName</code> format
   * (for example, <code>123456789012:approvedAmi</code>).</p>
   */
  inline const Aws::String& GetWatermarkKey() const { return m_watermarkKey; }
  inline bool WatermarkKeyHasBeenSet() const { return m_watermarkKeyHasBeenSet; }
  template <typename WatermarkKeyT = Aws::String>
  void SetWatermarkKey(WatermarkKeyT&& value) {
    m_watermarkKeyHasBeenSet = true;
    m_watermarkKey = std::forward<WatermarkKeyT>(value);
  }
  template <typename WatermarkKeyT = Aws::String>
  DetachImageWatermarkRequest& WithWatermarkKey(WatermarkKeyT&& value) {
    SetWatermarkKey(std::forward<WatermarkKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DetachImageWatermarkRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageId;

  Aws::String m_watermarkKey;

  bool m_dryRun{false};
  bool m_imageIdHasBeenSet = false;
  bool m_watermarkKeyHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
