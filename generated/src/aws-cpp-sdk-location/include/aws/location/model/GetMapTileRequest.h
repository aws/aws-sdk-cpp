/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class GetMapTileRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapTileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMapTile"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The map resource to retrieve the map tiles from.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }

    /**
     * <p>The map resource to retrieve the map tiles from.</p>
     */
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }

    /**
     * <p>The map resource to retrieve the map tiles from.</p>
     */
    inline void SetMapName(const Aws::String& value) { m_mapNameHasBeenSet = true; m_mapName = value; }

    /**
     * <p>The map resource to retrieve the map tiles from.</p>
     */
    inline void SetMapName(Aws::String&& value) { m_mapNameHasBeenSet = true; m_mapName = std::move(value); }

    /**
     * <p>The map resource to retrieve the map tiles from.</p>
     */
    inline void SetMapName(const char* value) { m_mapNameHasBeenSet = true; m_mapName.assign(value); }

    /**
     * <p>The map resource to retrieve the map tiles from.</p>
     */
    inline GetMapTileRequest& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}

    /**
     * <p>The map resource to retrieve the map tiles from.</p>
     */
    inline GetMapTileRequest& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}

    /**
     * <p>The map resource to retrieve the map tiles from.</p>
     */
    inline GetMapTileRequest& WithMapName(const char* value) { SetMapName(value); return *this;}


    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline const Aws::String& GetX() const{ return m_x; }

    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }

    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline void SetX(const Aws::String& value) { m_xHasBeenSet = true; m_x = value; }

    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline void SetX(Aws::String&& value) { m_xHasBeenSet = true; m_x = std::move(value); }

    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline void SetX(const char* value) { m_xHasBeenSet = true; m_x.assign(value); }

    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline GetMapTileRequest& WithX(const Aws::String& value) { SetX(value); return *this;}

    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline GetMapTileRequest& WithX(Aws::String&& value) { SetX(std::move(value)); return *this;}

    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline GetMapTileRequest& WithX(const char* value) { SetX(value); return *this;}


    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline const Aws::String& GetY() const{ return m_y; }

    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }

    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline void SetY(const Aws::String& value) { m_yHasBeenSet = true; m_y = value; }

    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline void SetY(Aws::String&& value) { m_yHasBeenSet = true; m_y = std::move(value); }

    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline void SetY(const char* value) { m_yHasBeenSet = true; m_y.assign(value); }

    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline GetMapTileRequest& WithY(const Aws::String& value) { SetY(value); return *this;}

    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline GetMapTileRequest& WithY(Aws::String&& value) { SetY(std::move(value)); return *this;}

    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline GetMapTileRequest& WithY(const char* value) { SetY(value); return *this;}


    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline const Aws::String& GetZ() const{ return m_z; }

    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline bool ZHasBeenSet() const { return m_zHasBeenSet; }

    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline void SetZ(const Aws::String& value) { m_zHasBeenSet = true; m_z = value; }

    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline void SetZ(Aws::String&& value) { m_zHasBeenSet = true; m_z = std::move(value); }

    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline void SetZ(const char* value) { m_zHasBeenSet = true; m_z.assign(value); }

    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline GetMapTileRequest& WithZ(const Aws::String& value) { SetZ(value); return *this;}

    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline GetMapTileRequest& WithZ(Aws::String&& value) { SetZ(std::move(value)); return *this;}

    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline GetMapTileRequest& WithZ(const char* value) { SetZ(value); return *this;}

  private:

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;

    Aws::String m_x;
    bool m_xHasBeenSet = false;

    Aws::String m_y;
    bool m_yHasBeenSet = false;

    Aws::String m_z;
    bool m_zHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
