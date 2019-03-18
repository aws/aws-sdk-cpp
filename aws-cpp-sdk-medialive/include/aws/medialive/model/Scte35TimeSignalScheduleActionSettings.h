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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/Scte35Descriptor.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for a SCTE-35 time_signal.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35TimeSignalScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Scte35TimeSignalScheduleActionSettings
  {
  public:
    Scte35TimeSignalScheduleActionSettings();
    Scte35TimeSignalScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    Scte35TimeSignalScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline const Aws::Vector<Scte35Descriptor>& GetScte35Descriptors() const{ return m_scte35Descriptors; }

    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline bool Scte35DescriptorsHasBeenSet() const { return m_scte35DescriptorsHasBeenSet; }

    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline void SetScte35Descriptors(const Aws::Vector<Scte35Descriptor>& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors = value; }

    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline void SetScte35Descriptors(Aws::Vector<Scte35Descriptor>&& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors = std::move(value); }

    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline Scte35TimeSignalScheduleActionSettings& WithScte35Descriptors(const Aws::Vector<Scte35Descriptor>& value) { SetScte35Descriptors(value); return *this;}

    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline Scte35TimeSignalScheduleActionSettings& WithScte35Descriptors(Aws::Vector<Scte35Descriptor>&& value) { SetScte35Descriptors(std::move(value)); return *this;}

    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline Scte35TimeSignalScheduleActionSettings& AddScte35Descriptors(const Scte35Descriptor& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors.push_back(value); return *this; }

    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline Scte35TimeSignalScheduleActionSettings& AddScte35Descriptors(Scte35Descriptor&& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Scte35Descriptor> m_scte35Descriptors;
    bool m_scte35DescriptorsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
