/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that contains information about the Amazon S3 origin. If the
   * origin is a custom origin or an S3 bucket that is configured as a website
   * endpoint, use the <code>CustomOriginConfig</code> element instead.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/S3OriginConfig">AWS
   * API Reference</a></p>
   */
  class S3OriginConfig
  {
  public:
    AWS_CLOUDFRONT_API S3OriginConfig() = default;
    AWS_CLOUDFRONT_API S3OriginConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API S3OriginConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> <p>If you're using origin access control (OAC) instead of origin
     * access identity, specify an empty <code>OriginAccessIdentity</code> element. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-origin.html">Restricting
     * access to an Amazon Web Services</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>  <p>The CloudFront origin access identity to associate
     * with the origin. Use an origin access identity to configure the origin so that
     * viewers can <i>only</i> access objects in an Amazon S3 bucket through
     * CloudFront. The format of the value is:</p> <p>
     * <code>origin-access-identity/cloudfront/ID-of-origin-access-identity</code> </p>
     * <p>The <code> <i>ID-of-origin-access-identity</i> </code> is the value that
     * CloudFront returned in the <code>ID</code> element when you created the origin
     * access identity.</p> <p>If you want viewers to be able to access objects using
     * either the CloudFront URL or the Amazon S3 URL, specify an empty
     * <code>OriginAccessIdentity</code> element.</p> <p>To delete the origin access
     * identity from an existing distribution, update the distribution configuration
     * and include an empty <code>OriginAccessIdentity</code> element.</p> <p>To
     * replace the origin access identity, update the distribution configuration and
     * specify the new origin access identity.</p> <p>For more information about the
     * origin access identity, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p></p>
     */
    inline const Aws::String& GetOriginAccessIdentity() const { return m_originAccessIdentity; }
    inline bool OriginAccessIdentityHasBeenSet() const { return m_originAccessIdentityHasBeenSet; }
    template<typename OriginAccessIdentityT = Aws::String>
    void SetOriginAccessIdentity(OriginAccessIdentityT&& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = std::forward<OriginAccessIdentityT>(value); }
    template<typename OriginAccessIdentityT = Aws::String>
    S3OriginConfig& WithOriginAccessIdentity(OriginAccessIdentityT&& value) { SetOriginAccessIdentity(std::forward<OriginAccessIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how long, in seconds, CloudFront waits for a response from the
     * origin. This is also known as the <i>origin response timeout</i>. The minimum
     * timeout is 1 second, the maximum is 120 seconds, and the default (if you don't
     * specify otherwise) is 30 seconds.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DownloadDistValuesOrigin.html#DownloadDistValuesOriginResponseTimeout">Response
     * timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline int GetOriginReadTimeout() const { return m_originReadTimeout; }
    inline bool OriginReadTimeoutHasBeenSet() const { return m_originReadTimeoutHasBeenSet; }
    inline void SetOriginReadTimeout(int value) { m_originReadTimeoutHasBeenSet = true; m_originReadTimeout = value; }
    inline S3OriginConfig& WithOriginReadTimeout(int value) { SetOriginReadTimeout(value); return *this;}
    ///@}
  private:

    Aws::String m_originAccessIdentity;
    bool m_originAccessIdentityHasBeenSet = false;

    int m_originReadTimeout{0};
    bool m_originReadTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
