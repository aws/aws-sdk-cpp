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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the amount of CPU that an app is using on a physical device.</p>
   * <p>Note that this does not represent system-wide CPU usage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CPU">AWS API
   * Reference</a></p>
   */
  class AWS_DEVICEFARM_API CPU
  {
  public:
    CPU();
    CPU(Aws::Utils::Json::JsonView jsonValue);
    CPU& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CPU's frequency.</p>
     */
    inline const Aws::String& GetFrequency() const{ return m_frequency; }

    /**
     * <p>The CPU's frequency.</p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>The CPU's frequency.</p>
     */
    inline void SetFrequency(const Aws::String& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>The CPU's frequency.</p>
     */
    inline void SetFrequency(Aws::String&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p>The CPU's frequency.</p>
     */
    inline void SetFrequency(const char* value) { m_frequencyHasBeenSet = true; m_frequency.assign(value); }

    /**
     * <p>The CPU's frequency.</p>
     */
    inline CPU& WithFrequency(const Aws::String& value) { SetFrequency(value); return *this;}

    /**
     * <p>The CPU's frequency.</p>
     */
    inline CPU& WithFrequency(Aws::String&& value) { SetFrequency(std::move(value)); return *this;}

    /**
     * <p>The CPU's frequency.</p>
     */
    inline CPU& WithFrequency(const char* value) { SetFrequency(value); return *this;}


    /**
     * <p>The CPU's architecture, for example x86 or ARM.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The CPU's architecture, for example x86 or ARM.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The CPU's architecture, for example x86 or ARM.</p>
     */
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The CPU's architecture, for example x86 or ARM.</p>
     */
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The CPU's architecture, for example x86 or ARM.</p>
     */
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }

    /**
     * <p>The CPU's architecture, for example x86 or ARM.</p>
     */
    inline CPU& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The CPU's architecture, for example x86 or ARM.</p>
     */
    inline CPU& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The CPU's architecture, for example x86 or ARM.</p>
     */
    inline CPU& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}


    /**
     * <p>The clock speed of the device's CPU, expressed in hertz (Hz). For example, a
     * 1.2 GHz CPU is expressed as 1200000000.</p>
     */
    inline double GetClock() const{ return m_clock; }

    /**
     * <p>The clock speed of the device's CPU, expressed in hertz (Hz). For example, a
     * 1.2 GHz CPU is expressed as 1200000000.</p>
     */
    inline bool ClockHasBeenSet() const { return m_clockHasBeenSet; }

    /**
     * <p>The clock speed of the device's CPU, expressed in hertz (Hz). For example, a
     * 1.2 GHz CPU is expressed as 1200000000.</p>
     */
    inline void SetClock(double value) { m_clockHasBeenSet = true; m_clock = value; }

    /**
     * <p>The clock speed of the device's CPU, expressed in hertz (Hz). For example, a
     * 1.2 GHz CPU is expressed as 1200000000.</p>
     */
    inline CPU& WithClock(double value) { SetClock(value); return *this;}

  private:

    Aws::String m_frequency;
    bool m_frequencyHasBeenSet;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet;

    double m_clock;
    bool m_clockHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
