/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/InstanceMetadataHttpTokensState.h>
#include <aws/autoscaling/model/InstanceMetadataEndpointState.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>The metadata options for the instances. For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html#launch-configurations-imds">Configuring
   * the Instance Metadata Options</a> in the <i>Amazon EC2 Auto Scaling User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceMetadataOptions">AWS
   * API Reference</a></p>
   */
  class InstanceMetadataOptions
  {
  public:
    AWS_AUTOSCALING_API InstanceMetadataOptions();
    AWS_AUTOSCALING_API InstanceMetadataOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API InstanceMetadataOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a signed token header on
     * your request. If you retrieve the IAM role credentials without a token, the
     * version 1.0 role credentials are returned. If you retrieve the IAM role
     * credentials using a valid signed token, the version 2.0 role credentials are
     * returned.</p> <p>If the state is <code>required</code>, you must send a signed
     * token header with any instance metadata retrieval requests. In this state,
     * retrieving the IAM role credentials always returns the version 2.0 credentials;
     * the version 1.0 credentials are not available.</p>
     */
    inline const InstanceMetadataHttpTokensState& GetHttpTokens() const{ return m_httpTokens; }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a signed token header on
     * your request. If you retrieve the IAM role credentials without a token, the
     * version 1.0 role credentials are returned. If you retrieve the IAM role
     * credentials using a valid signed token, the version 2.0 role credentials are
     * returned.</p> <p>If the state is <code>required</code>, you must send a signed
     * token header with any instance metadata retrieval requests. In this state,
     * retrieving the IAM role credentials always returns the version 2.0 credentials;
     * the version 1.0 credentials are not available.</p>
     */
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a signed token header on
     * your request. If you retrieve the IAM role credentials without a token, the
     * version 1.0 role credentials are returned. If you retrieve the IAM role
     * credentials using a valid signed token, the version 2.0 role credentials are
     * returned.</p> <p>If the state is <code>required</code>, you must send a signed
     * token header with any instance metadata retrieval requests. In this state,
     * retrieving the IAM role credentials always returns the version 2.0 credentials;
     * the version 1.0 credentials are not available.</p>
     */
    inline void SetHttpTokens(const InstanceMetadataHttpTokensState& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a signed token header on
     * your request. If you retrieve the IAM role credentials without a token, the
     * version 1.0 role credentials are returned. If you retrieve the IAM role
     * credentials using a valid signed token, the version 2.0 role credentials are
     * returned.</p> <p>If the state is <code>required</code>, you must send a signed
     * token header with any instance metadata retrieval requests. In this state,
     * retrieving the IAM role credentials always returns the version 2.0 credentials;
     * the version 1.0 credentials are not available.</p>
     */
    inline void SetHttpTokens(InstanceMetadataHttpTokensState&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a signed token header on
     * your request. If you retrieve the IAM role credentials without a token, the
     * version 1.0 role credentials are returned. If you retrieve the IAM role
     * credentials using a valid signed token, the version 2.0 role credentials are
     * returned.</p> <p>If the state is <code>required</code>, you must send a signed
     * token header with any instance metadata retrieval requests. In this state,
     * retrieving the IAM role credentials always returns the version 2.0 credentials;
     * the version 1.0 credentials are not available.</p>
     */
    inline InstanceMetadataOptions& WithHttpTokens(const InstanceMetadataHttpTokensState& value) { SetHttpTokens(value); return *this;}

    /**
     * <p>The state of token usage for your instance metadata requests. If the
     * parameter is not specified in the request, the default state is
     * <code>optional</code>.</p> <p>If the state is <code>optional</code>, you can
     * choose to retrieve instance metadata with or without a signed token header on
     * your request. If you retrieve the IAM role credentials without a token, the
     * version 1.0 role credentials are returned. If you retrieve the IAM role
     * credentials using a valid signed token, the version 2.0 role credentials are
     * returned.</p> <p>If the state is <code>required</code>, you must send a signed
     * token header with any instance metadata retrieval requests. In this state,
     * retrieving the IAM role credentials always returns the version 2.0 credentials;
     * the version 1.0 credentials are not available.</p>
     */
    inline InstanceMetadataOptions& WithHttpTokens(InstanceMetadataHttpTokensState&& value) { SetHttpTokens(std::move(value)); return *this;}


    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel.</p>
     * <p>Default: 1</p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel.</p>
     * <p>Default: 1</p>
     */
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel.</p>
     * <p>Default: 1</p>
     */
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel.</p>
     * <p>Default: 1</p>
     */
    inline InstanceMetadataOptions& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline const InstanceMetadataEndpointState& GetHttpEndpoint() const{ return m_httpEndpoint; }

    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }

    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline void SetHttpEndpoint(const InstanceMetadataEndpointState& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline void SetHttpEndpoint(InstanceMetadataEndpointState&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline InstanceMetadataOptions& WithHttpEndpoint(const InstanceMetadataEndpointState& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline InstanceMetadataOptions& WithHttpEndpoint(InstanceMetadataEndpointState&& value) { SetHttpEndpoint(std::move(value)); return *this;}

  private:

    InstanceMetadataHttpTokensState m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    InstanceMetadataEndpointState m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
