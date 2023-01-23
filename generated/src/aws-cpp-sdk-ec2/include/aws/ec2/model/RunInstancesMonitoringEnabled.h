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
   * <p>Describes the monitoring of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunInstancesMonitoringEnabled">AWS
   * API Reference</a></p>
   */
  class RunInstancesMonitoringEnabled
  {
  public:
    AWS_EC2_API RunInstancesMonitoringEnabled();
    AWS_EC2_API RunInstancesMonitoringEnabled(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RunInstancesMonitoringEnabled& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether detailed monitoring is enabled. Otherwise, basic monitoring
     * is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether detailed monitoring is enabled. Otherwise, basic monitoring
     * is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether detailed monitoring is enabled. Otherwise, basic monitoring
     * is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether detailed monitoring is enabled. Otherwise, basic monitoring
     * is enabled.</p>
     */
    inline RunInstancesMonitoringEnabled& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
