/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>The new setting of a timer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/TimerDefinition">AWS
   * API Reference</a></p>
   */
  class TimerDefinition
  {
  public:
    AWS_IOTEVENTSDATA_API TimerDefinition();
    AWS_IOTEVENTSDATA_API TimerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API TimerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the timer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TimerDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TimerDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TimerDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new setting of the timer (the number of seconds before the timer
     * elapses).</p>
     */
    inline int GetSeconds() const{ return m_seconds; }
    inline bool SecondsHasBeenSet() const { return m_secondsHasBeenSet; }
    inline void SetSeconds(int value) { m_secondsHasBeenSet = true; m_seconds = value; }
    inline TimerDefinition& WithSeconds(int value) { SetSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_seconds;
    bool m_secondsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
