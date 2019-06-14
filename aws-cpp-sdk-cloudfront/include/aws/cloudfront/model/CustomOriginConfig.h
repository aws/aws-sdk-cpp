/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginProtocolPolicy.h>
#include <aws/cloudfront/model/OriginSslProtocols.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A custom origin or an Amazon S3 bucket configured as a website
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CustomOriginConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CustomOriginConfig
  {
  public:
    CustomOriginConfig();
    CustomOriginConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomOriginConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The HTTP port the custom origin listens on.</p>
     */
    inline int GetHTTPPort() const{ return m_hTTPPort; }

    /**
     * <p>The HTTP port the custom origin listens on.</p>
     */
    inline bool HTTPPortHasBeenSet() const { return m_hTTPPortHasBeenSet; }

    /**
     * <p>The HTTP port the custom origin listens on.</p>
     */
    inline void SetHTTPPort(int value) { m_hTTPPortHasBeenSet = true; m_hTTPPort = value; }

    /**
     * <p>The HTTP port the custom origin listens on.</p>
     */
    inline CustomOriginConfig& WithHTTPPort(int value) { SetHTTPPort(value); return *this;}


    /**
     * <p>The HTTPS port the custom origin listens on.</p>
     */
    inline int GetHTTPSPort() const{ return m_hTTPSPort; }

    /**
     * <p>The HTTPS port the custom origin listens on.</p>
     */
    inline bool HTTPSPortHasBeenSet() const { return m_hTTPSPortHasBeenSet; }

    /**
     * <p>The HTTPS port the custom origin listens on.</p>
     */
    inline void SetHTTPSPort(int value) { m_hTTPSPortHasBeenSet = true; m_hTTPSPort = value; }

    /**
     * <p>The HTTPS port the custom origin listens on.</p>
     */
    inline CustomOriginConfig& WithHTTPSPort(int value) { SetHTTPSPort(value); return *this;}


    /**
     * <p>The origin protocol policy to apply to your origin.</p>
     */
    inline const OriginProtocolPolicy& GetOriginProtocolPolicy() const{ return m_originProtocolPolicy; }

    /**
     * <p>The origin protocol policy to apply to your origin.</p>
     */
    inline bool OriginProtocolPolicyHasBeenSet() const { return m_originProtocolPolicyHasBeenSet; }

    /**
     * <p>The origin protocol policy to apply to your origin.</p>
     */
    inline void SetOriginProtocolPolicy(const OriginProtocolPolicy& value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = value; }

    /**
     * <p>The origin protocol policy to apply to your origin.</p>
     */
    inline void SetOriginProtocolPolicy(OriginProtocolPolicy&& value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = std::move(value); }

    /**
     * <p>The origin protocol policy to apply to your origin.</p>
     */
    inline CustomOriginConfig& WithOriginProtocolPolicy(const OriginProtocolPolicy& value) { SetOriginProtocolPolicy(value); return *this;}

    /**
     * <p>The origin protocol policy to apply to your origin.</p>
     */
    inline CustomOriginConfig& WithOriginProtocolPolicy(OriginProtocolPolicy&& value) { SetOriginProtocolPolicy(std::move(value)); return *this;}


    /**
     * <p>The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.</p>
     */
    inline const OriginSslProtocols& GetOriginSslProtocols() const{ return m_originSslProtocols; }

    /**
     * <p>The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.</p>
     */
    inline bool OriginSslProtocolsHasBeenSet() const { return m_originSslProtocolsHasBeenSet; }

    /**
     * <p>The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.</p>
     */
    inline void SetOriginSslProtocols(const OriginSslProtocols& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = value; }

    /**
     * <p>The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.</p>
     */
    inline void SetOriginSslProtocols(OriginSslProtocols&& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = std::move(value); }

    /**
     * <p>The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.</p>
     */
    inline CustomOriginConfig& WithOriginSslProtocols(const OriginSslProtocols& value) { SetOriginSslProtocols(value); return *this;}

    /**
     * <p>The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.</p>
     */
    inline CustomOriginConfig& WithOriginSslProtocols(OriginSslProtocols&& value) { SetOriginSslProtocols(std::move(value)); return *this;}


    /**
     * <p>You can create a custom origin read timeout. All timeout units are in
     * seconds. The default origin read timeout is 30 seconds, but you can configure
     * custom timeout lengths using the CloudFront API. The minimum timeout length is 4
     * seconds; the maximum is 60 seconds.</p> <p>If you need to increase the maximum
     * time limit, contact the <a
     * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>.</p>
     */
    inline int GetOriginReadTimeout() const{ return m_originReadTimeout; }

    /**
     * <p>You can create a custom origin read timeout. All timeout units are in
     * seconds. The default origin read timeout is 30 seconds, but you can configure
     * custom timeout lengths using the CloudFront API. The minimum timeout length is 4
     * seconds; the maximum is 60 seconds.</p> <p>If you need to increase the maximum
     * time limit, contact the <a
     * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>.</p>
     */
    inline bool OriginReadTimeoutHasBeenSet() const { return m_originReadTimeoutHasBeenSet; }

    /**
     * <p>You can create a custom origin read timeout. All timeout units are in
     * seconds. The default origin read timeout is 30 seconds, but you can configure
     * custom timeout lengths using the CloudFront API. The minimum timeout length is 4
     * seconds; the maximum is 60 seconds.</p> <p>If you need to increase the maximum
     * time limit, contact the <a
     * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>.</p>
     */
    inline void SetOriginReadTimeout(int value) { m_originReadTimeoutHasBeenSet = true; m_originReadTimeout = value; }

    /**
     * <p>You can create a custom origin read timeout. All timeout units are in
     * seconds. The default origin read timeout is 30 seconds, but you can configure
     * custom timeout lengths using the CloudFront API. The minimum timeout length is 4
     * seconds; the maximum is 60 seconds.</p> <p>If you need to increase the maximum
     * time limit, contact the <a
     * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>.</p>
     */
    inline CustomOriginConfig& WithOriginReadTimeout(int value) { SetOriginReadTimeout(value); return *this;}


    /**
     * <p>You can create a custom keep-alive timeout. All timeout units are in seconds.
     * The default keep-alive timeout is 5 seconds, but you can configure custom
     * timeout lengths using the CloudFront API. The minimum timeout length is 1
     * second; the maximum is 60 seconds.</p> <p>If you need to increase the maximum
     * time limit, contact the <a
     * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>.</p>
     */
    inline int GetOriginKeepaliveTimeout() const{ return m_originKeepaliveTimeout; }

    /**
     * <p>You can create a custom keep-alive timeout. All timeout units are in seconds.
     * The default keep-alive timeout is 5 seconds, but you can configure custom
     * timeout lengths using the CloudFront API. The minimum timeout length is 1
     * second; the maximum is 60 seconds.</p> <p>If you need to increase the maximum
     * time limit, contact the <a
     * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>.</p>
     */
    inline bool OriginKeepaliveTimeoutHasBeenSet() const { return m_originKeepaliveTimeoutHasBeenSet; }

    /**
     * <p>You can create a custom keep-alive timeout. All timeout units are in seconds.
     * The default keep-alive timeout is 5 seconds, but you can configure custom
     * timeout lengths using the CloudFront API. The minimum timeout length is 1
     * second; the maximum is 60 seconds.</p> <p>If you need to increase the maximum
     * time limit, contact the <a
     * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>.</p>
     */
    inline void SetOriginKeepaliveTimeout(int value) { m_originKeepaliveTimeoutHasBeenSet = true; m_originKeepaliveTimeout = value; }

    /**
     * <p>You can create a custom keep-alive timeout. All timeout units are in seconds.
     * The default keep-alive timeout is 5 seconds, but you can configure custom
     * timeout lengths using the CloudFront API. The minimum timeout length is 1
     * second; the maximum is 60 seconds.</p> <p>If you need to increase the maximum
     * time limit, contact the <a
     * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>.</p>
     */
    inline CustomOriginConfig& WithOriginKeepaliveTimeout(int value) { SetOriginKeepaliveTimeout(value); return *this;}

  private:

    int m_hTTPPort;
    bool m_hTTPPortHasBeenSet;

    int m_hTTPSPort;
    bool m_hTTPSPortHasBeenSet;

    OriginProtocolPolicy m_originProtocolPolicy;
    bool m_originProtocolPolicyHasBeenSet;

    OriginSslProtocols m_originSslProtocols;
    bool m_originSslProtocolsHasBeenSet;

    int m_originReadTimeout;
    bool m_originReadTimeoutHasBeenSet;

    int m_originKeepaliveTimeout;
    bool m_originKeepaliveTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
