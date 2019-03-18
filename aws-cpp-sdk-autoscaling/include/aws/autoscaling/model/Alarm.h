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
  class AWS_AUTOSCALING_API Alarm
  {
  public:
    Alarm();
    Alarm(const Aws::Utils::Xml::XmlNode& xmlNode);
    Alarm& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_alarmNameHasBeenSet;

    Aws::String m_alarmARN;
    bool m_alarmARNHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
