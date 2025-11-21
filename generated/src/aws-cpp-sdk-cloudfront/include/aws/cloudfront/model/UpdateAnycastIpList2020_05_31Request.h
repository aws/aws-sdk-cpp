/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/IpAddressType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudFront {
namespace Model {

/**
 */
class UpdateAnycastIpList2020_05_31Request : public CloudFrontRequest {
 public:
  AWS_CLOUDFRONT_API UpdateAnycastIpList2020_05_31Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAnycastIpList"; }

  AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

  AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Anycast static IP list.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateAnycastIpList2020_05_31Request& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for the Anycast static IP list. You can specify one of
   * the following options:</p> <ul> <li> <p> <code>ipv4</code> only</p> </li> <li>
   * <p> <code>ipv6</code> only</p> </li> <li> <p> <code>dualstack</code> - Allocate
   * a list of both IPv4 and IPv6 addresses</p> </li> </ul>
   */
  inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(IpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline UpdateAnycastIpList2020_05_31Request& WithIpAddressType(IpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current version (ETag value) of the Anycast static IP list that you are
   * updating.</p>
   */
  inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
  inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
  template <typename IfMatchT = Aws::String>
  void SetIfMatch(IfMatchT&& value) {
    m_ifMatchHasBeenSet = true;
    m_ifMatch = std::forward<IfMatchT>(value);
  }
  template <typename IfMatchT = Aws::String>
  UpdateAnycastIpList2020_05_31Request& WithIfMatch(IfMatchT&& value) {
    SetIfMatch(std::forward<IfMatchT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
  bool m_ipAddressTypeHasBeenSet = false;

  Aws::String m_ifMatch;
  bool m_ifMatchHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
