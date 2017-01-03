﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lightsail/model/RegionName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/AvailabilityZone.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the AWS Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Region">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API Region
  {
  public:
    Region();
    Region(const Aws::Utils::Json::JsonValue& jsonValue);
    Region& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The continent code (e.g., <code>NA</code>, meaning North America).</p>
     */
    inline const Aws::String& GetContinentCode() const{ return m_continentCode; }

    /**
     * <p>The continent code (e.g., <code>NA</code>, meaning North America).</p>
     */
    inline void SetContinentCode(const Aws::String& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }

    /**
     * <p>The continent code (e.g., <code>NA</code>, meaning North America).</p>
     */
    inline void SetContinentCode(Aws::String&& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }

    /**
     * <p>The continent code (e.g., <code>NA</code>, meaning North America).</p>
     */
    inline void SetContinentCode(const char* value) { m_continentCodeHasBeenSet = true; m_continentCode.assign(value); }

    /**
     * <p>The continent code (e.g., <code>NA</code>, meaning North America).</p>
     */
    inline Region& WithContinentCode(const Aws::String& value) { SetContinentCode(value); return *this;}

    /**
     * <p>The continent code (e.g., <code>NA</code>, meaning North America).</p>
     */
    inline Region& WithContinentCode(Aws::String&& value) { SetContinentCode(value); return *this;}

    /**
     * <p>The continent code (e.g., <code>NA</code>, meaning North America).</p>
     */
    inline Region& WithContinentCode(const char* value) { SetContinentCode(value); return *this;}

    /**
     * <p>The description of the AWS Region (e.g., <code>This region is recommended to
     * serve users in the eastern United States and eastern Canada</code>).</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the AWS Region (e.g., <code>This region is recommended to
     * serve users in the eastern United States and eastern Canada</code>).</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the AWS Region (e.g., <code>This region is recommended to
     * serve users in the eastern United States and eastern Canada</code>).</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the AWS Region (e.g., <code>This region is recommended to
     * serve users in the eastern United States and eastern Canada</code>).</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the AWS Region (e.g., <code>This region is recommended to
     * serve users in the eastern United States and eastern Canada</code>).</p>
     */
    inline Region& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the AWS Region (e.g., <code>This region is recommended to
     * serve users in the eastern United States and eastern Canada</code>).</p>
     */
    inline Region& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the AWS Region (e.g., <code>This region is recommended to
     * serve users in the eastern United States and eastern Canada</code>).</p>
     */
    inline Region& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The display name (e.g., <code>Virginia</code>).</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name (e.g., <code>Virginia</code>).</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name (e.g., <code>Virginia</code>).</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name (e.g., <code>Virginia</code>).</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name (e.g., <code>Virginia</code>).</p>
     */
    inline Region& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name (e.g., <code>Virginia</code>).</p>
     */
    inline Region& WithDisplayName(Aws::String&& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name (e.g., <code>Virginia</code>).</p>
     */
    inline Region& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

    /**
     * <p>The region name (e.g., <code>us-east-1</code>).</p>
     */
    inline const RegionName& GetName() const{ return m_name; }

    /**
     * <p>The region name (e.g., <code>us-east-1</code>).</p>
     */
    inline void SetName(const RegionName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The region name (e.g., <code>us-east-1</code>).</p>
     */
    inline void SetName(RegionName&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The region name (e.g., <code>us-east-1</code>).</p>
     */
    inline Region& WithName(const RegionName& value) { SetName(value); return *this;}

    /**
     * <p>The region name (e.g., <code>us-east-1</code>).</p>
     */
    inline Region& WithName(RegionName&& value) { SetName(value); return *this;}

    /**
     * <p>The Availability Zones.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones.</p>
     */
    inline Region& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones.</p>
     */
    inline Region& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones.</p>
     */
    inline Region& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones.</p>
     */
    inline Region& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

  private:
    Aws::String m_continentCode;
    bool m_continentCodeHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;
    RegionName m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
