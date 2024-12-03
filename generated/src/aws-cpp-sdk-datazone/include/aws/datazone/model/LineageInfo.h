/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/LineageEventProcessingStatus.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The data lineage information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LineageInfo">AWS
   * API Reference</a></p>
   */
  class LineageInfo
  {
  public:
    AWS_DATAZONE_API LineageInfo();
    AWS_DATAZONE_API LineageInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data lineage error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline LineageInfo& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline LineageInfo& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline LineageInfo& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data lineage event ID.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline LineageInfo& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline LineageInfo& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline LineageInfo& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data lineage event status.</p>
     */
    inline const LineageEventProcessingStatus& GetEventStatus() const{ return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(const LineageEventProcessingStatus& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline void SetEventStatus(LineageEventProcessingStatus&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }
    inline LineageInfo& WithEventStatus(const LineageEventProcessingStatus& value) { SetEventStatus(value); return *this;}
    inline LineageInfo& WithEventStatus(LineageEventProcessingStatus&& value) { SetEventStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    LineageEventProcessingStatus m_eventStatus;
    bool m_eventStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
