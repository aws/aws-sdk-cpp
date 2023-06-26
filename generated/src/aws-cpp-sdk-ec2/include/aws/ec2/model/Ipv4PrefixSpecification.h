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
   * <p>Describes an IPv4 prefix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipv4PrefixSpecification">AWS
   * API Reference</a></p>
   */
  class Ipv4PrefixSpecification
  {
  public:
    AWS_EC2_API Ipv4PrefixSpecification();
    AWS_EC2_API Ipv4PrefixSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipv4PrefixSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IPv4 prefix. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
     * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline const Aws::String& GetIpv4Prefix() const{ return m_ipv4Prefix; }

    /**
     * <p>The IPv4 prefix. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
     * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline bool Ipv4PrefixHasBeenSet() const { return m_ipv4PrefixHasBeenSet; }

    /**
     * <p>The IPv4 prefix. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
     * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline void SetIpv4Prefix(const Aws::String& value) { m_ipv4PrefixHasBeenSet = true; m_ipv4Prefix = value; }

    /**
     * <p>The IPv4 prefix. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
     * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline void SetIpv4Prefix(Aws::String&& value) { m_ipv4PrefixHasBeenSet = true; m_ipv4Prefix = std::move(value); }

    /**
     * <p>The IPv4 prefix. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
     * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline void SetIpv4Prefix(const char* value) { m_ipv4PrefixHasBeenSet = true; m_ipv4Prefix.assign(value); }

    /**
     * <p>The IPv4 prefix. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
     * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline Ipv4PrefixSpecification& WithIpv4Prefix(const Aws::String& value) { SetIpv4Prefix(value); return *this;}

    /**
     * <p>The IPv4 prefix. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
     * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline Ipv4PrefixSpecification& WithIpv4Prefix(Aws::String&& value) { SetIpv4Prefix(std::move(value)); return *this;}

    /**
     * <p>The IPv4 prefix. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">
     * Assigning prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline Ipv4PrefixSpecification& WithIpv4Prefix(const char* value) { SetIpv4Prefix(value); return *this;}

  private:

    Aws::String m_ipv4Prefix;
    bool m_ipv4PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
