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
    AWS_DIRECTCONNECT_API Location() = default;
    AWS_DIRECTCONNECT_API Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code for the location.</p>
     */
    inline const Aws::String& GetLocationCode() const { return m_locationCode; }
    inline bool LocationCodeHasBeenSet() const { return m_locationCodeHasBeenSet; }
    template<typename LocationCodeT = Aws::String>
    void SetLocationCode(LocationCodeT&& value) { m_locationCodeHasBeenSet = true; m_locationCode = std::forward<LocationCodeT>(value); }
    template<typename LocationCodeT = Aws::String>
    Location& WithLocationCode(LocationCodeT&& value) { SetLocationCode(std::forward<LocationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the location. This includes the name of the colocation partner
     * and the physical site of the building.</p>
     */
    inline const Aws::String& GetLocationName() const { return m_locationName; }
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }
    template<typename LocationNameT = Aws::String>
    void SetLocationName(LocationNameT&& value) { m_locationNameHasBeenSet = true; m_locationName = std::forward<LocationNameT>(value); }
    template<typename LocationNameT = Aws::String>
    Location& WithLocationName(LocationNameT&& value) { SetLocationName(std::forward<LocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the location.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Location& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The available port speeds for the location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailablePortSpeeds() const { return m_availablePortSpeeds; }
    inline bool AvailablePortSpeedsHasBeenSet() const { return m_availablePortSpeedsHasBeenSet; }
    template<typename AvailablePortSpeedsT = Aws::Vector<Aws::String>>
    void SetAvailablePortSpeeds(AvailablePortSpeedsT&& value) { m_availablePortSpeedsHasBeenSet = true; m_availablePortSpeeds = std::forward<AvailablePortSpeedsT>(value); }
    template<typename AvailablePortSpeedsT = Aws::Vector<Aws::String>>
    Location& WithAvailablePortSpeeds(AvailablePortSpeedsT&& value) { SetAvailablePortSpeeds(std::forward<AvailablePortSpeedsT>(value)); return *this;}
    template<typename AvailablePortSpeedsT = Aws::String>
    Location& AddAvailablePortSpeeds(AvailablePortSpeedsT&& value) { m_availablePortSpeedsHasBeenSet = true; m_availablePortSpeeds.emplace_back(std::forward<AvailablePortSpeedsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service provider for the location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailableProviders() const { return m_availableProviders; }
    inline bool AvailableProvidersHasBeenSet() const { return m_availableProvidersHasBeenSet; }
    template<typename AvailableProvidersT = Aws::Vector<Aws::String>>
    void SetAvailableProviders(AvailableProvidersT&& value) { m_availableProvidersHasBeenSet = true; m_availableProviders = std::forward<AvailableProvidersT>(value); }
    template<typename AvailableProvidersT = Aws::Vector<Aws::String>>
    Location& WithAvailableProviders(AvailableProvidersT&& value) { SetAvailableProviders(std::forward<AvailableProvidersT>(value)); return *this;}
    template<typename AvailableProvidersT = Aws::String>
    Location& AddAvailableProviders(AvailableProvidersT&& value) { m_availableProvidersHasBeenSet = true; m_availableProviders.emplace_back(std::forward<AvailableProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The available MAC Security (MACsec) port speeds for the location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailableMacSecPortSpeeds() const { return m_availableMacSecPortSpeeds; }
    inline bool AvailableMacSecPortSpeedsHasBeenSet() const { return m_availableMacSecPortSpeedsHasBeenSet; }
    template<typename AvailableMacSecPortSpeedsT = Aws::Vector<Aws::String>>
    void SetAvailableMacSecPortSpeeds(AvailableMacSecPortSpeedsT&& value) { m_availableMacSecPortSpeedsHasBeenSet = true; m_availableMacSecPortSpeeds = std::forward<AvailableMacSecPortSpeedsT>(value); }
    template<typename AvailableMacSecPortSpeedsT = Aws::Vector<Aws::String>>
    Location& WithAvailableMacSecPortSpeeds(AvailableMacSecPortSpeedsT&& value) { SetAvailableMacSecPortSpeeds(std::forward<AvailableMacSecPortSpeedsT>(value)); return *this;}
    template<typename AvailableMacSecPortSpeedsT = Aws::String>
    Location& AddAvailableMacSecPortSpeeds(AvailableMacSecPortSpeedsT&& value) { m_availableMacSecPortSpeedsHasBeenSet = true; m_availableMacSecPortSpeeds.emplace_back(std::forward<AvailableMacSecPortSpeedsT>(value)); return *this; }
    ///@}
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
