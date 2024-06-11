/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Contains information on unusual and impossible travel in an
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ImpossibleTravelDetail">AWS
   * API Reference</a></p>
   */
  class ImpossibleTravelDetail
  {
  public:
    AWS_DETECTIVE_API ImpossibleTravelDetail();
    AWS_DETECTIVE_API ImpossibleTravelDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API ImpossibleTravelDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IP address where the resource was first used in the impossible travel.</p>
     */
    inline const Aws::String& GetStartingIpAddress() const{ return m_startingIpAddress; }
    inline bool StartingIpAddressHasBeenSet() const { return m_startingIpAddressHasBeenSet; }
    inline void SetStartingIpAddress(const Aws::String& value) { m_startingIpAddressHasBeenSet = true; m_startingIpAddress = value; }
    inline void SetStartingIpAddress(Aws::String&& value) { m_startingIpAddressHasBeenSet = true; m_startingIpAddress = std::move(value); }
    inline void SetStartingIpAddress(const char* value) { m_startingIpAddressHasBeenSet = true; m_startingIpAddress.assign(value); }
    inline ImpossibleTravelDetail& WithStartingIpAddress(const Aws::String& value) { SetStartingIpAddress(value); return *this;}
    inline ImpossibleTravelDetail& WithStartingIpAddress(Aws::String&& value) { SetStartingIpAddress(std::move(value)); return *this;}
    inline ImpossibleTravelDetail& WithStartingIpAddress(const char* value) { SetStartingIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address where the resource was last used in the impossible travel.</p>
     */
    inline const Aws::String& GetEndingIpAddress() const{ return m_endingIpAddress; }
    inline bool EndingIpAddressHasBeenSet() const { return m_endingIpAddressHasBeenSet; }
    inline void SetEndingIpAddress(const Aws::String& value) { m_endingIpAddressHasBeenSet = true; m_endingIpAddress = value; }
    inline void SetEndingIpAddress(Aws::String&& value) { m_endingIpAddressHasBeenSet = true; m_endingIpAddress = std::move(value); }
    inline void SetEndingIpAddress(const char* value) { m_endingIpAddressHasBeenSet = true; m_endingIpAddress.assign(value); }
    inline ImpossibleTravelDetail& WithEndingIpAddress(const Aws::String& value) { SetEndingIpAddress(value); return *this;}
    inline ImpossibleTravelDetail& WithEndingIpAddress(Aws::String&& value) { SetEndingIpAddress(std::move(value)); return *this;}
    inline ImpossibleTravelDetail& WithEndingIpAddress(const char* value) { SetEndingIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location where the resource was first used in the impossible travel.</p>
     */
    inline const Aws::String& GetStartingLocation() const{ return m_startingLocation; }
    inline bool StartingLocationHasBeenSet() const { return m_startingLocationHasBeenSet; }
    inline void SetStartingLocation(const Aws::String& value) { m_startingLocationHasBeenSet = true; m_startingLocation = value; }
    inline void SetStartingLocation(Aws::String&& value) { m_startingLocationHasBeenSet = true; m_startingLocation = std::move(value); }
    inline void SetStartingLocation(const char* value) { m_startingLocationHasBeenSet = true; m_startingLocation.assign(value); }
    inline ImpossibleTravelDetail& WithStartingLocation(const Aws::String& value) { SetStartingLocation(value); return *this;}
    inline ImpossibleTravelDetail& WithStartingLocation(Aws::String&& value) { SetStartingLocation(std::move(value)); return *this;}
    inline ImpossibleTravelDetail& WithStartingLocation(const char* value) { SetStartingLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location where the resource was last used in the impossible travel.</p>
     */
    inline const Aws::String& GetEndingLocation() const{ return m_endingLocation; }
    inline bool EndingLocationHasBeenSet() const { return m_endingLocationHasBeenSet; }
    inline void SetEndingLocation(const Aws::String& value) { m_endingLocationHasBeenSet = true; m_endingLocation = value; }
    inline void SetEndingLocation(Aws::String&& value) { m_endingLocationHasBeenSet = true; m_endingLocation = std::move(value); }
    inline void SetEndingLocation(const char* value) { m_endingLocationHasBeenSet = true; m_endingLocation.assign(value); }
    inline ImpossibleTravelDetail& WithEndingLocation(const Aws::String& value) { SetEndingLocation(value); return *this;}
    inline ImpossibleTravelDetail& WithEndingLocation(Aws::String&& value) { SetEndingLocation(std::move(value)); return *this;}
    inline ImpossibleTravelDetail& WithEndingLocation(const char* value) { SetEndingLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the time difference between the first and last timestamp the resource
     * was used.</p>
     */
    inline int GetHourlyTimeDelta() const{ return m_hourlyTimeDelta; }
    inline bool HourlyTimeDeltaHasBeenSet() const { return m_hourlyTimeDeltaHasBeenSet; }
    inline void SetHourlyTimeDelta(int value) { m_hourlyTimeDeltaHasBeenSet = true; m_hourlyTimeDelta = value; }
    inline ImpossibleTravelDetail& WithHourlyTimeDelta(int value) { SetHourlyTimeDelta(value); return *this;}
    ///@}
  private:

    Aws::String m_startingIpAddress;
    bool m_startingIpAddressHasBeenSet = false;

    Aws::String m_endingIpAddress;
    bool m_endingIpAddressHasBeenSet = false;

    Aws::String m_startingLocation;
    bool m_startingLocationHasBeenSet = false;

    Aws::String m_endingLocation;
    bool m_endingLocationHasBeenSet = false;

    int m_hourlyTimeDelta;
    bool m_hourlyTimeDeltaHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
