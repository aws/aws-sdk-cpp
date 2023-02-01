/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/HttpTokens.h>
#include <aws/lightsail/model/HttpEndpoint.h>
#include <aws/lightsail/model/HttpProtocolIpv6.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class UpdateInstanceMetadataOptionsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateInstanceMetadataOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstanceMetadataOptions"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the instance for which to update metadata parameters.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the instance for which to update metadata parameters.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the instance for which to update metadata parameters.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the instance for which to update metadata parameters.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the instance for which to update metadata parameters.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the instance for which to update metadata parameters.</p>
     */
    inline UpdateInstanceMetadataOptionsRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the instance for which to update metadata parameters.</p>
     */
    inline UpdateInstanceMetadataOptionsRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance for which to update metadata parameters.</p>
     */
    inline UpdateInstanceMetadataOptionsRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose whether to retrieve instance metadata with a signed token header on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials by
     * using a valid signed token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a signed token header
     * with all instance metadata retrieval requests. In this state, retrieving the IAM
     * role credential always returns the version 2.0 credentials. The version 1.0
     * credentials are not available.</p>
     */
    inline const HttpTokens& GetHttpTokens() const{ return m_httpTokens; }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose whether to retrieve instance metadata with a signed token header on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials by
     * using a valid signed token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a signed token header
     * with all instance metadata retrieval requests. In this state, retrieving the IAM
     * role credential always returns the version 2.0 credentials. The version 1.0
     * credentials are not available.</p>
     */
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose whether to retrieve instance metadata with a signed token header on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials by
     * using a valid signed token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a signed token header
     * with all instance metadata retrieval requests. In this state, retrieving the IAM
     * role credential always returns the version 2.0 credentials. The version 1.0
     * credentials are not available.</p>
     */
    inline void SetHttpTokens(const HttpTokens& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose whether to retrieve instance metadata with a signed token header on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials by
     * using a valid signed token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a signed token header
     * with all instance metadata retrieval requests. In this state, retrieving the IAM
     * role credential always returns the version 2.0 credentials. The version 1.0
     * credentials are not available.</p>
     */
    inline void SetHttpTokens(HttpTokens&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose whether to retrieve instance metadata with a signed token header on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials by
     * using a valid signed token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a signed token header
     * with all instance metadata retrieval requests. In this state, retrieving the IAM
     * role credential always returns the version 2.0 credentials. The version 1.0
     * credentials are not available.</p>
     */
    inline UpdateInstanceMetadataOptionsRequest& WithHttpTokens(const HttpTokens& value) { SetHttpTokens(value); return *this;}

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose whether to retrieve instance metadata with a signed token header on your
     * request. If you retrieve the IAM role credentials without a token, the version
     * 1.0 role credentials are returned. If you retrieve the IAM role credentials by
     * using a valid signed token, the version 2.0 role credentials are returned.</p>
     * <p>If the state is <code>required</code>, you must send a signed token header
     * with all instance metadata retrieval requests. In this state, retrieving the IAM
     * role credential always returns the version 2.0 credentials. The version 1.0
     * credentials are not available.</p>
     */
    inline UpdateInstanceMetadataOptionsRequest& WithHttpTokens(HttpTokens&& value) { SetHttpTokens(std::move(value)); return *this;}


    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline const HttpEndpoint& GetHttpEndpoint() const{ return m_httpEndpoint; }

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
    inline void SetHttpEndpoint(const HttpEndpoint& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline void SetHttpEndpoint(HttpEndpoint&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline UpdateInstanceMetadataOptionsRequest& WithHttpEndpoint(const HttpEndpoint& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. If this
     * parameter is not specified, the existing state is maintained.</p> <p>If you
     * specify a value of <code>disabled</code>, you cannot access your instance
     * metadata.</p>
     */
    inline UpdateInstanceMetadataOptionsRequest& WithHttpEndpoint(HttpEndpoint&& value) { SetHttpEndpoint(std::move(value)); return *this;}


    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. A
     * larger number means that the instance metadata requests can travel farther. If
     * no parameter is specified, the existing state is maintained.</p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. A
     * larger number means that the instance metadata requests can travel farther. If
     * no parameter is specified, the existing state is maintained.</p>
     */
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. A
     * larger number means that the instance metadata requests can travel farther. If
     * no parameter is specified, the existing state is maintained.</p>
     */
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. A
     * larger number means that the instance metadata requests can travel farther. If
     * no parameter is specified, the existing state is maintained.</p>
     */
    inline UpdateInstanceMetadataOptionsRequest& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only when the HTTP metadata endpoint is enabled.</p> 
     * <p>This parameter is available only for instances in the Europe (Stockholm)
     * Amazon Web Services Region (<code>eu-north-1</code>).</p> 
     */
    inline const HttpProtocolIpv6& GetHttpProtocolIpv6() const{ return m_httpProtocolIpv6; }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only when the HTTP metadata endpoint is enabled.</p> 
     * <p>This parameter is available only for instances in the Europe (Stockholm)
     * Amazon Web Services Region (<code>eu-north-1</code>).</p> 
     */
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only when the HTTP metadata endpoint is enabled.</p> 
     * <p>This parameter is available only for instances in the Europe (Stockholm)
     * Amazon Web Services Region (<code>eu-north-1</code>).</p> 
     */
    inline void SetHttpProtocolIpv6(const HttpProtocolIpv6& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = value; }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only when the HTTP metadata endpoint is enabled.</p> 
     * <p>This parameter is available only for instances in the Europe (Stockholm)
     * Amazon Web Services Region (<code>eu-north-1</code>).</p> 
     */
    inline void SetHttpProtocolIpv6(HttpProtocolIpv6&& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = std::move(value); }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only when the HTTP metadata endpoint is enabled.</p> 
     * <p>This parameter is available only for instances in the Europe (Stockholm)
     * Amazon Web Services Region (<code>eu-north-1</code>).</p> 
     */
    inline UpdateInstanceMetadataOptionsRequest& WithHttpProtocolIpv6(const HttpProtocolIpv6& value) { SetHttpProtocolIpv6(value); return *this;}

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. This
     * setting applies only when the HTTP metadata endpoint is enabled.</p> 
     * <p>This parameter is available only for instances in the Europe (Stockholm)
     * Amazon Web Services Region (<code>eu-north-1</code>).</p> 
     */
    inline UpdateInstanceMetadataOptionsRequest& WithHttpProtocolIpv6(HttpProtocolIpv6&& value) { SetHttpProtocolIpv6(std::move(value)); return *this;}

  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    HttpTokens m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    HttpEndpoint m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    HttpProtocolIpv6 m_httpProtocolIpv6;
    bool m_httpProtocolIpv6HasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
