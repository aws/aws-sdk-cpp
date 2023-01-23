/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Describes the ICMP type and code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IcmpTypeCode">AWS
   * API Reference</a></p>
   */
  class IcmpTypeCode
  {
  public:
    AWS_EC2_API IcmpTypeCode();
    AWS_EC2_API IcmpTypeCode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IcmpTypeCode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ICMP code. A value of -1 means all codes for the specified ICMP type.</p>
     */
    inline int GetCode() const{ return m_code; }

    /**
     * <p>The ICMP code. A value of -1 means all codes for the specified ICMP type.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The ICMP code. A value of -1 means all codes for the specified ICMP type.</p>
     */
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The ICMP code. A value of -1 means all codes for the specified ICMP type.</p>
     */
    inline IcmpTypeCode& WithCode(int value) { SetCode(value); return *this;}


    /**
     * <p>The ICMP type. A value of -1 means all types.</p>
     */
    inline int GetType() const{ return m_type; }

    /**
     * <p>The ICMP type. A value of -1 means all types.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The ICMP type. A value of -1 means all types.</p>
     */
    inline void SetType(int value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The ICMP type. A value of -1 means all types.</p>
     */
    inline IcmpTypeCode& WithType(int value) { SetType(value); return *this;}

  private:

    int m_code;
    bool m_codeHasBeenSet = false;

    int m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
