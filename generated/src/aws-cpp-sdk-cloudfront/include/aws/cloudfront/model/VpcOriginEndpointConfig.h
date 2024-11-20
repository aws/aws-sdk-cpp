/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An Amazon CloudFront VPC origin endpoint configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/VpcOriginEndpointConfig">AWS
   * API Reference</a></p>
   */
  class VpcOriginEndpointConfig
  {
  public:
    AWS_CLOUDFRONT_API VpcOriginEndpointConfig();
    AWS_CLOUDFRONT_API VpcOriginEndpointConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API VpcOriginEndpointConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the CloudFront VPC origin endpoint configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VpcOriginEndpointConfig& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VpcOriginEndpointConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VpcOriginEndpointConfig& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the CloudFront VPC origin endpoint configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline VpcOriginEndpointConfig& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline VpcOriginEndpointConfig& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline VpcOriginEndpointConfig& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP port for the CloudFront VPC origin endpoint configuration.</p>
     */
    inline int GetHTTPPort() const{ return m_hTTPPort; }
    inline bool HTTPPortHasBeenSet() const { return m_hTTPPortHasBeenSet; }
    inline void SetHTTPPort(int value) { m_hTTPPortHasBeenSet = true; m_hTTPPort = value; }
    inline VpcOriginEndpointConfig& WithHTTPPort(int value) { SetHTTPPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTPS port of the CloudFront VPC origin endpoint configuration.</p>
     */
    inline int GetHTTPSPort() const{ return m_hTTPSPort; }
    inline bool HTTPSPortHasBeenSet() const { return m_hTTPSPortHasBeenSet; }
    inline void SetHTTPSPort(int value) { m_hTTPSPortHasBeenSet = true; m_hTTPSPort = value; }
    inline VpcOriginEndpointConfig& WithHTTPSPort(int value) { SetHTTPSPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin protocol policy for the CloudFront VPC origin endpoint
     * configuration.</p>
     */
    inline const OriginProtocolPolicy& GetOriginProtocolPolicy() const{ return m_originProtocolPolicy; }
    inline bool OriginProtocolPolicyHasBeenSet() const { return m_originProtocolPolicyHasBeenSet; }
    inline void SetOriginProtocolPolicy(const OriginProtocolPolicy& value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = value; }
    inline void SetOriginProtocolPolicy(OriginProtocolPolicy&& value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = std::move(value); }
    inline VpcOriginEndpointConfig& WithOriginProtocolPolicy(const OriginProtocolPolicy& value) { SetOriginProtocolPolicy(value); return *this;}
    inline VpcOriginEndpointConfig& WithOriginProtocolPolicy(OriginProtocolPolicy&& value) { SetOriginProtocolPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OriginSslProtocols& GetOriginSslProtocols() const{ return m_originSslProtocols; }
    inline bool OriginSslProtocolsHasBeenSet() const { return m_originSslProtocolsHasBeenSet; }
    inline void SetOriginSslProtocols(const OriginSslProtocols& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = value; }
    inline void SetOriginSslProtocols(OriginSslProtocols&& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = std::move(value); }
    inline VpcOriginEndpointConfig& WithOriginSslProtocols(const OriginSslProtocols& value) { SetOriginSslProtocols(value); return *this;}
    inline VpcOriginEndpointConfig& WithOriginSslProtocols(OriginSslProtocols&& value) { SetOriginSslProtocols(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_hTTPPort;
    bool m_hTTPPortHasBeenSet = false;

    int m_hTTPSPort;
    bool m_hTTPSPortHasBeenSet = false;

    OriginProtocolPolicy m_originProtocolPolicy;
    bool m_originProtocolPolicyHasBeenSet = false;

    OriginSslProtocols m_originSslProtocols;
    bool m_originSslProtocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
