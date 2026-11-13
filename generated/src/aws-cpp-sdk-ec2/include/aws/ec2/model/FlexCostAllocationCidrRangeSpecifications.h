/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationCidrMapping.h>

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
 * <p>Specifies the CIDR ranges and labels to use for cost allocation when the
 * reporting granularity is <code>cidr</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FlexCostAllocationCidrRangeSpecifications">AWS
 * API Reference</a></p>
 */
class FlexCostAllocationCidrRangeSpecifications {
 public:
  AWS_EC2_API FlexCostAllocationCidrRangeSpecifications() = default;
  AWS_EC2_API FlexCostAllocationCidrRangeSpecifications(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API FlexCostAllocationCidrRangeSpecifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The type of prefixes to use. This parameter is required. Valid values are
   * <code>source-prefixes</code> and <code>destination-prefixes</code>.</p>
   */
  inline const Aws::String& GetPrefixesType() const { return m_prefixesType; }
  inline bool PrefixesTypeHasBeenSet() const { return m_prefixesTypeHasBeenSet; }
  template <typename PrefixesTypeT = Aws::String>
  void SetPrefixesType(PrefixesTypeT&& value) {
    m_prefixesTypeHasBeenSet = true;
    m_prefixesType = std::forward<PrefixesTypeT>(value);
  }
  template <typename PrefixesTypeT = Aws::String>
  FlexCostAllocationCidrRangeSpecifications& WithPrefixesType(PrefixesTypeT&& value) {
    SetPrefixesType(std::forward<PrefixesTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CIDR range to label mappings. You can specify from 1 to 100 mappings.
   * This parameter is required.</p>
   */
  inline const Aws::Vector<FlexCostAllocationCidrMapping>& GetPrefixes() const { return m_prefixes; }
  inline bool PrefixesHasBeenSet() const { return m_prefixesHasBeenSet; }
  template <typename PrefixesT = Aws::Vector<FlexCostAllocationCidrMapping>>
  void SetPrefixes(PrefixesT&& value) {
    m_prefixesHasBeenSet = true;
    m_prefixes = std::forward<PrefixesT>(value);
  }
  template <typename PrefixesT = Aws::Vector<FlexCostAllocationCidrMapping>>
  FlexCostAllocationCidrRangeSpecifications& WithPrefixes(PrefixesT&& value) {
    SetPrefixes(std::forward<PrefixesT>(value));
    return *this;
  }
  template <typename PrefixesT = FlexCostAllocationCidrMapping>
  FlexCostAllocationCidrRangeSpecifications& AddPrefixes(PrefixesT&& value) {
    m_prefixesHasBeenSet = true;
    m_prefixes.emplace_back(std::forward<PrefixesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_prefixesType;

  Aws::Vector<FlexCostAllocationCidrMapping> m_prefixes;
  bool m_prefixesTypeHasBeenSet = false;
  bool m_prefixesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
