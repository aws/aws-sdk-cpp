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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about an AWS Direct Connect location.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Location">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API Location
  {
  public:
    Location();
    Location(Aws::Utils::Json::JsonView jsonValue);
    Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code for the location.</p>
     */
    inline const Aws::String& GetLocationCode() const{ return m_locationCode; }

    /**
     * <p>The code for the location.</p>
     */
    inline bool LocationCodeHasBeenSet() const { return m_locationCodeHasBeenSet; }

    /**
     * <p>The code for the location.</p>
     */
    inline void SetLocationCode(const Aws::String& value) { m_locationCodeHasBeenSet = true; m_locationCode = value; }

    /**
     * <p>The code for the location.</p>
     */
    inline void SetLocationCode(Aws::String&& value) { m_locationCodeHasBeenSet = true; m_locationCode = std::move(value); }

    /**
     * <p>The code for the location.</p>
     */
    inline void SetLocationCode(const char* value) { m_locationCodeHasBeenSet = true; m_locationCode.assign(value); }

    /**
     * <p>The code for the location.</p>
     */
    inline Location& WithLocationCode(const Aws::String& value) { SetLocationCode(value); return *this;}

    /**
     * <p>The code for the location.</p>
     */
    inline Location& WithLocationCode(Aws::String&& value) { SetLocationCode(std::move(value)); return *this;}

    /**
     * <p>The code for the location.</p>
     */
    inline Location& WithLocationCode(const char* value) { SetLocationCode(value); return *this;}


    /**
     * <p>The name of the location. This includes the name of the colocation partner
     * and the physical site of the building.</p>
     */
    inline const Aws::String& GetLocationName() const{ return m_locationName; }

    /**
     * <p>The name of the location. This includes the name of the colocation partner
     * and the physical site of the building.</p>
     */
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }

    /**
     * <p>The name of the location. This includes the name of the colocation partner
     * and the physical site of the building.</p>
     */
    inline void SetLocationName(const Aws::String& value) { m_locationNameHasBeenSet = true; m_locationName = value; }

    /**
     * <p>The name of the location. This includes the name of the colocation partner
     * and the physical site of the building.</p>
     */
    inline void SetLocationName(Aws::String&& value) { m_locationNameHasBeenSet = true; m_locationName = std::move(value); }

    /**
     * <p>The name of the location. This includes the name of the colocation partner
     * and the physical site of the building.</p>
     */
    inline void SetLocationName(const char* value) { m_locationNameHasBeenSet = true; m_locationName.assign(value); }

    /**
     * <p>The name of the location. This includes the name of the colocation partner
     * and the physical site of the building.</p>
     */
    inline Location& WithLocationName(const Aws::String& value) { SetLocationName(value); return *this;}

    /**
     * <p>The name of the location. This includes the name of the colocation partner
     * and the physical site of the building.</p>
     */
    inline Location& WithLocationName(Aws::String&& value) { SetLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the location. This includes the name of the colocation partner
     * and the physical site of the building.</p>
     */
    inline Location& WithLocationName(const char* value) { SetLocationName(value); return *this;}


    /**
     * <p>The AWS Region for the location.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region for the location.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region for the location.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region for the location.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region for the location.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region for the location.</p>
     */
    inline Location& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region for the location.</p>
     */
    inline Location& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region for the location.</p>
     */
    inline Location& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The available port speeds for the location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailablePortSpeeds() const{ return m_availablePortSpeeds; }

    /**
     * <p>The available port speeds for the location.</p>
     */
    inline bool AvailablePortSpeedsHasBeenSet() const { return m_availablePortSpeedsHasBeenSet; }

    /**
     * <p>The available port speeds for the location.</p>
     */
    inline void SetAvailablePortSpeeds(const Aws::Vector<Aws::String>& value) { m_availablePortSpeedsHasBeenSet = true; m_availablePortSpeeds = value; }

    /**
     * <p>The available port speeds for the location.</p>
     */
    inline void SetAvailablePortSpeeds(Aws::Vector<Aws::String>&& value) { m_availablePortSpeedsHasBeenSet = true; m_availablePortSpeeds = std::move(value); }

    /**
     * <p>The available port speeds for the location.</p>
     */
    inline Location& WithAvailablePortSpeeds(const Aws::Vector<Aws::String>& value) { SetAvailablePortSpeeds(value); return *this;}

    /**
     * <p>The available port speeds for the location.</p>
     */
    inline Location& WithAvailablePortSpeeds(Aws::Vector<Aws::String>&& value) { SetAvailablePortSpeeds(std::move(value)); return *this;}

    /**
     * <p>The available port speeds for the location.</p>
     */
    inline Location& AddAvailablePortSpeeds(const Aws::String& value) { m_availablePortSpeedsHasBeenSet = true; m_availablePortSpeeds.push_back(value); return *this; }

    /**
     * <p>The available port speeds for the location.</p>
     */
    inline Location& AddAvailablePortSpeeds(Aws::String&& value) { m_availablePortSpeedsHasBeenSet = true; m_availablePortSpeeds.push_back(std::move(value)); return *this; }

    /**
     * <p>The available port speeds for the location.</p>
     */
    inline Location& AddAvailablePortSpeeds(const char* value) { m_availablePortSpeedsHasBeenSet = true; m_availablePortSpeeds.push_back(value); return *this; }

  private:

    Aws::String m_locationCode;
    bool m_locationCodeHasBeenSet;

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::Vector<Aws::String> m_availablePortSpeeds;
    bool m_availablePortSpeedsHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
