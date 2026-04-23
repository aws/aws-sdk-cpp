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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/VPCRegion.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>(Private hosted zones only) A complex type that contains information about an
   * Amazon VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/VPC">AWS API
   * Reference</a></p>
   */
  class AWS_ROUTE53_API VPC
  {
  public:
    VPC();
    VPC(const Aws::Utils::Xml::XmlNode& xmlNode);
    VPC& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>(Private hosted zones only) The region that an Amazon VPC was created in.</p>
     */
    inline const VPCRegion& GetVPCRegion() const{ return m_vPCRegion; }

    /**
     * <p>(Private hosted zones only) The region that an Amazon VPC was created in.</p>
     */
    inline bool VPCRegionHasBeenSet() const { return m_vPCRegionHasBeenSet; }

    /**
     * <p>(Private hosted zones only) The region that an Amazon VPC was created in.</p>
     */
    inline void SetVPCRegion(const VPCRegion& value) { m_vPCRegionHasBeenSet = true; m_vPCRegion = value; }

    /**
     * <p>(Private hosted zones only) The region that an Amazon VPC was created in.</p>
     */
    inline void SetVPCRegion(VPCRegion&& value) { m_vPCRegionHasBeenSet = true; m_vPCRegion = std::move(value); }

    /**
     * <p>(Private hosted zones only) The region that an Amazon VPC was created in.</p>
     */
    inline VPC& WithVPCRegion(const VPCRegion& value) { SetVPCRegion(value); return *this;}

    /**
     * <p>(Private hosted zones only) The region that an Amazon VPC was created in.</p>
     */
    inline VPC& WithVPCRegion(VPCRegion&& value) { SetVPCRegion(std::move(value)); return *this;}


    
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }

    
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }

    
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }

    
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }

    
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }

    
    inline VPC& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}

    
    inline VPC& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}

    
    inline VPC& WithVPCId(const char* value) { SetVPCId(value); return *this;}

  private:

    VPCRegion m_vPCRegion;
    bool m_vPCRegionHasBeenSet;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
