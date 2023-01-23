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
   * <p>The internet key exchange (IKE) version permitted for the VPN
   * tunnel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IKEVersionsListValue">AWS
   * API Reference</a></p>
   */
  class IKEVersionsListValue
  {
  public:
    AWS_EC2_API IKEVersionsListValue();
    AWS_EC2_API IKEVersionsListValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IKEVersionsListValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IKE version.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The IKE version.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The IKE version.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The IKE version.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The IKE version.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The IKE version.</p>
     */
    inline IKEVersionsListValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The IKE version.</p>
     */
    inline IKEVersionsListValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The IKE version.</p>
     */
    inline IKEVersionsListValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
