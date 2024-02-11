/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamPublicAddressTag.h>
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
   * <p>Tags for a public IP address discovered by IPAM.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPublicAddressTags">AWS
   * API Reference</a></p>
   */
  class IpamPublicAddressTags
  {
  public:
    AWS_EC2_API IpamPublicAddressTags();
    AWS_EC2_API IpamPublicAddressTags(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamPublicAddressTags& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Tags for an Elastic IP address.</p>
     */
    inline const Aws::Vector<IpamPublicAddressTag>& GetEipTags() const{ return m_eipTags; }

    /**
     * <p>Tags for an Elastic IP address.</p>
     */
    inline bool EipTagsHasBeenSet() const { return m_eipTagsHasBeenSet; }

    /**
     * <p>Tags for an Elastic IP address.</p>
     */
    inline void SetEipTags(const Aws::Vector<IpamPublicAddressTag>& value) { m_eipTagsHasBeenSet = true; m_eipTags = value; }

    /**
     * <p>Tags for an Elastic IP address.</p>
     */
    inline void SetEipTags(Aws::Vector<IpamPublicAddressTag>&& value) { m_eipTagsHasBeenSet = true; m_eipTags = std::move(value); }

    /**
     * <p>Tags for an Elastic IP address.</p>
     */
    inline IpamPublicAddressTags& WithEipTags(const Aws::Vector<IpamPublicAddressTag>& value) { SetEipTags(value); return *this;}

    /**
     * <p>Tags for an Elastic IP address.</p>
     */
    inline IpamPublicAddressTags& WithEipTags(Aws::Vector<IpamPublicAddressTag>&& value) { SetEipTags(std::move(value)); return *this;}

    /**
     * <p>Tags for an Elastic IP address.</p>
     */
    inline IpamPublicAddressTags& AddEipTags(const IpamPublicAddressTag& value) { m_eipTagsHasBeenSet = true; m_eipTags.push_back(value); return *this; }

    /**
     * <p>Tags for an Elastic IP address.</p>
     */
    inline IpamPublicAddressTags& AddEipTags(IpamPublicAddressTag&& value) { m_eipTagsHasBeenSet = true; m_eipTags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IpamPublicAddressTag> m_eipTags;
    bool m_eipTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
