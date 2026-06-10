/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a watermark attached to an AMI.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageWatermark">AWS
 * API Reference</a></p>
 */
class ImageWatermark {
 public:
  AWS_EC2_API ImageWatermark() = default;
  AWS_EC2_API ImageWatermark(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ImageWatermark& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The watermark identifier, in <code>accountId:watermarkName</code> format (for
   * example, <code>123456789012:approvedAmi</code>). The <code>accountId</code>
   * portion is the Amazon Web Services account ID of the watermark creator. The
   * <code>watermarkName</code> portion is customer-provided.</p>
   */
  inline const Aws::String& GetWatermarkKey() const { return m_watermarkKey; }
  inline bool WatermarkKeyHasBeenSet() const { return m_watermarkKeyHasBeenSet; }
  template <typename WatermarkKeyT = Aws::String>
  void SetWatermarkKey(WatermarkKeyT&& value) {
    m_watermarkKeyHasBeenSet = true;
    m_watermarkKey = std::forward<WatermarkKeyT>(value);
  }
  template <typename WatermarkKeyT = Aws::String>
  ImageWatermark& WithWatermarkKey(WatermarkKeyT&& value) {
    SetWatermarkKey(std::forward<WatermarkKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region where the watermark was originally attached.</p>
   */
  inline const Aws::String& GetSourceImageRegion() const { return m_sourceImageRegion; }
  inline bool SourceImageRegionHasBeenSet() const { return m_sourceImageRegionHasBeenSet; }
  template <typename SourceImageRegionT = Aws::String>
  void SetSourceImageRegion(SourceImageRegionT&& value) {
    m_sourceImageRegionHasBeenSet = true;
    m_sourceImageRegion = std::forward<SourceImageRegionT>(value);
  }
  template <typename SourceImageRegionT = Aws::String>
  ImageWatermark& WithSourceImageRegion(SourceImageRegionT&& value) {
    SetSourceImageRegion(std::forward<SourceImageRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the AMI to which the watermark was originally attached.</p>
   */
  inline const Aws::String& GetSourceImageId() const { return m_sourceImageId; }
  inline bool SourceImageIdHasBeenSet() const { return m_sourceImageIdHasBeenSet; }
  template <typename SourceImageIdT = Aws::String>
  void SetSourceImageId(SourceImageIdT&& value) {
    m_sourceImageIdHasBeenSet = true;
    m_sourceImageId = std::forward<SourceImageIdT>(value);
  }
  template <typename SourceImageIdT = Aws::String>
  ImageWatermark& WithSourceImageId(SourceImageIdT&& value) {
    SetSourceImageId(std::forward<SourceImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The creation date of the source AMI, in the following format:
   * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>.<i>ssssss</i>+<i>HH</i>:<i>MM</i>.</p>
   */
  inline const Aws::Utils::DateTime& GetSourceImageCreationTime() const { return m_sourceImageCreationTime; }
  inline bool SourceImageCreationTimeHasBeenSet() const { return m_sourceImageCreationTimeHasBeenSet; }
  template <typename SourceImageCreationTimeT = Aws::Utils::DateTime>
  void SetSourceImageCreationTime(SourceImageCreationTimeT&& value) {
    m_sourceImageCreationTimeHasBeenSet = true;
    m_sourceImageCreationTime = std::forward<SourceImageCreationTimeT>(value);
  }
  template <typename SourceImageCreationTimeT = Aws::Utils::DateTime>
  ImageWatermark& WithSourceImageCreationTime(SourceImageCreationTimeT&& value) {
    SetSourceImageCreationTime(std::forward<SourceImageCreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the watermark was attached to the AMI, in the following
   * format:
   * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>.<i>ssssss</i>+<i>HH</i>:<i>MM</i>.</p>
   */
  inline const Aws::Utils::DateTime& GetWatermarkCreationTime() const { return m_watermarkCreationTime; }
  inline bool WatermarkCreationTimeHasBeenSet() const { return m_watermarkCreationTimeHasBeenSet; }
  template <typename WatermarkCreationTimeT = Aws::Utils::DateTime>
  void SetWatermarkCreationTime(WatermarkCreationTimeT&& value) {
    m_watermarkCreationTimeHasBeenSet = true;
    m_watermarkCreationTime = std::forward<WatermarkCreationTimeT>(value);
  }
  template <typename WatermarkCreationTimeT = Aws::Utils::DateTime>
  ImageWatermark& WithWatermarkCreationTime(WatermarkCreationTimeT&& value) {
    SetWatermarkCreationTime(std::forward<WatermarkCreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_watermarkKey;

  Aws::String m_sourceImageRegion;

  Aws::String m_sourceImageId;

  Aws::Utils::DateTime m_sourceImageCreationTime{};

  Aws::Utils::DateTime m_watermarkCreationTime{};
  bool m_watermarkKeyHasBeenSet = false;
  bool m_sourceImageRegionHasBeenSet = false;
  bool m_sourceImageIdHasBeenSet = false;
  bool m_sourceImageCreationTimeHasBeenSet = false;
  bool m_watermarkCreationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
