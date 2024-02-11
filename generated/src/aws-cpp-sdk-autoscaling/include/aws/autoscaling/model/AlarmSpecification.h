/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Specifies the CloudWatch alarm specification to use in an instance
   * refresh.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AlarmSpecification">AWS
   * API Reference</a></p>
   */
  class AlarmSpecification
  {
  public:
    AWS_AUTOSCALING_API AlarmSpecification();
    AWS_AUTOSCALING_API AlarmSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API AlarmSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The names of one or more CloudWatch alarms to monitor for the instance
     * refresh. You can specify up to 10 alarms.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>The names of one or more CloudWatch alarms to monitor for the instance
     * refresh. You can specify up to 10 alarms.</p>
     */
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }

    /**
     * <p>The names of one or more CloudWatch alarms to monitor for the instance
     * refresh. You can specify up to 10 alarms.</p>
     */
    inline void SetAlarms(const Aws::Vector<Aws::String>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>The names of one or more CloudWatch alarms to monitor for the instance
     * refresh. You can specify up to 10 alarms.</p>
     */
    inline void SetAlarms(Aws::Vector<Aws::String>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>The names of one or more CloudWatch alarms to monitor for the instance
     * refresh. You can specify up to 10 alarms.</p>
     */
    inline AlarmSpecification& WithAlarms(const Aws::Vector<Aws::String>& value) { SetAlarms(value); return *this;}

    /**
     * <p>The names of one or more CloudWatch alarms to monitor for the instance
     * refresh. You can specify up to 10 alarms.</p>
     */
    inline AlarmSpecification& WithAlarms(Aws::Vector<Aws::String>&& value) { SetAlarms(std::move(value)); return *this;}

    /**
     * <p>The names of one or more CloudWatch alarms to monitor for the instance
     * refresh. You can specify up to 10 alarms.</p>
     */
    inline AlarmSpecification& AddAlarms(const Aws::String& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>The names of one or more CloudWatch alarms to monitor for the instance
     * refresh. You can specify up to 10 alarms.</p>
     */
    inline AlarmSpecification& AddAlarms(Aws::String&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of one or more CloudWatch alarms to monitor for the instance
     * refresh. You can specify up to 10 alarms.</p>
     */
    inline AlarmSpecification& AddAlarms(const char* value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
