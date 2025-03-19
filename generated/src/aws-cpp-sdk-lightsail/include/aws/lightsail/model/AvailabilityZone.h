/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an Availability Zone. This is returned only as part of a
   * <code>GetRegions</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AvailabilityZone
  {
  public:
    AWS_LIGHTSAIL_API AvailabilityZone() = default;
    AWS_LIGHTSAIL_API AvailabilityZone(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AvailabilityZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline const Aws::String& GetZoneName() const { return m_zoneName; }
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }
    template<typename ZoneNameT = Aws::String>
    void SetZoneName(ZoneNameT&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::forward<ZoneNameT>(value); }
    template<typename ZoneNameT = Aws::String>
    AvailabilityZone& WithZoneName(ZoneNameT&& value) { SetZoneName(std::forward<ZoneNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    AvailabilityZone& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
