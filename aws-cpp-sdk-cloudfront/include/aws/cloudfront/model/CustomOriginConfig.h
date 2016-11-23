/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * A customer origin.
   */
  class AWS_CLOUDFRONT_API CustomOriginConfig
  {
  public:
    CustomOriginConfig();
    CustomOriginConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomOriginConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The HTTP port the custom origin listens on.
     */
    inline int GetHTTPPort() const{ return m_hTTPPort; }

    /**
     * The HTTP port the custom origin listens on.
     */
    inline void SetHTTPPort(int value) { m_hTTPPortHasBeenSet = true; m_hTTPPort = value; }

    /**
     * The HTTP port the custom origin listens on.
     */
    inline CustomOriginConfig& WithHTTPPort(int value) { SetHTTPPort(value); return *this;}

    /**
     * The HTTPS port the custom origin listens on.
     */
    inline int GetHTTPSPort() const{ return m_hTTPSPort; }

    /**
     * The HTTPS port the custom origin listens on.
     */
    inline void SetHTTPSPort(int value) { m_hTTPSPortHasBeenSet = true; m_hTTPSPort = value; }

    /**
     * The HTTPS port the custom origin listens on.
     */
    inline CustomOriginConfig& WithHTTPSPort(int value) { SetHTTPSPort(value); return *this;}

    /**
     * The origin protocol policy to apply to your origin.
     */
    inline const OriginProtocolPolicy& GetOriginProtocolPolicy() const{ return m_originProtocolPolicy; }

    /**
     * The origin protocol policy to apply to your origin.
     */
    inline void SetOriginProtocolPolicy(const OriginProtocolPolicy& value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = value; }

    /**
     * The origin protocol policy to apply to your origin.
     */
    inline void SetOriginProtocolPolicy(OriginProtocolPolicy&& value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = value; }

    /**
     * The origin protocol policy to apply to your origin.
     */
    inline CustomOriginConfig& WithOriginProtocolPolicy(const OriginProtocolPolicy& value) { SetOriginProtocolPolicy(value); return *this;}

    /**
     * The origin protocol policy to apply to your origin.
     */
    inline CustomOriginConfig& WithOriginProtocolPolicy(OriginProtocolPolicy&& value) { SetOriginProtocolPolicy(value); return *this;}

    /**
     * The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.
     */
    inline const OriginSslProtocols& GetOriginSslProtocols() const{ return m_originSslProtocols; }

    /**
     * The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.
     */
    inline void SetOriginSslProtocols(const OriginSslProtocols& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = value; }

    /**
     * The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.
     */
    inline void SetOriginSslProtocols(OriginSslProtocols&& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = value; }

    /**
     * The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.
     */
    inline CustomOriginConfig& WithOriginSslProtocols(const OriginSslProtocols& value) { SetOriginSslProtocols(value); return *this;}

    /**
     * The SSL/TLS protocols that you want CloudFront to use when communicating with
     * your origin over HTTPS.
     */
    inline CustomOriginConfig& WithOriginSslProtocols(OriginSslProtocols&& value) { SetOriginSslProtocols(value); return *this;}

  private:
    int m_hTTPPort;
    bool m_hTTPPortHasBeenSet;
    int m_hTTPSPort;
    bool m_hTTPSPortHasBeenSet;
    OriginProtocolPolicy m_originProtocolPolicy;
    bool m_originProtocolPolicyHasBeenSet;
    OriginSslProtocols m_originSslProtocols;
    bool m_originSslProtocolsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
