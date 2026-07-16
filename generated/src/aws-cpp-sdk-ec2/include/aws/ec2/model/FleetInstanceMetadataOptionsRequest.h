/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FleetHttpTokensState.h>
#include <aws/ec2/model/FleetInstanceMetadataEndpointState.h>

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
 * <p>Describes the metadata options for the instances. Supported only for fleets
 * of type <code>instant</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetInstanceMetadataOptionsRequest">AWS
 * API Reference</a></p>
 */
class FleetInstanceMetadataOptionsRequest {
 public:
  AWS_EC2_API FleetInstanceMetadataOptionsRequest() = default;
  AWS_EC2_API FleetInstanceMetadataOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API FleetInstanceMetadataOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
   * - IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
   * </li> <li> <p> <code>required</code> - IMDSv2 is required, which means that
   * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
   */
  inline FleetHttpTokensState GetHttpTokens() const { return m_httpTokens; }
  inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }
  inline void SetHttpTokens(FleetHttpTokensState value) {
    m_httpTokensHasBeenSet = true;
    m_httpTokens = value;
  }
  inline FleetInstanceMetadataOptionsRequest& WithHttpTokens(FleetHttpTokensState value) {
    SetHttpTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
   * larger the number, the further instance metadata requests can travel.</p>
   * <p>Default: <code>1</code> </p> <p>Possible values: Integers from 1 to 64</p>
   */
  inline int GetHttpPutResponseHopLimit() const { return m_httpPutResponseHopLimit; }
  inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }
  inline void SetHttpPutResponseHopLimit(int value) {
    m_httpPutResponseHopLimitHasBeenSet = true;
    m_httpPutResponseHopLimit = value;
  }
  inline FleetInstanceMetadataOptionsRequest& WithHttpPutResponseHopLimit(int value) {
    SetHttpPutResponseHopLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables or disables the HTTP metadata endpoint on your instances.</p> <ul>
   * <li> <p> <code>enabled</code> - The HTTP metadata endpoint is enabled.</p> </li>
   * <li> <p> <code>disabled</code> - The HTTP metadata endpoint is disabled.</p>
   * </li> </ul>
   */
  inline FleetInstanceMetadataEndpointState GetHttpEndpoint() const { return m_httpEndpoint; }
  inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }
  inline void SetHttpEndpoint(FleetInstanceMetadataEndpointState value) {
    m_httpEndpointHasBeenSet = true;
    m_httpEndpoint = value;
  }
  inline FleetInstanceMetadataOptionsRequest& WithHttpEndpoint(FleetInstanceMetadataEndpointState value) {
    SetHttpEndpoint(value);
    return *this;
  }
  ///@}
 private:
  FleetHttpTokensState m_httpTokens{FleetHttpTokensState::NOT_SET};

  int m_httpPutResponseHopLimit{0};

  FleetInstanceMetadataEndpointState m_httpEndpoint{FleetInstanceMetadataEndpointState::NOT_SET};
  bool m_httpTokensHasBeenSet = false;
  bool m_httpPutResponseHopLimitHasBeenSet = false;
  bool m_httpEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
