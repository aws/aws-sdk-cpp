﻿/**
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
   * <p>Specifies a Diffie-Hellman group number for the VPN tunnel for phase 2 IKE
   * negotiations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Phase2DHGroupNumbersRequestListValue">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API Phase2DHGroupNumbersRequestListValue
  {
  public:
    Phase2DHGroupNumbersRequestListValue();
    Phase2DHGroupNumbersRequestListValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    Phase2DHGroupNumbersRequestListValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Diffie-Hellmann group number.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>The Diffie-Hellmann group number.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The Diffie-Hellmann group number.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The Diffie-Hellmann group number.</p>
     */
    inline Phase2DHGroupNumbersRequestListValue& WithValue(int value) { SetValue(value); return *this;}

  private:

    int m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
