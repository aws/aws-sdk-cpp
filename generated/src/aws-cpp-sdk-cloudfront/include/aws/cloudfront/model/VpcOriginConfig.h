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
  private:

    Aws::String m_vpcOriginId;
    bool m_vpcOriginIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
