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
   * <p>Contains the configuration information of an enable action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/EnableActionConfiguration">AWS
   * API Reference</a></p>
   */
  class EnableActionConfiguration
  {
  public:
    AWS_IOTEVENTSDATA_API EnableActionConfiguration() = default;
    AWS_IOTEVENTSDATA_API EnableActionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API EnableActionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The note that you can leave when you enable the alarm.</p>
     */
    inline const Aws::String& GetNote() const { return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    template<typename NoteT = Aws::String>
    void SetNote(NoteT&& value) { m_noteHasBeenSet = true; m_note = std::forward<NoteT>(value); }
    template<typename NoteT = Aws::String>
    EnableActionConfiguration& WithNote(NoteT&& value) { SetNote(std::forward<NoteT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_note;
    bool m_noteHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
