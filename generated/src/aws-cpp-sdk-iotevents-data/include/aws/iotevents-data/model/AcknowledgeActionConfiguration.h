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
   * <p>Contains the configuration information of an acknowledge
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/AcknowledgeActionConfiguration">AWS
   * API Reference</a></p>
   */
  class AcknowledgeActionConfiguration
  {
  public:
    AWS_IOTEVENTSDATA_API AcknowledgeActionConfiguration();
    AWS_IOTEVENTSDATA_API AcknowledgeActionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API AcknowledgeActionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The note that you can leave when you acknowledge the alarm.</p>
     */
    inline const Aws::String& GetNote() const{ return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    inline void SetNote(const Aws::String& value) { m_noteHasBeenSet = true; m_note = value; }
    inline void SetNote(Aws::String&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }
    inline void SetNote(const char* value) { m_noteHasBeenSet = true; m_note.assign(value); }
    inline AcknowledgeActionConfiguration& WithNote(const Aws::String& value) { SetNote(value); return *this;}
    inline AcknowledgeActionConfiguration& WithNote(Aws::String&& value) { SetNote(std::move(value)); return *this;}
    inline AcknowledgeActionConfiguration& WithNote(const char* value) { SetNote(value); return *this;}
    ///@}
  private:

    Aws::String m_note;
    bool m_noteHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
