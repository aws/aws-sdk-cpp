/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>A network interface that specifies the on-board diagnostic (OBD) II network
   * protocol.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ObdInterface">AWS
   * API Reference</a></p>
   */
  class ObdInterface
  {
  public:
    AWS_IOTFLEETWISE_API ObdInterface() = default;
    AWS_IOTFLEETWISE_API ObdInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API ObdInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the interface.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ObdInterface& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the message requesting vehicle data.</p>
     */
    inline int GetRequestMessageId() const { return m_requestMessageId; }
    inline bool RequestMessageIdHasBeenSet() const { return m_requestMessageIdHasBeenSet; }
    inline void SetRequestMessageId(int value) { m_requestMessageIdHasBeenSet = true; m_requestMessageId = value; }
    inline ObdInterface& WithRequestMessageId(int value) { SetRequestMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard OBD II PID.</p>
     */
    inline const Aws::String& GetObdStandard() const { return m_obdStandard; }
    inline bool ObdStandardHasBeenSet() const { return m_obdStandardHasBeenSet; }
    template<typename ObdStandardT = Aws::String>
    void SetObdStandard(ObdStandardT&& value) { m_obdStandardHasBeenSet = true; m_obdStandard = std::forward<ObdStandardT>(value); }
    template<typename ObdStandardT = Aws::String>
    ObdInterface& WithObdStandard(ObdStandardT&& value) { SetObdStandard(std::forward<ObdStandardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number message requests per second.</p>
     */
    inline int GetPidRequestIntervalSeconds() const { return m_pidRequestIntervalSeconds; }
    inline bool PidRequestIntervalSecondsHasBeenSet() const { return m_pidRequestIntervalSecondsHasBeenSet; }
    inline void SetPidRequestIntervalSeconds(int value) { m_pidRequestIntervalSecondsHasBeenSet = true; m_pidRequestIntervalSeconds = value; }
    inline ObdInterface& WithPidRequestIntervalSeconds(int value) { SetPidRequestIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number message requests per diagnostic trouble code per
     * second.</p>
     */
    inline int GetDtcRequestIntervalSeconds() const { return m_dtcRequestIntervalSeconds; }
    inline bool DtcRequestIntervalSecondsHasBeenSet() const { return m_dtcRequestIntervalSecondsHasBeenSet; }
    inline void SetDtcRequestIntervalSeconds(int value) { m_dtcRequestIntervalSecondsHasBeenSet = true; m_dtcRequestIntervalSeconds = value; }
    inline ObdInterface& WithDtcRequestIntervalSeconds(int value) { SetDtcRequestIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use extended IDs in the message.</p>
     */
    inline bool GetUseExtendedIds() const { return m_useExtendedIds; }
    inline bool UseExtendedIdsHasBeenSet() const { return m_useExtendedIdsHasBeenSet; }
    inline void SetUseExtendedIds(bool value) { m_useExtendedIdsHasBeenSet = true; m_useExtendedIds = value; }
    inline ObdInterface& WithUseExtendedIds(bool value) { SetUseExtendedIds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the vehicle has a transmission control module (TCM).</p>
     */
    inline bool GetHasTransmissionEcu() const { return m_hasTransmissionEcu; }
    inline bool HasTransmissionEcuHasBeenSet() const { return m_hasTransmissionEcuHasBeenSet; }
    inline void SetHasTransmissionEcu(bool value) { m_hasTransmissionEcuHasBeenSet = true; m_hasTransmissionEcu = value; }
    inline ObdInterface& WithHasTransmissionEcu(bool value) { SetHasTransmissionEcu(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_requestMessageId{0};
    bool m_requestMessageIdHasBeenSet = false;

    Aws::String m_obdStandard;
    bool m_obdStandardHasBeenSet = false;

    int m_pidRequestIntervalSeconds{0};
    bool m_pidRequestIntervalSecondsHasBeenSet = false;

    int m_dtcRequestIntervalSeconds{0};
    bool m_dtcRequestIntervalSecondsHasBeenSet = false;

    bool m_useExtendedIds{false};
    bool m_useExtendedIdsHasBeenSet = false;

    bool m_hasTransmissionEcu{false};
    bool m_hasTransmissionEcuHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
