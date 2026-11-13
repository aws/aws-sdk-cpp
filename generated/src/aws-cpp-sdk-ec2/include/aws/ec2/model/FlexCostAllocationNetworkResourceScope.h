/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationNetworkResourceScopeType.h>

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
 * <p>Specifies a scope of network resources for a scope-based policy
 * association.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FlexCostAllocationNetworkResourceScope">AWS
 * API Reference</a></p>
 */
class FlexCostAllocationNetworkResourceScope {
 public:
  AWS_EC2_API FlexCostAllocationNetworkResourceScope() = default;
  AWS_EC2_API FlexCostAllocationNetworkResourceScope(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API FlexCostAllocationNetworkResourceScope& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The type of scope. This parameter is required. Valid values are
   * <code>account</code>, <code>vpc</code>, and <code>subnet</code>.</p>
   */
  inline FlexCostAllocationNetworkResourceScopeType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(FlexCostAllocationNetworkResourceScopeType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline FlexCostAllocationNetworkResourceScope& WithResourceType(FlexCostAllocationNetworkResourceScopeType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the resources owned by you that define the scope. You can specify
   * from 1 to 20 IDs. This parameter is required.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceIds() const { return m_resourceIds; }
  inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
  template <typename ResourceIdsT = Aws::Vector<Aws::String>>
  void SetResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds = std::forward<ResourceIdsT>(value);
  }
  template <typename ResourceIdsT = Aws::Vector<Aws::String>>
  FlexCostAllocationNetworkResourceScope& WithResourceIds(ResourceIdsT&& value) {
    SetResourceIds(std::forward<ResourceIdsT>(value));
    return *this;
  }
  template <typename ResourceIdsT = Aws::String>
  FlexCostAllocationNetworkResourceScope& AddResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  FlexCostAllocationNetworkResourceScopeType m_resourceType{FlexCostAllocationNetworkResourceScopeType::NOT_SET};

  Aws::Vector<Aws::String> m_resourceIds;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
