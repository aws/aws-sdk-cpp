/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The watermark filter criteria for an allowed image. Each entry can specify
 * one or more fields. All specified fields must match the same watermark on the
 * image.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageWatermarkFilterResponse">AWS
 * API Reference</a></p>
 */
class ImageWatermarkFilterResponse {
 public:
  AWS_EC2_API ImageWatermarkFilterResponse() = default;
  AWS_EC2_API ImageWatermarkFilterResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ImageWatermarkFilterResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The <code>accountId:name</code> of the watermark. Supports wildcards
   * (<code>*</code>, <code>?</code>).</p>
   */
  inline const Aws::String& GetWatermarkKey() const { return m_watermarkKey; }
  inline bool WatermarkKeyHasBeenSet() const { return m_watermarkKeyHasBeenSet; }
  template <typename WatermarkKeyT = Aws::String>
  void SetWatermarkKey(WatermarkKeyT&& value) {
    m_watermarkKeyHasBeenSet = true;
    m_watermarkKey = std::forward<WatermarkKeyT>(value);
  }
  template <typename WatermarkKeyT = Aws::String>
  ImageWatermarkFilterResponse& WithWatermarkKey(WatermarkKeyT&& value) {
    SetWatermarkKey(std::forward<WatermarkKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region where the watermark was originally created. Supports wildcards
   * (<code>*</code>, <code>?</code>).</p>
   */
  inline const Aws::String& GetSourceImageRegion() const { return m_sourceImageRegion; }
  inline bool SourceImageRegionHasBeenSet() const { return m_sourceImageRegionHasBeenSet; }
  template <typename SourceImageRegionT = Aws::String>
  void SetSourceImageRegion(SourceImageRegionT&& value) {
    m_sourceImageRegionHasBeenSet = true;
    m_sourceImageRegion = std::forward<SourceImageRegionT>(value);
  }
  template <typename SourceImageRegionT = Aws::String>
  ImageWatermarkFilterResponse& WithSourceImageRegion(SourceImageRegionT&& value) {
    SetSourceImageRegion(std::forward<SourceImageRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of days that have elapsed since the source image was
   * created.</p> <p>Constraints: Minimum value of 0. Maximum value of
   * 2147483647.</p>
   */
  inline int GetMaximumDaysSinceSourceImageCreated() const { return m_maximumDaysSinceSourceImageCreated; }
  inline bool MaximumDaysSinceSourceImageCreatedHasBeenSet() const { return m_maximumDaysSinceSourceImageCreatedHasBeenSet; }
  inline void SetMaximumDaysSinceSourceImageCreated(int value) {
    m_maximumDaysSinceSourceImageCreatedHasBeenSet = true;
    m_maximumDaysSinceSourceImageCreated = value;
  }
  inline ImageWatermarkFilterResponse& WithMaximumDaysSinceSourceImageCreated(int value) {
    SetMaximumDaysSinceSourceImageCreated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of days that have elapsed since the watermark was attached
   * to the image.</p> <p>Constraints: Minimum value of 0. Maximum value of
   * 2147483647.</p>
   */
  inline int GetMaximumDaysSinceWatermarkCreated() const { return m_maximumDaysSinceWatermarkCreated; }
  inline bool MaximumDaysSinceWatermarkCreatedHasBeenSet() const { return m_maximumDaysSinceWatermarkCreatedHasBeenSet; }
  inline void SetMaximumDaysSinceWatermarkCreated(int value) {
    m_maximumDaysSinceWatermarkCreatedHasBeenSet = true;
    m_maximumDaysSinceWatermarkCreated = value;
  }
  inline ImageWatermarkFilterResponse& WithMaximumDaysSinceWatermarkCreated(int value) {
    SetMaximumDaysSinceWatermarkCreated(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_watermarkKey;

  Aws::String m_sourceImageRegion;

  int m_maximumDaysSinceSourceImageCreated{0};

  int m_maximumDaysSinceWatermarkCreated{0};
  bool m_watermarkKeyHasBeenSet = false;
  bool m_sourceImageRegionHasBeenSet = false;
  bool m_maximumDaysSinceSourceImageCreatedHasBeenSet = false;
  bool m_maximumDaysSinceWatermarkCreatedHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
