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
    AWS_EC2_API InstanceMetadataOptionsResponse();
    AWS_EC2_API InstanceMetadataOptionsResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceMetadataOptionsResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline const InstanceMetadataOptionsState& GetState() const{ return m_state; }

    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline void SetState(const InstanceMetadataOptionsState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline void SetState(InstanceMetadataOptionsState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline InstanceMetadataOptionsResponse& WithState(const InstanceMetadataOptionsState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline InstanceMetadataOptionsResponse& WithState(InstanceMetadataOptionsState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose to retrieve instance metadata
     * with or without a session token on your request. If you retrieve the IAM role
     * credentials without a token, the version 1.0 role credentials are returned. If
     * you retrieve the IAM role credentials using a valid session token, the version
     * 2.0 role credentials are returned.</p> <p>If the state is <code>required</code>,
     * you must send a session token with any instance metadata retrieval requests. In
     * this state, retrieving the IAM role credentials always returns the version 2.0
     * credentials; the version 1.0 credentials are not available.</p> <p>Default:
     * <code>optional</code> </p>
     */
    inline const HttpTokensState& GetHttpTokens() const{ return m_httpTokens; }

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose to retrieve instance metadata
     * with or without a session token on your request. If you retrieve the IAM role
     * credentials without a token, the version 1.0 role credentials are returned. If
     * you retrieve the IAM role credentials using a valid session token, the version
     * 2.0 role credentials are returned.</p> <p>If the state is <code>required</code>,
     * you must send a session token with any instance metadata retrieval requests. In
     * this state, retrieving the IAM role credentials always returns the version 2.0
     * credentials; the version 1.0 credentials are not available.</p> <p>Default:
     * <code>optional</code> </p>
     */
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose to retrieve instance metadata
     * with or without a session token on your request. If you retrieve the IAM role
     * credentials without a token, the version 1.0 role credentials are returned. If
     * you retrieve the IAM role credentials using a valid session token, the version
     * 2.0 role credentials are returned.</p> <p>If the state is <code>required</code>,
     * you must send a session token with any instance metadata retrieval requests. In
     * this state, retrieving the IAM role credentials always returns the version 2.0
     * credentials; the version 1.0 credentials are not available.</p> <p>Default:
     * <code>optional</code> </p>
     */
    inline void SetHttpTokens(const HttpTokensState& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose to retrieve instance metadata
     * with or without a session token on your request. If you retrieve the IAM role
     * credentials without a token, the version 1.0 role credentials are returned. If
     * you retrieve the IAM role credentials using a valid session token, the version
     * 2.0 role credentials are returned.</p> <p>If the state is <code>required</code>,
     * you must send a session token with any instance metadata retrieval requests. In
     * this state, retrieving the IAM role credentials always returns the version 2.0
     * credentials; the version 1.0 credentials are not available.</p> <p>Default:
     * <code>optional</code> </p>
     */
    inline void SetHttpTokens(HttpTokensState&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose to retrieve instance metadata
     * with or without a session token on your request. If you retrieve the IAM role
     * credentials without a token, the version 1.0 role credentials are returned. If
     * you retrieve the IAM role credentials using a valid session token, the version
     * 2.0 role credentials are returned.</p> <p>If the state is <code>required</code>,
     * you must send a session token with any instance metadata retrieval requests. In
     * this state, retrieving the IAM role credentials always returns the version 2.0
     * credentials; the version 1.0 credentials are not available.</p> <p>Default:
     * <code>optional</code> </p>
     */
    inline InstanceMetadataOptionsResponse& WithHttpTokens(const HttpTokensState& value) { SetHttpTokens(value); return *this;}

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose to retrieve instance metadata
     * with or without a session token on your request. If you retrieve the IAM role
     * credentials without a token, the version 1.0 role credentials are returned. If
     * you retrieve the IAM role credentials using a valid session token, the version
     * 2.0 role credentials are returned.</p> <p>If the state is <code>required</code>,
     * you must send a session token with any instance metadata retrieval requests. In
     * this state, retrieving the IAM role credentials always returns the version 2.0
     * credentials; the version 1.0 credentials are not available.</p> <p>Default:
     * <code>optional</code> </p>
     */
    inline InstanceMetadataOptionsResponse& WithHttpTokens(HttpTokensState&& value) { SetHttpTokens(std::move(value)); return *this;}


    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel.</p>
     * <p>Default: 1</p> <p>Possible values: Integers from 1 to 64</p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel.</p>
     * <p>Default: 1</p> <p>Possible values: Integers from 1 to 64</p>
     */
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel.</p>
     * <p>Default: 1</p> <p>Possible values: Integers from 1 to 64</p>
     */
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel.</p>
     * <p>Default: 1</p> <p>Possible values: Integers from 1 to 64</p>
     */
    inline InstanceMetadataOptionsResponse& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline const InstanceMetadataEndpointState& GetHttpEndpoint() const{ return m_httpEndpoint; }

    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }

    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline void SetHttpEndpoint(const InstanceMetadataEndpointState& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline void SetHttpEndpoint(InstanceMetadataEndpointState&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline InstanceMetadataOptionsResponse& WithHttpEndpoint(const InstanceMetadataEndpointState& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline InstanceMetadataOptionsResponse& WithHttpEndpoint(InstanceMetadataEndpointState&& value) { SetHttpEndpoint(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline const InstanceMetadataProtocolState& GetHttpProtocolIpv6() const{ return m_httpProtocolIpv6; }

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline void SetHttpProtocolIpv6(const InstanceMetadataProtocolState& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = value; }

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline void SetHttpProtocolIpv6(InstanceMetadataProtocolState&& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = std::move(value); }

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline InstanceMetadataOptionsResponse& WithHttpProtocolIpv6(const InstanceMetadataProtocolState& value) { SetHttpProtocolIpv6(value); return *this;}

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline InstanceMetadataOptionsResponse& WithHttpProtocolIpv6(InstanceMetadataProtocolState&& value) { SetHttpProtocolIpv6(std::move(value)); return *this;}


    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p>
     */
    inline const InstanceMetadataTagsState& GetInstanceMetadataTags() const{ return m_instanceMetadataTags; }

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p>
     */
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p>
     */
    inline void SetInstanceMetadataTags(const InstanceMetadataTagsState& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = value; }

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p>
     */
    inline void SetInstanceMetadataTags(InstanceMetadataTagsState&& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = std::move(value); }

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p>
     */
    inline InstanceMetadataOptionsResponse& WithInstanceMetadataTags(const InstanceMetadataTagsState& value) { SetInstanceMetadataTags(value); return *this;}

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p>
     */
    inline InstanceMetadataOptionsResponse& WithInstanceMetadataTags(InstanceMetadataTagsState&& value) { SetInstanceMetadataTags(std::move(value)); return *this;}

  private:

    InstanceMetadataOptionsState m_state;
    bool m_stateHasBeenSet = false;

    HttpTokensState m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    InstanceMetadataEndpointState m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    InstanceMetadataProtocolState m_httpProtocolIpv6;
    bool m_httpProtocolIpv6HasBeenSet = false;

    InstanceMetadataTagsState m_instanceMetadataTags;
    bool m_instanceMetadataTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
