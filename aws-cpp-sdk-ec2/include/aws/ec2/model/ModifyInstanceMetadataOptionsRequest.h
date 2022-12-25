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
    AWS_EC2_API ModifyInstanceMetadataOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceMetadataOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a session token on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials
     * using a valid session token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a session token with any
     * instance metadata retrieval requests. In this state, retrieving the IAM role
     * credentials always returns the version 2.0 credentials; the version 1.0
     * credentials are not available.</p>
     */
    inline const HttpTokensState& GetHttpTokens() const{ return m_httpTokens; }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a session token on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials
     * using a valid session token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a session token with any
     * instance metadata retrieval requests. In this state, retrieving the IAM role
     * credentials always returns the version 2.0 credentials; the version 1.0
     * credentials are not available.</p>
     */
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a session token on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials
     * using a valid session token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a session token with any
     * instance metadata retrieval requests. In this state, retrieving the IAM role
     * credentials always returns the version 2.0 credentials; the version 1.0
     * credentials are not available.</p>
     */
    inline void SetHttpTokens(const HttpTokensState& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a session token on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials
     * using a valid session token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a session token with any
     * instance metadata retrieval requests. In this state, retrieving the IAM role
     * credentials always returns the version 2.0 credentials; the version 1.0
     * credentials are not available.</p>
     */
    inline void SetHttpTokens(HttpTokensState&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a session token on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials
     * using a valid session token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a session token with any
     * instance metadata retrieval requests. In this state, retrieving the IAM role
     * credentials always returns the version 2.0 credentials; the version 1.0
     * credentials are not available.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithHttpTokens(const HttpTokensState& value) { SetHttpTokens(value); return *this;}

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a session token on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials
     * using a valid session token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a session token with any
     * instance metadata retrieval requests. In this state, retrieving the IAM role
     * credentials always returns the version 2.0 credentials; the version 1.0
     * credentials are not available.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithHttpTokens(HttpTokensState&& value) { SetHttpTokens(std::move(value)); return *this;}


    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. If no
     * parameter is specified, the existing state is maintained.</p> <p>Possible
     * values: Integers from 1 to 64</p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. If no
     * parameter is specified, the existing state is maintained.</p> <p>Possible
     * values: Integers from 1 to 64</p>
     */
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. If no
     * parameter is specified, the existing state is maintained.</p> <p>Possible
     * values: Integers from 1 to 64</p>
     */
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. If no
     * parameter is specified, the existing state is maintained.</p> <p>Possible
     * values: Integers from 1 to 64</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline const InstanceMetadataEndpointState& GetHttpEndpoint() const{ return m_httpEndpoint; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline void SetHttpEndpoint(const InstanceMetadataEndpointState& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline void SetHttpEndpoint(InstanceMetadataEndpointState&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithHttpEndpoint(const InstanceMetadataEndpointState& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithHttpEndpoint(InstanceMetadataEndpointState&& value) { SetHttpEndpoint(std::move(value)); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only if you have enabled the HTTP metadata endpoint.</p>
     */
    inline const InstanceMetadataProtocolState& GetHttpProtocolIpv6() const{ return m_httpProtocolIpv6; }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only if you have enabled the HTTP metadata endpoint.</p>
     */
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only if you have enabled the HTTP metadata endpoint.</p>
     */
    inline void SetHttpProtocolIpv6(const InstanceMetadataProtocolState& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = value; }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only if you have enabled the HTTP metadata endpoint.</p>
     */
    inline void SetHttpProtocolIpv6(InstanceMetadataProtocolState&& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = std::move(value); }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only if you have enabled the HTTP metadata endpoint.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithHttpProtocolIpv6(const InstanceMetadataProtocolState& value) { SetHttpProtocolIpv6(value); return *this;}

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only if you have enabled the HTTP metadata endpoint.</p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithHttpProtocolIpv6(InstanceMetadataProtocolState&& value) { SetHttpProtocolIpv6(std::move(value)); return *this;}


    /**
     * <p>Set to <code>enabled</code> to allow access to instance tags from the
     * instance metadata. Set to <code>disabled</code> to turn off access to instance
     * tags from the instance metadata. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p> <p>Default:
     * <code>disabled</code> </p>
     */
    inline const InstanceMetadataTagsState& GetInstanceMetadataTags() const{ return m_instanceMetadataTags; }

    /**
     * <p>Set to <code>enabled</code> to allow access to instance tags from the
     * instance metadata. Set to <code>disabled</code> to turn off access to instance
     * tags from the instance metadata. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p> <p>Default:
     * <code>disabled</code> </p>
     */
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }

    /**
     * <p>Set to <code>enabled</code> to allow access to instance tags from the
     * instance metadata. Set to <code>disabled</code> to turn off access to instance
     * tags from the instance metadata. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p> <p>Default:
     * <code>disabled</code> </p>
     */
    inline void SetInstanceMetadataTags(const InstanceMetadataTagsState& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = value; }

    /**
     * <p>Set to <code>enabled</code> to allow access to instance tags from the
     * instance metadata. Set to <code>disabled</code> to turn off access to instance
     * tags from the instance metadata. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p> <p>Default:
     * <code>disabled</code> </p>
     */
    inline void SetInstanceMetadataTags(InstanceMetadataTagsState&& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = std::move(value); }

    /**
     * <p>Set to <code>enabled</code> to allow access to instance tags from the
     * instance metadata. Set to <code>disabled</code> to turn off access to instance
     * tags from the instance metadata. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p> <p>Default:
     * <code>disabled</code> </p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithInstanceMetadataTags(const InstanceMetadataTagsState& value) { SetInstanceMetadataTags(value); return *this;}

    /**
     * <p>Set to <code>enabled</code> to allow access to instance tags from the
     * instance metadata. Set to <code>disabled</code> to turn off access to instance
     * tags from the instance metadata. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a>.</p> <p>Default:
     * <code>disabled</code> </p>
     */
    inline ModifyInstanceMetadataOptionsRequest& WithInstanceMetadataTags(InstanceMetadataTagsState&& value) { SetInstanceMetadataTags(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    HttpTokensState m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    InstanceMetadataEndpointState m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    InstanceMetadataProtocolState m_httpProtocolIpv6;
    bool m_httpProtocolIpv6HasBeenSet = false;

    InstanceMetadataTagsState m_instanceMetadataTags;
    bool m_instanceMetadataTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
