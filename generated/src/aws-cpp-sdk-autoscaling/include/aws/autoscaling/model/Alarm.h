/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes an alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/Alarm">AWS
   * API Reference</a></p>
   */
  class Alarm
  {
  public:
    AWS_AUTOSCALING_API Alarm();
    AWS_AUTOSCALING_API Alarm(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API Alarm& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline Alarm& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline Alarm& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline Alarm& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline const Aws::String& GetAlarmARN() const{ return m_alarmARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline bool AlarmARNHasBeenSet() const { return m_alarmARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmARN(const Aws::String& value) { m_alarmARNHasBeenSet = true; m_alarmARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmARN(Aws::String&& value) { m_alarmARNHasBeenSet = true; m_alarmARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmARN(const char* value) { m_alarmARNHasBeenSet = true; m_alarmARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline Alarm& WithAlarmARN(const Aws::String& value) { SetAlarmARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline Alarm& WithAlarmARN(Aws::String&& value) { SetAlarmARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline Alarm& WithAlarmARN(const char* value) { SetAlarmARN(value); return *this;}

  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_alarmARN;
    bool m_alarmARNHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
