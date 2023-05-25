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
    AWS_GROUNDSTATION_API GroundStationData();
    AWS_GROUNDSTATION_API GroundStationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API GroundStationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>UUID of a ground station.</p>
     */
    inline const Aws::String& GetGroundStationId() const{ return m_groundStationId; }

    /**
     * <p>UUID of a ground station.</p>
     */
    inline bool GroundStationIdHasBeenSet() const { return m_groundStationIdHasBeenSet; }

    /**
     * <p>UUID of a ground station.</p>
     */
    inline void SetGroundStationId(const Aws::String& value) { m_groundStationIdHasBeenSet = true; m_groundStationId = value; }

    /**
     * <p>UUID of a ground station.</p>
     */
    inline void SetGroundStationId(Aws::String&& value) { m_groundStationIdHasBeenSet = true; m_groundStationId = std::move(value); }

    /**
     * <p>UUID of a ground station.</p>
     */
    inline void SetGroundStationId(const char* value) { m_groundStationIdHasBeenSet = true; m_groundStationId.assign(value); }

    /**
     * <p>UUID of a ground station.</p>
     */
    inline GroundStationData& WithGroundStationId(const Aws::String& value) { SetGroundStationId(value); return *this;}

    /**
     * <p>UUID of a ground station.</p>
     */
    inline GroundStationData& WithGroundStationId(Aws::String&& value) { SetGroundStationId(std::move(value)); return *this;}

    /**
     * <p>UUID of a ground station.</p>
     */
    inline GroundStationData& WithGroundStationId(const char* value) { SetGroundStationId(value); return *this;}


    /**
     * <p>Name of a ground station.</p>
     */
    inline const Aws::String& GetGroundStationName() const{ return m_groundStationName; }

    /**
     * <p>Name of a ground station.</p>
     */
    inline bool GroundStationNameHasBeenSet() const { return m_groundStationNameHasBeenSet; }

    /**
     * <p>Name of a ground station.</p>
     */
    inline void SetGroundStationName(const Aws::String& value) { m_groundStationNameHasBeenSet = true; m_groundStationName = value; }

    /**
     * <p>Name of a ground station.</p>
     */
    inline void SetGroundStationName(Aws::String&& value) { m_groundStationNameHasBeenSet = true; m_groundStationName = std::move(value); }

    /**
     * <p>Name of a ground station.</p>
     */
    inline void SetGroundStationName(const char* value) { m_groundStationNameHasBeenSet = true; m_groundStationName.assign(value); }

    /**
     * <p>Name of a ground station.</p>
     */
    inline GroundStationData& WithGroundStationName(const Aws::String& value) { SetGroundStationName(value); return *this;}

    /**
     * <p>Name of a ground station.</p>
     */
    inline GroundStationData& WithGroundStationName(Aws::String&& value) { SetGroundStationName(std::move(value)); return *this;}

    /**
     * <p>Name of a ground station.</p>
     */
    inline GroundStationData& WithGroundStationName(const char* value) { SetGroundStationName(value); return *this;}


    /**
     * <p>Ground station Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Ground station Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Ground station Region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Ground station Region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Ground station Region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>Ground station Region.</p>
     */
    inline GroundStationData& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Ground station Region.</p>
     */
    inline GroundStationData& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Ground station Region.</p>
     */
    inline GroundStationData& WithRegion(const char* value) { SetRegion(value); return *this;}

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
