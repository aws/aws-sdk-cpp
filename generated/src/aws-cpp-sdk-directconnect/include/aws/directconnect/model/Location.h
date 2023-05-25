/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about an Direct Connect location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Location">AWS
   * API Reference</a></p>
   */
  class Location
  {
  public:
    AWS_DIRECTCONNECT_API Location();
    AWS_DIRECTCONNECT_API Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The Amazon Web Services Region for the location.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region for the location.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region for the location.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region for the location.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region for the location.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region for the location.</p>
     */
    inline Location& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region for the location.</p>
     */
    inline Location& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region for the location.</p>
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


    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailableProviders() const{ return m_availableProviders; }

    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline bool AvailableProvidersHasBeenSet() const { return m_availableProvidersHasBeenSet; }

    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline void SetAvailableProviders(const Aws::Vector<Aws::String>& value) { m_availableProvidersHasBeenSet = true; m_availableProviders = value; }

    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline void SetAvailableProviders(Aws::Vector<Aws::String>&& value) { m_availableProvidersHasBeenSet = true; m_availableProviders = std::move(value); }

    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline Location& WithAvailableProviders(const Aws::Vector<Aws::String>& value) { SetAvailableProviders(value); return *this;}

    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline Location& WithAvailableProviders(Aws::Vector<Aws::String>&& value) { SetAvailableProviders(std::move(value)); return *this;}

    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline Location& AddAvailableProviders(const Aws::String& value) { m_availableProvidersHasBeenSet = true; m_availableProviders.push_back(value); return *this; }

    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline Location& AddAvailableProviders(Aws::String&& value) { m_availableProvidersHasBeenSet = true; m_availableProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline Location& AddAvailableProviders(const char* value) { m_availableProvidersHasBeenSet = true; m_availableProviders.push_back(value); return *this; }


    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailableMacSecPortSpeeds() const{ return m_availableMacSecPortSpeeds; }

    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline bool AvailableMacSecPortSpeedsHasBeenSet() const { return m_availableMacSecPortSpeedsHasBeenSet; }

    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline void SetAvailableMacSecPortSpeeds(const Aws::Vector<Aws::String>& value) { m_availableMacSecPortSpeedsHasBeenSet = true; m_availableMacSecPortSpeeds = value; }

    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline void SetAvailableMacSecPortSpeeds(Aws::Vector<Aws::String>&& value) { m_availableMacSecPortSpeedsHasBeenSet = true; m_availableMacSecPortSpeeds = std::move(value); }

    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline Location& WithAvailableMacSecPortSpeeds(const Aws::Vector<Aws::String>& value) { SetAvailableMacSecPortSpeeds(value); return *this;}

    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline Location& WithAvailableMacSecPortSpeeds(Aws::Vector<Aws::String>&& value) { SetAvailableMacSecPortSpeeds(std::move(value)); return *this;}

    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline Location& AddAvailableMacSecPortSpeeds(const Aws::String& value) { m_availableMacSecPortSpeedsHasBeenSet = true; m_availableMacSecPortSpeeds.push_back(value); return *this; }

    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline Location& AddAvailableMacSecPortSpeeds(Aws::String&& value) { m_availableMacSecPortSpeedsHasBeenSet = true; m_availableMacSecPortSpeeds.push_back(std::move(value)); return *this; }

    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline Location& AddAvailableMacSecPortSpeeds(const char* value) { m_availableMacSecPortSpeedsHasBeenSet = true; m_availableMacSecPortSpeeds.push_back(value); return *this; }

  private:

    Aws::String m_locationCode;
    bool m_locationCodeHasBeenSet = false;

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<Aws::String> m_availablePortSpeeds;
    bool m_availablePortSpeedsHasBeenSet = false;

    Aws::Vector<Aws::String> m_availableProviders;
    bool m_availableProvidersHasBeenSet = false;

    Aws::Vector<Aws::String> m_availableMacSecPortSpeeds;
    bool m_availableMacSecPortSpeedsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
