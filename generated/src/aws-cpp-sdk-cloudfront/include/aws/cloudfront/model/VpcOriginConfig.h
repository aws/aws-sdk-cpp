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
   * <p>An Amazon CloudFront VPC origin configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/VpcOriginConfig">AWS
   * API Reference</a></p>
   */
  class VpcOriginConfig
  {
  public:
    AWS_CLOUDFRONT_API VpcOriginConfig();
    AWS_CLOUDFRONT_API VpcOriginConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API VpcOriginConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The VPC origin ID.</p>
     */
    inline const Aws::String& GetVpcOriginId() const{ return m_vpcOriginId; }
    inline bool VpcOriginIdHasBeenSet() const { return m_vpcOriginIdHasBeenSet; }
    inline void SetVpcOriginId(const Aws::String& value) { m_vpcOriginIdHasBeenSet = true; m_vpcOriginId = value; }
    inline void SetVpcOriginId(Aws::String&& value) { m_vpcOriginIdHasBeenSet = true; m_vpcOriginId = std::move(value); }
    inline void SetVpcOriginId(const char* value) { m_vpcOriginIdHasBeenSet = true; m_vpcOriginId.assign(value); }
    inline VpcOriginConfig& WithVpcOriginId(const Aws::String& value) { SetVpcOriginId(value); return *this;}
    inline VpcOriginConfig& WithVpcOriginId(Aws::String&& value) { SetVpcOriginId(std::move(value)); return *this;}
    inline VpcOriginConfig& WithVpcOriginId(const char* value) { SetVpcOriginId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how long, in seconds, CloudFront waits for a response from the
     * origin. This is also known as the <i>origin response timeout</i>. The minimum
     * timeout is 1 second, the maximum is 60 seconds, and the default (if you don't
     * specify otherwise) is 30 seconds.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginResponseTimeout">Response
     * timeout (custom origins only)</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline int GetOriginReadTimeout() const{ return m_originReadTimeout; }
    inline bool OriginReadTimeoutHasBeenSet() const { return m_originReadTimeoutHasBeenSet; }
    inline void SetOriginReadTimeout(int value) { m_originReadTimeoutHasBeenSet = true; m_originReadTimeout = value; }
    inline VpcOriginConfig& WithOriginReadTimeout(int value) { SetOriginReadTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how long, in seconds, CloudFront persists its connection to the
     * origin. The minimum timeout is 1 second, the maximum is 60 seconds, and the
     * default (if you don't specify otherwise) is 5 seconds.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginKeepaliveTimeout">Keep-alive
     * timeout (custom origins only)</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline int GetOriginKeepaliveTimeout() const{ return m_originKeepaliveTimeout; }
    inline bool OriginKeepaliveTimeoutHasBeenSet() const { return m_originKeepaliveTimeoutHasBeenSet; }
    inline void SetOriginKeepaliveTimeout(int value) { m_originKeepaliveTimeoutHasBeenSet = true; m_originKeepaliveTimeout = value; }
    inline VpcOriginConfig& WithOriginKeepaliveTimeout(int value) { SetOriginKeepaliveTimeout(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcOriginId;
    bool m_vpcOriginIdHasBeenSet = false;

    int m_originReadTimeout;
    bool m_originReadTimeoutHasBeenSet = false;

    int m_originKeepaliveTimeout;
    bool m_originKeepaliveTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
