/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about the Private DNS name for interface endpoints.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PrivateDnsDetails">AWS
   * API Reference</a></p>
   */
  class PrivateDnsDetails
  {
  public:
    AWS_EC2_API PrivateDnsDetails();
    AWS_EC2_API PrivateDnsDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PrivateDnsDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The private DNS name assigned to the VPC endpoint service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The private DNS name assigned to the VPC endpoint service.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>The private DNS name assigned to the VPC endpoint service.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private DNS name assigned to the VPC endpoint service.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>The private DNS name assigned to the VPC endpoint service.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The private DNS name assigned to the VPC endpoint service.</p>
     */
    inline PrivateDnsDetails& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name assigned to the VPC endpoint service.</p>
     */
    inline PrivateDnsDetails& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The private DNS name assigned to the VPC endpoint service.</p>
     */
    inline PrivateDnsDetails& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}

  private:

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
