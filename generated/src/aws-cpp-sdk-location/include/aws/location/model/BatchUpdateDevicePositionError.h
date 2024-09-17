/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains error details for each device that failed to update its
   * position.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchUpdateDevicePositionError">AWS
   * API Reference</a></p>
   */
  class BatchUpdateDevicePositionError
  {
  public:
    AWS_LOCATIONSERVICE_API BatchUpdateDevicePositionError();
    AWS_LOCATIONSERVICE_API BatchUpdateDevicePositionError(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API BatchUpdateDevicePositionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device associated with the failed location update.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline BatchUpdateDevicePositionError& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline BatchUpdateDevicePositionError& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline BatchUpdateDevicePositionError& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the device position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = value; }
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::move(value); }
    inline BatchUpdateDevicePositionError& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}
    inline BatchUpdateDevicePositionError& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details related to the error code such as the error code and error
     * message.</p>
     */
    inline const BatchItemError& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const BatchItemError& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(BatchItemError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline BatchUpdateDevicePositionError& WithError(const BatchItemError& value) { SetError(value); return *this;}
    inline BatchUpdateDevicePositionError& WithError(BatchItemError&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime;
    bool m_sampleTimeHasBeenSet = false;

    BatchItemError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
