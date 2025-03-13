/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/BatchItemError.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains the tracker resource details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteDevicePositionHistoryError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteDevicePositionHistoryError
  {
  public:
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryError() = default;
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryError(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the device for this position.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    BatchDeleteDevicePositionHistoryError& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BatchItemError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = BatchItemError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = BatchItemError>
    BatchDeleteDevicePositionHistoryError& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    BatchItemError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
