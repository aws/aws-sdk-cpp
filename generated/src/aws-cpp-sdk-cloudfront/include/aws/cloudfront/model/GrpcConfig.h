/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>

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
   * <p>Amazon CloudFront supports gRPC, an open-source remote procedure call (RPC)
   * framework built on HTTP/2. gRPC offers bi-directional streaming and binary
   * protocol that buffers payloads, making it suitable for applications that require
   * low latency communications.</p> <p>To enable your distribution to handle gRPC
   * requests, you must include HTTP/2 as one of the supported <code>HTTP</code>
   * versions and allow <code>HTTP</code> methods, including <code>POST</code>.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-using-grpc.html">Using
   * gRPC with CloudFront distributions</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GrpcConfig">AWS
   * API Reference</a></p>
   */
  class GrpcConfig
  {
  public:
    AWS_CLOUDFRONT_API GrpcConfig() = default;
    AWS_CLOUDFRONT_API GrpcConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API GrpcConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Enables your CloudFront distribution to receive gRPC requests and to proxy
     * them directly to your origins.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline GrpcConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
