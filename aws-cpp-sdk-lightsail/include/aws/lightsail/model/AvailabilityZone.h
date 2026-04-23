/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Describes an Availability Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API AvailabilityZone
  {
  public:
    AvailabilityZone();
    AvailabilityZone(Aws::Utils::Json::JsonView jsonValue);
    AvailabilityZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline const Aws::String& GetZoneName() const{ return m_zoneName; }

    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }

    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline void SetZoneName(const Aws::String& value) { m_zoneNameHasBeenSet = true; m_zoneName = value; }

    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline void SetZoneName(Aws::String&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::move(value); }

    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline void SetZoneName(const char* value) { m_zoneNameHasBeenSet = true; m_zoneName.assign(value); }

    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline AvailabilityZone& WithZoneName(const Aws::String& value) { SetZoneName(value); return *this;}

    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline AvailabilityZone& WithZoneName(Aws::String&& value) { SetZoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone. The format is <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline AvailabilityZone& WithZoneName(const char* value) { SetZoneName(value); return *this;}


    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
