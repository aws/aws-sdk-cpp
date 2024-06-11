﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/LaunchTemplateHttpTokensState.h>
#include <aws/ec2/model/LaunchTemplateInstanceMetadataEndpointState.h>
#include <aws/ec2/model/LaunchTemplateInstanceMetadataProtocolIpv6.h>
#include <aws/ec2/model/LaunchTemplateInstanceMetadataTagsState.h>
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
   * <p>The metadata options for the instance. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
   * metadata and user data</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateInstanceMetadataOptionsRequest">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateInstanceMetadataOptionsRequest
  {
  public:
    AWS_EC2_API LaunchTemplateInstanceMetadataOptionsRequest();
    AWS_EC2_API LaunchTemplateInstanceMetadataOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateInstanceMetadataOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>Default: If the value of <code>ImdsSupport</code> for the Amazon Machine
     * Image (AMI) for your instance is <code>v2.0</code>, the default is
     * <code>required</code>.</p>
     */
    inline const LaunchTemplateHttpTokensState& GetHttpTokens() const{ return m_httpTokens; }
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }
    inline void SetHttpTokens(const LaunchTemplateHttpTokensState& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }
    inline void SetHttpTokens(LaunchTemplateHttpTokensState&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }
    inline LaunchTemplateInstanceMetadataOptionsRequest& WithHttpTokens(const LaunchTemplateHttpTokensState& value) { SetHttpTokens(value); return *this;}
    inline LaunchTemplateInstanceMetadataOptionsRequest& WithHttpTokens(LaunchTemplateHttpTokensState&& value) { SetHttpTokens(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel.</p>
     * <p>Default: <code>1</code> </p> <p>Possible values: Integers from 1 to 64</p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }
    inline LaunchTemplateInstanceMetadataOptionsRequest& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If the
     * parameter is not specified, the default state is <code>enabled</code>.</p>
     *  <p>If you specify a value of <code>disabled</code>, you will not be able
     * to access your instance metadata. </p> 
     */
    inline const LaunchTemplateInstanceMetadataEndpointState& GetHttpEndpoint() const{ return m_httpEndpoint; }
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }
    inline void SetHttpEndpoint(const LaunchTemplateInstanceMetadataEndpointState& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }
    inline void SetHttpEndpoint(LaunchTemplateInstanceMetadataEndpointState&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }
    inline LaunchTemplateInstanceMetadataOptionsRequest& WithHttpEndpoint(const LaunchTemplateInstanceMetadataEndpointState& value) { SetHttpEndpoint(value); return *this;}
    inline LaunchTemplateInstanceMetadataOptionsRequest& WithHttpEndpoint(LaunchTemplateInstanceMetadataEndpointState&& value) { SetHttpEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service.</p>
     * <p>Default: <code>disabled</code> </p>
     */
    inline const LaunchTemplateInstanceMetadataProtocolIpv6& GetHttpProtocolIpv6() const{ return m_httpProtocolIpv6; }
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }
    inline void SetHttpProtocolIpv6(const LaunchTemplateInstanceMetadataProtocolIpv6& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = value; }
    inline void SetHttpProtocolIpv6(LaunchTemplateInstanceMetadataProtocolIpv6&& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = std::move(value); }
    inline LaunchTemplateInstanceMetadataOptionsRequest& WithHttpProtocolIpv6(const LaunchTemplateInstanceMetadataProtocolIpv6& value) { SetHttpProtocolIpv6(value); return *this;}
    inline LaunchTemplateInstanceMetadataOptionsRequest& WithHttpProtocolIpv6(LaunchTemplateInstanceMetadataProtocolIpv6&& value) { SetHttpProtocolIpv6(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>enabled</code> to allow access to instance tags from the
     * instance metadata. Set to <code>disabled</code> to turn off access to instance
     * tags from the instance metadata. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p> <p>Default:
     * <code>disabled</code> </p>
     */
    inline const LaunchTemplateInstanceMetadataTagsState& GetInstanceMetadataTags() const{ return m_instanceMetadataTags; }
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }
    inline void SetInstanceMetadataTags(const LaunchTemplateInstanceMetadataTagsState& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = value; }
    inline void SetInstanceMetadataTags(LaunchTemplateInstanceMetadataTagsState&& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = std::move(value); }
    inline LaunchTemplateInstanceMetadataOptionsRequest& WithInstanceMetadataTags(const LaunchTemplateInstanceMetadataTagsState& value) { SetInstanceMetadataTags(value); return *this;}
    inline LaunchTemplateInstanceMetadataOptionsRequest& WithInstanceMetadataTags(LaunchTemplateInstanceMetadataTagsState&& value) { SetInstanceMetadataTags(std::move(value)); return *this;}
    ///@}
  private:

    LaunchTemplateHttpTokensState m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    LaunchTemplateInstanceMetadataEndpointState m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    LaunchTemplateInstanceMetadataProtocolIpv6 m_httpProtocolIpv6;
    bool m_httpProtocolIpv6HasBeenSet = false;

    LaunchTemplateInstanceMetadataTagsState m_instanceMetadataTags;
    bool m_instanceMetadataTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
