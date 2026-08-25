/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ReservedCapacityFallbackMarketType.h>

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
 * <p>Describes the fallback behavior for an EC2 Fleet that uses reserved capacity
 * when the reserved capacity is not enough to meet the target capacity. If you
 * don't specify fallback options, EC2 Fleet does not fall back to any other market
 * type after the specified reservation types are exhausted.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedCapacityFallbackOptions">AWS
 * API Reference</a></p>
 */
class ReservedCapacityFallbackOptions {
 public:
  AWS_EC2_API ReservedCapacityFallbackOptions() = default;
  AWS_EC2_API ReservedCapacityFallbackOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ReservedCapacityFallbackOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The instance purchasing options to fall back to when the reserved capacity is
   * not enough to meet the target capacity. The only supported value is
   * <code>on-demand</code>, which launches On-Demand Instances to fulfill the
   * remaining target capacity.</p>
   */
  inline const Aws::Vector<ReservedCapacityFallbackMarketType>& GetMarketTypes() const { return m_marketTypes; }
  inline bool MarketTypesHasBeenSet() const { return m_marketTypesHasBeenSet; }
  template <typename MarketTypesT = Aws::Vector<ReservedCapacityFallbackMarketType>>
  void SetMarketTypes(MarketTypesT&& value) {
    m_marketTypesHasBeenSet = true;
    m_marketTypes = std::forward<MarketTypesT>(value);
  }
  template <typename MarketTypesT = Aws::Vector<ReservedCapacityFallbackMarketType>>
  ReservedCapacityFallbackOptions& WithMarketTypes(MarketTypesT&& value) {
    SetMarketTypes(std::forward<MarketTypesT>(value));
    return *this;
  }
  inline ReservedCapacityFallbackOptions& AddMarketTypes(ReservedCapacityFallbackMarketType value) {
    m_marketTypesHasBeenSet = true;
    m_marketTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ReservedCapacityFallbackMarketType> m_marketTypes;
  bool m_marketTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
