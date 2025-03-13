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
    AWS_IVSREALTIME_API Destination() = default;
    AWS_IVSREALTIME_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Destination& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the Composition Destination.</p>
     */
    inline DestinationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(DestinationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Destination& WithState(DestinationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTC time of the destination start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Destination& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTC time of the destination end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Destination& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration used to create this destination.</p>
     */
    inline const DestinationConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = DestinationConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = DestinationConfiguration>
    Destination& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional details regarding the status of the destination.</p>
     */
    inline const DestinationDetail& GetDetail() const { return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    template<typename DetailT = DestinationDetail>
    void SetDetail(DetailT&& value) { m_detailHasBeenSet = true; m_detail = std::forward<DetailT>(value); }
    template<typename DetailT = DestinationDetail>
    Destination& WithDetail(DetailT&& value) { SetDetail(std::forward<DetailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DestinationState m_state{DestinationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    DestinationConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    DestinationDetail m_detail;
    bool m_detailHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
