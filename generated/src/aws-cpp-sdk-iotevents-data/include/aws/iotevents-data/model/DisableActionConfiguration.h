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
   * <p>Contains the configuration information of a disable action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DisableActionConfiguration">AWS
   * API Reference</a></p>
   */
  class DisableActionConfiguration
  {
  public:
    AWS_IOTEVENTSDATA_API DisableActionConfiguration();
    AWS_IOTEVENTSDATA_API DisableActionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API DisableActionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The note that you can leave when you disable the alarm.</p>
     */
    inline const Aws::String& GetNote() const{ return m_note; }

    /**
     * <p>The note that you can leave when you disable the alarm.</p>
     */
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }

    /**
     * <p>The note that you can leave when you disable the alarm.</p>
     */
    inline void SetNote(const Aws::String& value) { m_noteHasBeenSet = true; m_note = value; }

    /**
     * <p>The note that you can leave when you disable the alarm.</p>
     */
    inline void SetNote(Aws::String&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }

    /**
     * <p>The note that you can leave when you disable the alarm.</p>
     */
    inline void SetNote(const char* value) { m_noteHasBeenSet = true; m_note.assign(value); }

    /**
     * <p>The note that you can leave when you disable the alarm.</p>
     */
    inline DisableActionConfiguration& WithNote(const Aws::String& value) { SetNote(value); return *this;}

    /**
     * <p>The note that you can leave when you disable the alarm.</p>
     */
    inline DisableActionConfiguration& WithNote(Aws::String&& value) { SetNote(std::move(value)); return *this;}

    /**
     * <p>The note that you can leave when you disable the alarm.</p>
     */
    inline DisableActionConfiguration& WithNote(const char* value) { SetNote(value); return *this;}

  private:

    Aws::String m_note;
    bool m_noteHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
