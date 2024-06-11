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
    AWS_LIGHTSAIL_API AvailabilityZone();
    AWS_LIGHTSAIL_API AvailabilityZone(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AvailabilityZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline const Aws::String& GetZoneName() const{ return m_zoneName; }
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }
    inline void SetZoneName(const Aws::String& value) { m_zoneNameHasBeenSet = true; m_zoneName = value; }
    inline void SetZoneName(Aws::String&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::move(value); }
    inline void SetZoneName(const char* value) { m_zoneNameHasBeenSet = true; m_zoneName.assign(value); }
    inline AvailabilityZone& WithZoneName(const Aws::String& value) { SetZoneName(value); return *this;}
    inline AvailabilityZone& WithZoneName(Aws::String&& value) { SetZoneName(std::move(value)); return *this;}
    inline AvailabilityZone& WithZoneName(const char* value) { SetZoneName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline AvailabilityZone& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline AvailabilityZone& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline AvailabilityZone& WithState(const char* value) { SetState(value); return *this;}
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
