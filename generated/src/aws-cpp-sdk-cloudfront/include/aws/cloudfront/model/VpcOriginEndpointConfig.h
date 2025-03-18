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
    AWS_CLOUDFRONT_API VpcOriginEndpointConfig() = default;
    AWS_CLOUDFRONT_API VpcOriginEndpointConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API VpcOriginEndpointConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the CloudFront VPC origin endpoint configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VpcOriginEndpointConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the CloudFront VPC origin endpoint configuration.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    VpcOriginEndpointConfig& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP port for the CloudFront VPC origin endpoint configuration. The
     * default value is <code>80</code>.</p>
     */
    inline int GetHTTPPort() const { return m_hTTPPort; }
    inline bool HTTPPortHasBeenSet() const { return m_hTTPPortHasBeenSet; }
    inline void SetHTTPPort(int value) { m_hTTPPortHasBeenSet = true; m_hTTPPort = value; }
    inline VpcOriginEndpointConfig& WithHTTPPort(int value) { SetHTTPPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTPS port of the CloudFront VPC origin endpoint configuration. The
     * default value is <code>443</code>.</p>
     */
    inline int GetHTTPSPort() const { return m_hTTPSPort; }
    inline bool HTTPSPortHasBeenSet() const { return m_hTTPSPortHasBeenSet; }
    inline void SetHTTPSPort(int value) { m_hTTPSPortHasBeenSet = true; m_hTTPSPort = value; }
    inline VpcOriginEndpointConfig& WithHTTPSPort(int value) { SetHTTPSPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin protocol policy for the CloudFront VPC origin endpoint
     * configuration.</p>
     */
    inline OriginProtocolPolicy GetOriginProtocolPolicy() const { return m_originProtocolPolicy; }
    inline bool OriginProtocolPolicyHasBeenSet() const { return m_originProtocolPolicyHasBeenSet; }
    inline void SetOriginProtocolPolicy(OriginProtocolPolicy value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = value; }
    inline VpcOriginEndpointConfig& WithOriginProtocolPolicy(OriginProtocolPolicy value) { SetOriginProtocolPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const OriginSslProtocols& GetOriginSslProtocols() const { return m_originSslProtocols; }
    inline bool OriginSslProtocolsHasBeenSet() const { return m_originSslProtocolsHasBeenSet; }
    template<typename OriginSslProtocolsT = OriginSslProtocols>
    void SetOriginSslProtocols(OriginSslProtocolsT&& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = std::forward<OriginSslProtocolsT>(value); }
    template<typename OriginSslProtocolsT = OriginSslProtocols>
    VpcOriginEndpointConfig& WithOriginSslProtocols(OriginSslProtocolsT&& value) { SetOriginSslProtocols(std::forward<OriginSslProtocolsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_hTTPPort{0};
    bool m_hTTPPortHasBeenSet = false;

    int m_hTTPSPort{0};
    bool m_hTTPSPortHasBeenSet = false;

    OriginProtocolPolicy m_originProtocolPolicy{OriginProtocolPolicy::NOT_SET};
    bool m_originProtocolPolicyHasBeenSet = false;

    OriginSslProtocols m_originSslProtocols;
    bool m_originSslProtocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
