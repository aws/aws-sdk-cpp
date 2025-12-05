/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/IpAddressType.h>
#include <aws/cloudfront/model/IpamCidrConfig.h>
#include <aws/cloudfront/model/Tags.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CloudFront {
namespace Model {

/**
 */
class CreateAnycastIpList2020_05_31Request : public CloudFrontRequest {
 public:
  AWS_CLOUDFRONT_API CreateAnycastIpList2020_05_31Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAnycastIpList"; }

  AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Name of the Anycast static IP list.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAnycastIpList2020_05_31Request& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of static IP addresses that are allocated to the Anycast static IP
   * list. Valid values: 21 or 3.</p>
   */
  inline int GetIpCount() const { return m_ipCount; }
  inline bool IpCountHasBeenSet() const { return m_ipCountHasBeenSet; }
  inline void SetIpCount(int value) {
    m_ipCountHasBeenSet = true;
    m_ipCount = value;
  }
  inline CreateAnycastIpList2020_05_31Request& WithIpCount(int value) {
    SetIpCount(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Tags& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Tags>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Tags>
  CreateAnycastIpList2020_05_31Request& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for the Anycast static IP list. You can specify one of
   * the following options:</p> <ul> <li> <p> <code>ipv4</code> only</p> </li> <li>
   * <p> <code>ipv6</code> only </p> </li> <li> <p> <code>dualstack</code> - Allocate
   * a list of both IPv4 and IPv6 addresses</p> </li> </ul>
   */
  inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(IpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline CreateAnycastIpList2020_05_31Request& WithIpAddressType(IpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of IPAM CIDR configurations that specify the IP address ranges and
   * IPAM pool settings for creating the Anycast static IP list. </p>
   */
  inline const Aws::Vector<IpamCidrConfig>& GetIpamCidrConfigs() const { return m_ipamCidrConfigs; }
  inline bool IpamCidrConfigsHasBeenSet() const { return m_ipamCidrConfigsHasBeenSet; }
  template <typename IpamCidrConfigsT = Aws::Vector<IpamCidrConfig>>
  void SetIpamCidrConfigs(IpamCidrConfigsT&& value) {
    m_ipamCidrConfigsHasBeenSet = true;
    m_ipamCidrConfigs = std::forward<IpamCidrConfigsT>(value);
  }
  template <typename IpamCidrConfigsT = Aws::Vector<IpamCidrConfig>>
  CreateAnycastIpList2020_05_31Request& WithIpamCidrConfigs(IpamCidrConfigsT&& value) {
    SetIpamCidrConfigs(std::forward<IpamCidrConfigsT>(value));
    return *this;
  }
  template <typename IpamCidrConfigsT = IpamCidrConfig>
  CreateAnycastIpList2020_05_31Request& AddIpamCidrConfigs(IpamCidrConfigsT&& value) {
    m_ipamCidrConfigsHasBeenSet = true;
    m_ipamCidrConfigs.emplace_back(std::forward<IpamCidrConfigsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  int m_ipCount{0};

  Tags m_tags;

  IpAddressType m_ipAddressType{IpAddressType::NOT_SET};

  Aws::Vector<IpamCidrConfig> m_ipamCidrConfigs;
  bool m_nameHasBeenSet = false;
  bool m_ipCountHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_ipAddressTypeHasBeenSet = false;
  bool m_ipamCidrConfigsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
