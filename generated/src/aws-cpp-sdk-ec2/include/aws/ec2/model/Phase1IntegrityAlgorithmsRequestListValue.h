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
   * <p>Specifies the integrity algorithm for the VPN tunnel for phase 1 IKE
   * negotiations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Phase1IntegrityAlgorithmsRequestListValue">AWS
   * API Reference</a></p>
   */
  class Phase1IntegrityAlgorithmsRequestListValue
  {
  public:
    AWS_EC2_API Phase1IntegrityAlgorithmsRequestListValue();
    AWS_EC2_API Phase1IntegrityAlgorithmsRequestListValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Phase1IntegrityAlgorithmsRequestListValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The value for the integrity algorithm.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Phase1IntegrityAlgorithmsRequestListValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Phase1IntegrityAlgorithmsRequestListValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Phase1IntegrityAlgorithmsRequestListValue& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
