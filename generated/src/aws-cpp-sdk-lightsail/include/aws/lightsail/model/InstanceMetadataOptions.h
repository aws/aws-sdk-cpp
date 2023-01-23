/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceMetadataState.h>
#include <aws/lightsail/model/HttpTokens.h>
#include <aws/lightsail/model/HttpEndpoint.h>
#include <aws/lightsail/model/HttpProtocolIpv6.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>The metadata options for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceMetadataOptions">AWS
   * API Reference</a></p>
   */
  class InstanceMetadataOptions
  {
  public:
    AWS_LIGHTSAIL_API InstanceMetadataOptions();
    AWS_LIGHTSAIL_API InstanceMetadataOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceMetadataOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the metadata option changes.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>pending</code> - The metadata options are
     * being updated. The instance is not yet ready to process metadata traffic with
     * the new selection.</p> </li> <li> <p> <code>applied</code> - The metadata
     * options have been successfully applied to the instance.</p> </li> </ul>
     */
    inline const InstanceMetadataState& GetState() const{ return m_state; }

    /**
     * <p>The state of the metadata option changes.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>pending</code> - The metadata options are
     * being updated. The instance is not yet ready to process metadata traffic with
     * the new selection.</p> </li> <li> <p> <code>applied</code> - The metadata
     * options have been successfully applied to the instance.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the metadata option changes.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>pending</code> - The metadata options are
     * being updated. The instance is not yet ready to process metadata traffic with
     * the new selection.</p> </li> <li> <p> <code>applied</code> - The metadata
     * options have been successfully applied to the instance.</p> </li> </ul>
     */
    inline void SetState(const InstanceMetadataState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the metadata option changes.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>pending</code> - The metadata options are
     * being updated. The instance is not yet ready to process metadata traffic with
     * the new selection.</p> </li> <li> <p> <code>applied</code> - The metadata
     * options have been successfully applied to the instance.</p> </li> </ul>
     */
    inline void SetState(InstanceMetadataState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the metadata option changes.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>pending</code> - The metadata options are
     * being updated. The instance is not yet ready to process metadata traffic with
     * the new selection.</p> </li> <li> <p> <code>applied</code> - The metadata
     * options have been successfully applied to the instance.</p> </li> </ul>
     */
    inline InstanceMetadataOptions& WithState(const InstanceMetadataState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the metadata option changes.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>pending</code> - The metadata options are
     * being updated. The instance is not yet ready to process metadata traffic with
     * the new selection.</p> </li> <li> <p> <code>applied</code> - The metadata
     * options have been successfully applied to the instance.</p> </li> </ul>
     */
    inline InstanceMetadataOptions& WithState(InstanceMetadataState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose whether to retrieve instance
     * metadata with a signed token header on your request. If you retrieve the IAM
     * role credentials without a token, the version 1.0 role credentials are returned.
     * If you retrieve the IAM role credentials by using a valid signed token, the
     * version 2.0 role credentials are returned.</p> <p>If the state is
     * <code>required</code>, you must send a signed token header with all instance
     * metadata retrieval requests. In this state, retrieving the IAM role credential
     * always returns the version 2.0 credentials. The version 1.0 credentials are not
     * available.</p>  <p>Not all instance blueprints in Lightsail support
     * version 2.0 credentials. Use the <code>MetadataNoToken</code> instance metric to
     * track the number of calls to the instance metadata service that are using
     * version 1.0 credentials. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-health-metrics">Viewing
     * instance metrics in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
     * Guide</i>.</p> 
     */
    inline const HttpTokens& GetHttpTokens() const{ return m_httpTokens; }

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose whether to retrieve instance
     * metadata with a signed token header on your request. If you retrieve the IAM
     * role credentials without a token, the version 1.0 role credentials are returned.
     * If you retrieve the IAM role credentials by using a valid signed token, the
     * version 2.0 role credentials are returned.</p> <p>If the state is
     * <code>required</code>, you must send a signed token header with all instance
     * metadata retrieval requests. In this state, retrieving the IAM role credential
     * always returns the version 2.0 credentials. The version 1.0 credentials are not
     * available.</p>  <p>Not all instance blueprints in Lightsail support
     * version 2.0 credentials. Use the <code>MetadataNoToken</code> instance metric to
     * track the number of calls to the instance metadata service that are using
     * version 1.0 credentials. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-health-metrics">Viewing
     * instance metrics in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
     * Guide</i>.</p> 
     */
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose whether to retrieve instance
     * metadata with a signed token header on your request. If you retrieve the IAM
     * role credentials without a token, the version 1.0 role credentials are returned.
     * If you retrieve the IAM role credentials by using a valid signed token, the
     * version 2.0 role credentials are returned.</p> <p>If the state is
     * <code>required</code>, you must send a signed token header with all instance
     * metadata retrieval requests. In this state, retrieving the IAM role credential
     * always returns the version 2.0 credentials. The version 1.0 credentials are not
     * available.</p>  <p>Not all instance blueprints in Lightsail support
     * version 2.0 credentials. Use the <code>MetadataNoToken</code> instance metric to
     * track the number of calls to the instance metadata service that are using
     * version 1.0 credentials. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-health-metrics">Viewing
     * instance metrics in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
     * Guide</i>.</p> 
     */
    inline void SetHttpTokens(const HttpTokens& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose whether to retrieve instance
     * metadata with a signed token header on your request. If you retrieve the IAM
     * role credentials without a token, the version 1.0 role credentials are returned.
     * If you retrieve the IAM role credentials by using a valid signed token, the
     * version 2.0 role credentials are returned.</p> <p>If the state is
     * <code>required</code>, you must send a signed token header with all instance
     * metadata retrieval requests. In this state, retrieving the IAM role credential
     * always returns the version 2.0 credentials. The version 1.0 credentials are not
     * available.</p>  <p>Not all instance blueprints in Lightsail support
     * version 2.0 credentials. Use the <code>MetadataNoToken</code> instance metric to
     * track the number of calls to the instance metadata service that are using
     * version 1.0 credentials. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-health-metrics">Viewing
     * instance metrics in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
     * Guide</i>.</p> 
     */
    inline void SetHttpTokens(HttpTokens&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose whether to retrieve instance
     * metadata with a signed token header on your request. If you retrieve the IAM
     * role credentials without a token, the version 1.0 role credentials are returned.
     * If you retrieve the IAM role credentials by using a valid signed token, the
     * version 2.0 role credentials are returned.</p> <p>If the state is
     * <code>required</code>, you must send a signed token header with all instance
     * metadata retrieval requests. In this state, retrieving the IAM role credential
     * always returns the version 2.0 credentials. The version 1.0 credentials are not
     * available.</p>  <p>Not all instance blueprints in Lightsail support
     * version 2.0 credentials. Use the <code>MetadataNoToken</code> instance metric to
     * track the number of calls to the instance metadata service that are using
     * version 1.0 credentials. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-health-metrics">Viewing
     * instance metrics in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
     * Guide</i>.</p> 
     */
    inline InstanceMetadataOptions& WithHttpTokens(const HttpTokens& value) { SetHttpTokens(value); return *this;}

    /**
     * <p>The state of token usage for your instance metadata requests.</p> <p>If the
     * state is <code>optional</code>, you can choose whether to retrieve instance
     * metadata with a signed token header on your request. If you retrieve the IAM
     * role credentials without a token, the version 1.0 role credentials are returned.
     * If you retrieve the IAM role credentials by using a valid signed token, the
     * version 2.0 role credentials are returned.</p> <p>If the state is
     * <code>required</code>, you must send a signed token header with all instance
     * metadata retrieval requests. In this state, retrieving the IAM role credential
     * always returns the version 2.0 credentials. The version 1.0 credentials are not
     * available.</p>  <p>Not all instance blueprints in Lightsail support
     * version 2.0 credentials. Use the <code>MetadataNoToken</code> instance metric to
     * track the number of calls to the instance metadata service that are using
     * version 1.0 credentials. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-health-metrics">Viewing
     * instance metrics in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
     * Guide</i>.</p> 
     */
    inline InstanceMetadataOptions& WithHttpTokens(HttpTokens&& value) { SetHttpTokens(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline const HttpEndpoint& GetHttpEndpoint() const{ return m_httpEndpoint; }

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
    inline void SetHttpEndpoint(const HttpEndpoint& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline void SetHttpEndpoint(HttpEndpoint&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline InstanceMetadataOptions& WithHttpEndpoint(const HttpEndpoint& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>Indicates whether the HTTP metadata endpoint on your instances is enabled or
     * disabled.</p> <p>If the value is <code>disabled</code>, you cannot access your
     * instance metadata.</p>
     */
    inline InstanceMetadataOptions& WithHttpEndpoint(HttpEndpoint&& value) { SetHttpEndpoint(std::move(value)); return *this;}


    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. A
     * larger number means that the instance metadata requests can travel farther.</p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. A
     * larger number means that the instance metadata requests can travel farther.</p>
     */
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. A
     * larger number means that the instance metadata requests can travel farther.</p>
     */
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. A
     * larger number means that the instance metadata requests can travel farther.</p>
     */
    inline InstanceMetadataOptions& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline const HttpProtocolIpv6& GetHttpProtocolIpv6() const{ return m_httpProtocolIpv6; }

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline void SetHttpProtocolIpv6(const HttpProtocolIpv6& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = value; }

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline void SetHttpProtocolIpv6(HttpProtocolIpv6&& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = std::move(value); }

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline InstanceMetadataOptions& WithHttpProtocolIpv6(const HttpProtocolIpv6& value) { SetHttpProtocolIpv6(value); return *this;}

    /**
     * <p>Indicates whether the IPv6 endpoint for the instance metadata service is
     * enabled or disabled.</p>
     */
    inline InstanceMetadataOptions& WithHttpProtocolIpv6(HttpProtocolIpv6&& value) { SetHttpProtocolIpv6(std::move(value)); return *this;}

  private:

    InstanceMetadataState m_state;
    bool m_stateHasBeenSet = false;

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
