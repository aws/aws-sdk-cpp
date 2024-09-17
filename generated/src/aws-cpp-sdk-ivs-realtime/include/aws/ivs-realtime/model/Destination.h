/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/DestinationState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivs-realtime/model/DestinationConfiguration.h>
#include <aws/ivs-realtime/model/DestinationDetail.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Object specifying the status of a Destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_IVSREALTIME_API Destination();
    AWS_IVSREALTIME_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Destination& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Destination& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Destination& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the Composition Destination.</p>
     */
    inline const DestinationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const DestinationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(DestinationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Destination& WithState(const DestinationState& value) { SetState(value); return *this;}
    inline Destination& WithState(DestinationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTC time of the destination start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Destination& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Destination& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTC time of the destination end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline Destination& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline Destination& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration used to create this destination.</p>
     */
    inline const DestinationConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const DestinationConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(DestinationConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline Destination& WithConfiguration(const DestinationConfiguration& value) { SetConfiguration(value); return *this;}
    inline Destination& WithConfiguration(DestinationConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional details regarding the status of the destination.</p>
     */
    inline const DestinationDetail& GetDetail() const{ return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    inline void SetDetail(const DestinationDetail& value) { m_detailHasBeenSet = true; m_detail = value; }
    inline void SetDetail(DestinationDetail&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }
    inline Destination& WithDetail(const DestinationDetail& value) { SetDetail(value); return *this;}
    inline Destination& WithDetail(DestinationDetail&& value) { SetDetail(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DestinationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    DestinationConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    DestinationDetail m_detail;
    bool m_detailHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
