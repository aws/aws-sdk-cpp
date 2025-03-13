/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about the ground station data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GroundStationData">AWS
   * API Reference</a></p>
   */
  class GroundStationData
  {
  public:
    AWS_GROUNDSTATION_API GroundStationData() = default;
    AWS_GROUNDSTATION_API GroundStationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API GroundStationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>UUID of a ground station.</p>
     */
    inline const Aws::String& GetGroundStationId() const { return m_groundStationId; }
    inline bool GroundStationIdHasBeenSet() const { return m_groundStationIdHasBeenSet; }
    template<typename GroundStationIdT = Aws::String>
    void SetGroundStationId(GroundStationIdT&& value) { m_groundStationIdHasBeenSet = true; m_groundStationId = std::forward<GroundStationIdT>(value); }
    template<typename GroundStationIdT = Aws::String>
    GroundStationData& WithGroundStationId(GroundStationIdT&& value) { SetGroundStationId(std::forward<GroundStationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a ground station.</p>
     */
    inline const Aws::String& GetGroundStationName() const { return m_groundStationName; }
    inline bool GroundStationNameHasBeenSet() const { return m_groundStationNameHasBeenSet; }
    template<typename GroundStationNameT = Aws::String>
    void SetGroundStationName(GroundStationNameT&& value) { m_groundStationNameHasBeenSet = true; m_groundStationName = std::forward<GroundStationNameT>(value); }
    template<typename GroundStationNameT = Aws::String>
    GroundStationData& WithGroundStationName(GroundStationNameT&& value) { SetGroundStationName(std::forward<GroundStationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ground station Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GroundStationData& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groundStationId;
    bool m_groundStationIdHasBeenSet = false;

    Aws::String m_groundStationName;
    bool m_groundStationNameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
