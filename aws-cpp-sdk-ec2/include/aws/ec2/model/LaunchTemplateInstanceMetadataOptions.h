/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/LaunchTemplateInstanceMetadataOptionsState.h>
#include <aws/ec2/model/LaunchTemplateHttpTokensState.h>
#include <aws/ec2/model/LaunchTemplateInstanceMetadataEndpointState.h>
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
   * Metadata and User Data</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateInstanceMetadataOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateInstanceMetadataOptions
  {
  public:
    LaunchTemplateInstanceMetadataOptions();
    LaunchTemplateInstanceMetadataOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateInstanceMetadataOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline const LaunchTemplateInstanceMetadataOptionsState& GetState() const{ return m_state; }

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
    inline void SetState(const LaunchTemplateInstanceMetadataOptionsState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline void SetState(LaunchTemplateInstanceMetadataOptionsState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline LaunchTemplateInstanceMetadataOptions& WithState(const LaunchTemplateInstanceMetadataOptionsState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the metadata option changes.</p> <p> <code>pending</code> - The
     * metadata options are being updated and the instance is not ready to process
     * metadata traffic with the new selection.</p> <p> <code>applied</code> - The
     * metadata options have been successfully applied on the instance.</p>
     */
    inline LaunchTemplateInstanceMetadataOptions& WithState(LaunchTemplateInstanceMetadataOptionsState&& value) { SetState(std::move(value)); return *this;}


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
    inline const LaunchTemplateHttpTokensState& GetHttpTokens() const{ return m_httpTokens; }

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
    inline void SetHttpTokens(const LaunchTemplateHttpTokensState& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

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
    inline void SetHttpTokens(LaunchTemplateHttpTokensState&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

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
    inline LaunchTemplateInstanceMetadataOptions& WithHttpTokens(const LaunchTemplateHttpTokensState& value) { SetHttpTokens(value); return *this;}

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
    inline LaunchTemplateInstanceMetadataOptions& WithHttpTokens(LaunchTemplateHttpTokensState&& value) { SetHttpTokens(std::move(value)); return *this;}


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
    inline LaunchTemplateInstanceMetadataOptions& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline const LaunchTemplateInstanceMetadataEndpointState& GetHttpEndpoint() const{ return m_httpEndpoint; }

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
    inline void SetHttpEndpoint(const LaunchTemplateInstanceMetadataEndpointState& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline void SetHttpEndpoint(LaunchTemplateInstanceMetadataEndpointState&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline LaunchTemplateInstanceMetadataOptions& WithHttpEndpoint(const LaunchTemplateInstanceMetadataEndpointState& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>This parameter enables or disables the HTTP metadata endpoint on your
     * instances. If the parameter is not specified, the default state is
     * <code>enabled</code>.</p>  <p>If you specify a value of
     * <code>disabled</code>, you will not be able to access your instance metadata.
     * </p> 
     */
    inline LaunchTemplateInstanceMetadataOptions& WithHttpEndpoint(LaunchTemplateInstanceMetadataEndpointState&& value) { SetHttpEndpoint(std::move(value)); return *this;}

  private:

    LaunchTemplateInstanceMetadataOptionsState m_state;
    bool m_stateHasBeenSet;

    LaunchTemplateHttpTokensState m_httpTokens;
    bool m_httpTokensHasBeenSet;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet;

    LaunchTemplateInstanceMetadataEndpointState m_httpEndpoint;
    bool m_httpEndpointHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
