/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>This API is not supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Alarm">AWS API
   * Reference</a></p>
   */
  class AWS_SAGEMAKER_API Alarm
  {
  public:
    Alarm();
    Alarm(Aws::Utils::Json::JsonView jsonValue);
    Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p/>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p/>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p/>
     */
    inline Alarm& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p/>
     */
    inline Alarm& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Alarm& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}

  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
