/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RegionName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/AvailabilityZone.h>
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
   * <p>Describes the Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Region">AWS
   * API Reference</a></p>
   */
  class Region
  {
  public:
    AWS_LIGHTSAIL_API Region() = default;
    AWS_LIGHTSAIL_API Region(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Region& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The continent code (<code>NA</code>, meaning North America).</p>
     */
    inline const Aws::String& GetContinentCode() const { return m_continentCode; }
    inline bool ContinentCodeHasBeenSet() const { return m_continentCodeHasBeenSet; }
    template<typename ContinentCodeT = Aws::String>
    void SetContinentCode(ContinentCodeT&& value) { m_continentCodeHasBeenSet = true; m_continentCode = std::forward<ContinentCodeT>(value); }
    template<typename ContinentCodeT = Aws::String>
    Region& WithContinentCode(ContinentCodeT&& value) { SetContinentCode(std::forward<ContinentCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon Web Services Region (<code>This region is
     * recommended to serve users in the eastern United States and eastern
     * Canada</code>).</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Region& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name (<code>Ohio</code>).</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Region& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region name (<code>us-east-2</code>).</p>
     */
    inline RegionName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(RegionName value) { m_nameHasBeenSet = true; m_name = value; }
    inline Region& WithName(RegionName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones. Follows the format <code>us-east-2a</code>
     * (case-sensitive).</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    Region& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = AvailabilityZone>
    Region& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zones for databases. Follows the format
     * <code>us-east-2a</code> (case-sensitive).</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetRelationalDatabaseAvailabilityZones() const { return m_relationalDatabaseAvailabilityZones; }
    inline bool RelationalDatabaseAvailabilityZonesHasBeenSet() const { return m_relationalDatabaseAvailabilityZonesHasBeenSet; }
    template<typename RelationalDatabaseAvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    void SetRelationalDatabaseAvailabilityZones(RelationalDatabaseAvailabilityZonesT&& value) { m_relationalDatabaseAvailabilityZonesHasBeenSet = true; m_relationalDatabaseAvailabilityZones = std::forward<RelationalDatabaseAvailabilityZonesT>(value); }
    template<typename RelationalDatabaseAvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    Region& WithRelationalDatabaseAvailabilityZones(RelationalDatabaseAvailabilityZonesT&& value) { SetRelationalDatabaseAvailabilityZones(std::forward<RelationalDatabaseAvailabilityZonesT>(value)); return *this;}
    template<typename RelationalDatabaseAvailabilityZonesT = AvailabilityZone>
    Region& AddRelationalDatabaseAvailabilityZones(RelationalDatabaseAvailabilityZonesT&& value) { m_relationalDatabaseAvailabilityZonesHasBeenSet = true; m_relationalDatabaseAvailabilityZones.emplace_back(std::forward<RelationalDatabaseAvailabilityZonesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_continentCode;
    bool m_continentCodeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    RegionName m_name{RegionName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<AvailabilityZone> m_relationalDatabaseAvailabilityZones;
    bool m_relationalDatabaseAvailabilityZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
