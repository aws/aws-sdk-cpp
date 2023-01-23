/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/BatchItemError.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains error details for each geofence that failed to delete from the
   * geofence collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteGeofenceError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteGeofenceError
  {
  public:
    AWS_LOCATIONSERVICE_API BatchDeleteGeofenceError();
    AWS_LOCATIONSERVICE_API BatchDeleteGeofenceError(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API BatchDeleteGeofenceError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains details associated to the batch error.</p>
     */
    inline const BatchItemError& GetError() const{ return m_error; }

    /**
     * <p>Contains details associated to the batch error.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Contains details associated to the batch error.</p>
     */
    inline void SetError(const BatchItemError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Contains details associated to the batch error.</p>
     */
    inline void SetError(BatchItemError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Contains details associated to the batch error.</p>
     */
    inline BatchDeleteGeofenceError& WithError(const BatchItemError& value) { SetError(value); return *this;}

    /**
     * <p>Contains details associated to the batch error.</p>
     */
    inline BatchDeleteGeofenceError& WithError(BatchItemError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The geofence associated with the error message.</p>
     */
    inline const Aws::String& GetGeofenceId() const{ return m_geofenceId; }

    /**
     * <p>The geofence associated with the error message.</p>
     */
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }

    /**
     * <p>The geofence associated with the error message.</p>
     */
    inline void SetGeofenceId(const Aws::String& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = value; }

    /**
     * <p>The geofence associated with the error message.</p>
     */
    inline void SetGeofenceId(Aws::String&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::move(value); }

    /**
     * <p>The geofence associated with the error message.</p>
     */
    inline void SetGeofenceId(const char* value) { m_geofenceIdHasBeenSet = true; m_geofenceId.assign(value); }

    /**
     * <p>The geofence associated with the error message.</p>
     */
    inline BatchDeleteGeofenceError& WithGeofenceId(const Aws::String& value) { SetGeofenceId(value); return *this;}

    /**
     * <p>The geofence associated with the error message.</p>
     */
    inline BatchDeleteGeofenceError& WithGeofenceId(Aws::String&& value) { SetGeofenceId(std::move(value)); return *this;}

    /**
     * <p>The geofence associated with the error message.</p>
     */
    inline BatchDeleteGeofenceError& WithGeofenceId(const char* value) { SetGeofenceId(value); return *this;}

  private:

    BatchItemError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_geofenceId;
    bool m_geofenceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
