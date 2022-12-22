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
   * <p>Describes whether monitoring is enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotFleetMonitoring">AWS
   * API Reference</a></p>
   */
  class SpotFleetMonitoring
  {
  public:
    AWS_EC2_API SpotFleetMonitoring();
    AWS_EC2_API SpotFleetMonitoring(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotFleetMonitoring& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Enables monitoring for the instance.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables monitoring for the instance.</p> <p>Default: <code>false</code> </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables monitoring for the instance.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables monitoring for the instance.</p> <p>Default: <code>false</code> </p>
     */
    inline SpotFleetMonitoring& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
