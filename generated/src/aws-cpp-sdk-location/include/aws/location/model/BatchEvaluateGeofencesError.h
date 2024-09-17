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
   * <p>Contains error details for each device that failed to evaluate its position
   * against the geofences in a given geofence collection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchEvaluateGeofencesError">AWS
   * API Reference</a></p>
   */
  class BatchEvaluateGeofencesError
  {
  public:
    AWS_LOCATIONSERVICE_API BatchEvaluateGeofencesError();
    AWS_LOCATIONSERVICE_API BatchEvaluateGeofencesError(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API BatchEvaluateGeofencesError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device associated with the position evaluation error.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline BatchEvaluateGeofencesError& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline BatchEvaluateGeofencesError& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline BatchEvaluateGeofencesError& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a timestamp for when the error occurred in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = value; }
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::move(value); }
    inline BatchEvaluateGeofencesError& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}
    inline BatchEvaluateGeofencesError& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details associated to the batch error.</p>
     */
    inline const BatchItemError& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const BatchItemError& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(BatchItemError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline BatchEvaluateGeofencesError& WithError(const BatchItemError& value) { SetError(value); return *this;}
    inline BatchEvaluateGeofencesError& WithError(BatchItemError&& value) { SetError(std::move(value)); return *this;}
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
