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
#include <aws/lightsail/model/RegionName.h>
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
   * <p>Describes the resource location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ResourceLocation">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API ResourceLocation
  {
  public:
    ResourceLocation();
    ResourceLocation(Aws::Utils::Json::JsonView jsonValue);
    ResourceLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Availability Zone. Follows the format <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone. Follows the format <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone. Follows the format <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone. Follows the format <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone. Follows the format <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone. Follows the format <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline ResourceLocation& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone. Follows the format <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline ResourceLocation& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone. Follows the format <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline ResourceLocation& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The AWS Region name.</p>
     */
    inline const RegionName& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The AWS Region name.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The AWS Region name.</p>
     */
    inline void SetRegionName(const RegionName& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The AWS Region name.</p>
     */
    inline void SetRegionName(RegionName&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The AWS Region name.</p>
     */
    inline ResourceLocation& WithRegionName(const RegionName& value) { SetRegionName(value); return *this;}

    /**
     * <p>The AWS Region name.</p>
     */
    inline ResourceLocation& WithRegionName(RegionName&& value) { SetRegionName(std::move(value)); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    RegionName m_regionName;
    bool m_regionNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
