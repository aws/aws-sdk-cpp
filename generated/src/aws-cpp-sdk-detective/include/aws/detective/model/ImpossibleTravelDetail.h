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
    AWS_DETECTIVE_API ImpossibleTravelDetail() = default;
    AWS_DETECTIVE_API ImpossibleTravelDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API ImpossibleTravelDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IP address where the resource was first used in the impossible travel.</p>
     */
    inline const Aws::String& GetStartingIpAddress() const { return m_startingIpAddress; }
    inline bool StartingIpAddressHasBeenSet() const { return m_startingIpAddressHasBeenSet; }
    template<typename StartingIpAddressT = Aws::String>
    void SetStartingIpAddress(StartingIpAddressT&& value) { m_startingIpAddressHasBeenSet = true; m_startingIpAddress = std::forward<StartingIpAddressT>(value); }
    template<typename StartingIpAddressT = Aws::String>
    ImpossibleTravelDetail& WithStartingIpAddress(StartingIpAddressT&& value) { SetStartingIpAddress(std::forward<StartingIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address where the resource was last used in the impossible travel.</p>
     */
    inline const Aws::String& GetEndingIpAddress() const { return m_endingIpAddress; }
    inline bool EndingIpAddressHasBeenSet() const { return m_endingIpAddressHasBeenSet; }
    template<typename EndingIpAddressT = Aws::String>
    void SetEndingIpAddress(EndingIpAddressT&& value) { m_endingIpAddressHasBeenSet = true; m_endingIpAddress = std::forward<EndingIpAddressT>(value); }
    template<typename EndingIpAddressT = Aws::String>
    ImpossibleTravelDetail& WithEndingIpAddress(EndingIpAddressT&& value) { SetEndingIpAddress(std::forward<EndingIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location where the resource was first used in the impossible travel.</p>
     */
    inline const Aws::String& GetStartingLocation() const { return m_startingLocation; }
    inline bool StartingLocationHasBeenSet() const { return m_startingLocationHasBeenSet; }
    template<typename StartingLocationT = Aws::String>
    void SetStartingLocation(StartingLocationT&& value) { m_startingLocationHasBeenSet = true; m_startingLocation = std::forward<StartingLocationT>(value); }
    template<typename StartingLocationT = Aws::String>
    ImpossibleTravelDetail& WithStartingLocation(StartingLocationT&& value) { SetStartingLocation(std::forward<StartingLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location where the resource was last used in the impossible travel.</p>
     */
    inline const Aws::String& GetEndingLocation() const { return m_endingLocation; }
    inline bool EndingLocationHasBeenSet() const { return m_endingLocationHasBeenSet; }
    template<typename EndingLocationT = Aws::String>
    void SetEndingLocation(EndingLocationT&& value) { m_endingLocationHasBeenSet = true; m_endingLocation = std::forward<EndingLocationT>(value); }
    template<typename EndingLocationT = Aws::String>
    ImpossibleTravelDetail& WithEndingLocation(EndingLocationT&& value) { SetEndingLocation(std::forward<EndingLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the time difference between the first and last timestamp the resource
     * was used.</p>
     */
    inline int GetHourlyTimeDelta() const { return m_hourlyTimeDelta; }
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

    int m_hourlyTimeDelta{0};
    bool m_hourlyTimeDeltaHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
