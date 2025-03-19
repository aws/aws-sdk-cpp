/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceMetadataOptionsState.h>
#include <aws/ec2/model/HttpTokensState.h>
#include <aws/ec2/model/InstanceMetadataEndpointState.h>
#include <aws/ec2/model/InstanceMetadataProtocolState.h>
#include <aws/ec2/model/InstanceMetadataTagsState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The metadata options for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceMetadataOptionsResponse">AWS
   * API Reference</a></p>
   */
  class InstanceMetadataOptionsResponse
  {
  public:
    AWS_EC2_API InstanceMetadataOptionsResponse() = default;
    AWS_EC2_API InstanceMetadataOptionsResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceMetadataOptionsResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline InstanceMetadataOptionsState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(InstanceMetadataOptionsState value) { m_stateHasBeenSet = true; m_state = value; }
    inline InstanceMetadataOptionsResponse& WithState(InstanceMetadataOptionsState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * - IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> - IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline HttpTokensState GetHttpTokens() const { return m_httpTokens; }
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }
    inline void SetHttpTokens(HttpTokensState value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }
    inline InstanceMetadataOptionsResponse& WithHttpTokens(HttpTokensState value) { SetHttpTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of hops that the metadata token can travel.</p>
     * <p>Possible values: Integers from <code>1</code> to <code>64</code> </p>
     */
    inline int GetHttpPutResponseHopLimit() const { return m_httpPutResponseHopLimit; }
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }
    inline InstanceMetadataOptionsResponse& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline InstanceMetadataEndpointState GetHttpEndpoint() const { return m_httpEndpoint; }
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }
    inline void SetHttpEndpoint(InstanceMetadataEndpointState value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }
    inline InstanceMetadataOptionsResponse& WithHttpEndpoint(InstanceMetadataEndpointState value) { SetHttpEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p> <p>Default: <code>disabled</code> </p>
     */
    inline InstanceMetadataProtocolState GetHttpProtocolIpv6() const { return m_httpProtocolIpv6; }
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }
    inline void SetHttpProtocolIpv6(InstanceMetadataProtocolState value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = value; }
    inline InstanceMetadataOptionsResponse& WithHttpProtocolIpv6(InstanceMetadataProtocolState value) { SetHttpProtocolIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p>
     */
    inline InstanceMetadataTagsState GetInstanceMetadataTags() const { return m_instanceMetadataTags; }
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }
    inline void SetInstanceMetadataTags(InstanceMetadataTagsState value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = value; }
    inline InstanceMetadataOptionsResponse& WithInstanceMetadataTags(InstanceMetadataTagsState value) { SetInstanceMetadataTags(value); return *this;}
    ///@}
  private:

    InstanceMetadataOptionsState m_state{InstanceMetadataOptionsState::NOT_SET};
    bool m_stateHasBeenSet = false;

    HttpTokensState m_httpTokens{HttpTokensState::NOT_SET};
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit{0};
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    InstanceMetadataEndpointState m_httpEndpoint{InstanceMetadataEndpointState::NOT_SET};
    bool m_httpEndpointHasBeenSet = false;

    InstanceMetadataProtocolState m_httpProtocolIpv6{InstanceMetadataProtocolState::NOT_SET};
    bool m_httpProtocolIpv6HasBeenSet = false;

    InstanceMetadataTagsState m_instanceMetadataTags{InstanceMetadataTagsState::NOT_SET};
    bool m_instanceMetadataTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
