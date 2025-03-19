/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/HttpTokensState.h>
#include <aws/ec2/model/InstanceMetadataEndpointState.h>
#include <aws/ec2/model/InstanceMetadataProtocolState.h>
#include <aws/ec2/model/InstanceMetadataTagsState.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyInstanceMetadataOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstanceMetadataOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceMetadataOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ModifyInstanceMetadataOptionsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * - IMDSv2 is optional. You can choose whether to send a session token in your
     * instance metadata retrieval requests. If you retrieve IAM role credentials
     * without a session token, you receive the IMDSv1 role credentials. If you
     * retrieve IAM role credentials using a valid session token, you receive the
     * IMDSv2 role credentials.</p> </li> <li> <p> <code>required</code> - IMDSv2 is
     * required. You must send a session token in your instance metadata retrieval
     * requests. With this option, retrieving the IAM role credentials always returns
     * IMDSv2 credentials; IMDSv1 credentials are not available.</p> </li> </ul>
     * <p>Default:</p> <ul> <li> <p>If the value of <code>ImdsSupport</code> for the
     * Amazon Machine Image (AMI) for your instance is <code>v2.0</code> and the
     * account level default is set to <code>no-preference</code>, the default is
     * <code>required</code>.</p> </li> <li> <p>If the value of
     * <code>ImdsSupport</code> for the Amazon Machine Image (AMI) for your instance is
     * <code>v2.0</code>, but the account level default is set to <code>V1 or
     * V2</code>, the default is <code>optional</code>.</p> </li> </ul> <p>The default
     * value can also be affected by other combinations of parameters. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-instance-metadata-options.html#instance-metadata-options-order-of-precedence">Order
     * of precedence for instance metadata options</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline HttpTokensState GetHttpTokens() const { return m_httpTokens; }
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }
    inline void SetHttpTokens(HttpTokensState value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }
    inline ModifyInstanceMetadataOptionsRequest& WithHttpTokens(HttpTokensState value) { SetHttpTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. If no
     * parameter is specified, the existing state is maintained.</p> <p>Possible
     * values: Integers from 1 to 64</p>
     */
    inline int GetHttpPutResponseHopLimit() const { return m_httpPutResponseHopLimit; }
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }
    inline ModifyInstanceMetadataOptionsRequest& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline InstanceMetadataEndpointState GetHttpEndpoint() const { return m_httpEndpoint; }
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }
    inline void SetHttpEndpoint(InstanceMetadataEndpointState value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }
    inline ModifyInstanceMetadataOptionsRequest& WithHttpEndpoint(InstanceMetadataEndpointState value) { SetHttpEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyInstanceMetadataOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service.
     * Applies only if you enabled the HTTP metadata endpoint.</p>
     */
    inline InstanceMetadataProtocolState GetHttpProtocolIpv6() const { return m_httpProtocolIpv6; }
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }
    inline void SetHttpProtocolIpv6(InstanceMetadataProtocolState value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = value; }
    inline ModifyInstanceMetadataOptionsRequest& WithHttpProtocolIpv6(InstanceMetadataProtocolState value) { SetHttpProtocolIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>enabled</code> to allow access to instance tags from the
     * instance metadata. Set to <code>disabled</code> to turn off access to instance
     * tags from the instance metadata. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p>
     */
    inline InstanceMetadataTagsState GetInstanceMetadataTags() const { return m_instanceMetadataTags; }
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }
    inline void SetInstanceMetadataTags(InstanceMetadataTagsState value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = value; }
    inline ModifyInstanceMetadataOptionsRequest& WithInstanceMetadataTags(InstanceMetadataTagsState value) { SetInstanceMetadataTags(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    HttpTokensState m_httpTokens{HttpTokensState::NOT_SET};
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit{0};
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    InstanceMetadataEndpointState m_httpEndpoint{InstanceMetadataEndpointState::NOT_SET};
    bool m_httpEndpointHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    InstanceMetadataProtocolState m_httpProtocolIpv6{InstanceMetadataProtocolState::NOT_SET};
    bool m_httpProtocolIpv6HasBeenSet = false;

    InstanceMetadataTagsState m_instanceMetadataTags{InstanceMetadataTagsState::NOT_SET};
    bool m_instanceMetadataTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
