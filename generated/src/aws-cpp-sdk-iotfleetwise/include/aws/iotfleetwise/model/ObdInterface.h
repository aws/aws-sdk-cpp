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
   * <p>A network interface that specifies the On-board diagnostic (OBD) II network
   * protocol.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ObdInterface">AWS
   * API Reference</a></p>
   */
  class ObdInterface
  {
  public:
    AWS_IOTFLEETWISE_API ObdInterface();
    AWS_IOTFLEETWISE_API ObdInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API ObdInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the interface.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the interface.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the interface.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the interface.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the interface.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the interface.</p>
     */
    inline ObdInterface& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the interface.</p>
     */
    inline ObdInterface& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the interface.</p>
     */
    inline ObdInterface& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the message requesting vehicle data.</p>
     */
    inline int GetRequestMessageId() const{ return m_requestMessageId; }

    /**
     * <p>The ID of the message requesting vehicle data.</p>
     */
    inline bool RequestMessageIdHasBeenSet() const { return m_requestMessageIdHasBeenSet; }

    /**
     * <p>The ID of the message requesting vehicle data.</p>
     */
    inline void SetRequestMessageId(int value) { m_requestMessageIdHasBeenSet = true; m_requestMessageId = value; }

    /**
     * <p>The ID of the message requesting vehicle data.</p>
     */
    inline ObdInterface& WithRequestMessageId(int value) { SetRequestMessageId(value); return *this;}


    /**
     * <p>The standard OBD II PID.</p>
     */
    inline const Aws::String& GetObdStandard() const{ return m_obdStandard; }

    /**
     * <p>The standard OBD II PID.</p>
     */
    inline bool ObdStandardHasBeenSet() const { return m_obdStandardHasBeenSet; }

    /**
     * <p>The standard OBD II PID.</p>
     */
    inline void SetObdStandard(const Aws::String& value) { m_obdStandardHasBeenSet = true; m_obdStandard = value; }

    /**
     * <p>The standard OBD II PID.</p>
     */
    inline void SetObdStandard(Aws::String&& value) { m_obdStandardHasBeenSet = true; m_obdStandard = std::move(value); }

    /**
     * <p>The standard OBD II PID.</p>
     */
    inline void SetObdStandard(const char* value) { m_obdStandardHasBeenSet = true; m_obdStandard.assign(value); }

    /**
     * <p>The standard OBD II PID.</p>
     */
    inline ObdInterface& WithObdStandard(const Aws::String& value) { SetObdStandard(value); return *this;}

    /**
     * <p>The standard OBD II PID.</p>
     */
    inline ObdInterface& WithObdStandard(Aws::String&& value) { SetObdStandard(std::move(value)); return *this;}

    /**
     * <p>The standard OBD II PID.</p>
     */
    inline ObdInterface& WithObdStandard(const char* value) { SetObdStandard(value); return *this;}


    /**
     * <p>The maximum number message requests per second.</p>
     */
    inline int GetPidRequestIntervalSeconds() const{ return m_pidRequestIntervalSeconds; }

    /**
     * <p>The maximum number message requests per second.</p>
     */
    inline bool PidRequestIntervalSecondsHasBeenSet() const { return m_pidRequestIntervalSecondsHasBeenSet; }

    /**
     * <p>The maximum number message requests per second.</p>
     */
    inline void SetPidRequestIntervalSeconds(int value) { m_pidRequestIntervalSecondsHasBeenSet = true; m_pidRequestIntervalSeconds = value; }

    /**
     * <p>The maximum number message requests per second.</p>
     */
    inline ObdInterface& WithPidRequestIntervalSeconds(int value) { SetPidRequestIntervalSeconds(value); return *this;}


    /**
     * <p>The maximum number message requests per diagnostic trouble code per
     * second.</p>
     */
    inline int GetDtcRequestIntervalSeconds() const{ return m_dtcRequestIntervalSeconds; }

    /**
     * <p>The maximum number message requests per diagnostic trouble code per
     * second.</p>
     */
    inline bool DtcRequestIntervalSecondsHasBeenSet() const { return m_dtcRequestIntervalSecondsHasBeenSet; }

    /**
     * <p>The maximum number message requests per diagnostic trouble code per
     * second.</p>
     */
    inline void SetDtcRequestIntervalSeconds(int value) { m_dtcRequestIntervalSecondsHasBeenSet = true; m_dtcRequestIntervalSeconds = value; }

    /**
     * <p>The maximum number message requests per diagnostic trouble code per
     * second.</p>
     */
    inline ObdInterface& WithDtcRequestIntervalSeconds(int value) { SetDtcRequestIntervalSeconds(value); return *this;}


    /**
     * <p>Whether to use extended IDs in the message.</p>
     */
    inline bool GetUseExtendedIds() const{ return m_useExtendedIds; }

    /**
     * <p>Whether to use extended IDs in the message.</p>
     */
    inline bool UseExtendedIdsHasBeenSet() const { return m_useExtendedIdsHasBeenSet; }

    /**
     * <p>Whether to use extended IDs in the message.</p>
     */
    inline void SetUseExtendedIds(bool value) { m_useExtendedIdsHasBeenSet = true; m_useExtendedIds = value; }

    /**
     * <p>Whether to use extended IDs in the message.</p>
     */
    inline ObdInterface& WithUseExtendedIds(bool value) { SetUseExtendedIds(value); return *this;}


    /**
     * <p>Whether the vehicle has a transmission control module (TCM).</p>
     */
    inline bool GetHasTransmissionEcu() const{ return m_hasTransmissionEcu; }

    /**
     * <p>Whether the vehicle has a transmission control module (TCM).</p>
     */
    inline bool HasTransmissionEcuHasBeenSet() const { return m_hasTransmissionEcuHasBeenSet; }

    /**
     * <p>Whether the vehicle has a transmission control module (TCM).</p>
     */
    inline void SetHasTransmissionEcu(bool value) { m_hasTransmissionEcuHasBeenSet = true; m_hasTransmissionEcu = value; }

    /**
     * <p>Whether the vehicle has a transmission control module (TCM).</p>
     */
    inline ObdInterface& WithHasTransmissionEcu(bool value) { SetHasTransmissionEcu(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_requestMessageId;
    bool m_requestMessageIdHasBeenSet = false;

    Aws::String m_obdStandard;
    bool m_obdStandardHasBeenSet = false;

    int m_pidRequestIntervalSeconds;
    bool m_pidRequestIntervalSecondsHasBeenSet = false;

    int m_dtcRequestIntervalSeconds;
    bool m_dtcRequestIntervalSecondsHasBeenSet = false;

    bool m_useExtendedIds;
    bool m_useExtendedIdsHasBeenSet = false;

    bool m_hasTransmissionEcu;
    bool m_hasTransmissionEcuHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
