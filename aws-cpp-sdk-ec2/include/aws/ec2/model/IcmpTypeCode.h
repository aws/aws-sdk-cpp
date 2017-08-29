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
  class AWS_EC2_API IcmpTypeCode
  {
  public:
    IcmpTypeCode();
    IcmpTypeCode(const Aws::Utils::Xml::XmlNode& xmlNode);
    IcmpTypeCode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ICMP code. A value of -1 means all codes for the specified ICMP type.</p>
     */
    inline int GetCode() const{ return m_code; }

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
    inline void SetType(int value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The ICMP type. A value of -1 means all types.</p>
     */
    inline IcmpTypeCode& WithType(int value) { SetType(value); return *this;}

  private:

    int m_code;
    bool m_codeHasBeenSet;

    int m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
