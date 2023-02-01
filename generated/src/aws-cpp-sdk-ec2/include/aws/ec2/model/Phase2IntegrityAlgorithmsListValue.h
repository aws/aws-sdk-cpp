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
   * <p>The integrity algorithm for phase 2 IKE negotiations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Phase2IntegrityAlgorithmsListValue">AWS
   * API Reference</a></p>
   */
  class Phase2IntegrityAlgorithmsListValue
  {
  public:
    AWS_EC2_API Phase2IntegrityAlgorithmsListValue();
    AWS_EC2_API Phase2IntegrityAlgorithmsListValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Phase2IntegrityAlgorithmsListValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The integrity algorithm.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The integrity algorithm.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The integrity algorithm.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The integrity algorithm.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The integrity algorithm.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The integrity algorithm.</p>
     */
    inline Phase2IntegrityAlgorithmsListValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The integrity algorithm.</p>
     */
    inline Phase2IntegrityAlgorithmsListValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The integrity algorithm.</p>
     */
    inline Phase2IntegrityAlgorithmsListValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
