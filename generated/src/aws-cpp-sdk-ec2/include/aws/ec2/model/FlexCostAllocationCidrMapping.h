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
 * <p>Maps a CIDR range to a label for cost allocation reporting.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FlexCostAllocationCidrMapping">AWS
 * API Reference</a></p>
 */
class FlexCostAllocationCidrMapping {
 public:
  AWS_EC2_API FlexCostAllocationCidrMapping() = default;
  AWS_EC2_API FlexCostAllocationCidrMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API FlexCostAllocationCidrMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The CIDR range. This parameter is required.</p>
   */
  inline const Aws::String& GetCidrRange() const { return m_cidrRange; }
  inline bool CidrRangeHasBeenSet() const { return m_cidrRangeHasBeenSet; }
  template <typename CidrRangeT = Aws::String>
  void SetCidrRange(CidrRangeT&& value) {
    m_cidrRangeHasBeenSet = true;
    m_cidrRange = std::forward<CidrRangeT>(value);
  }
  template <typename CidrRangeT = Aws::String>
  FlexCostAllocationCidrMapping& WithCidrRange(CidrRangeT&& value) {
    SetCidrRange(std::forward<CidrRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The label to assign to the CIDR range. The label can be up to 64 characters
   * long. It can contain letters, numbers, hyphens (<code>-</code>), and underscores
   * (<code>_</code>), and must start with a letter or a number. This parameter is
   * required.</p>
   */
  inline const Aws::String& GetCidrLabel() const { return m_cidrLabel; }
  inline bool CidrLabelHasBeenSet() const { return m_cidrLabelHasBeenSet; }
  template <typename CidrLabelT = Aws::String>
  void SetCidrLabel(CidrLabelT&& value) {
    m_cidrLabelHasBeenSet = true;
    m_cidrLabel = std::forward<CidrLabelT>(value);
  }
  template <typename CidrLabelT = Aws::String>
  FlexCostAllocationCidrMapping& WithCidrLabel(CidrLabelT&& value) {
    SetCidrLabel(std::forward<CidrLabelT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cidrRange;

  Aws::String m_cidrLabel;
  bool m_cidrRangeHasBeenSet = false;
  bool m_cidrLabelHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
