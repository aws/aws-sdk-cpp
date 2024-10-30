/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/geo-maps/GeoMapsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GeoMaps
{
namespace Model
{

  /**
   */
  class GetTileRequest : public GeoMapsRequest
  {
  public:
    AWS_GEOMAPS_API GetTileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTile"; }

    AWS_GEOMAPS_API Aws::String SerializePayload() const override;

    AWS_GEOMAPS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specifies the desired tile set.</p> <p>Valid Values: <code>raster.satellite |
     * vector.basemap</code> </p>
     */
    inline const Aws::String& GetTileset() const{ return m_tileset; }
    inline bool TilesetHasBeenSet() const { return m_tilesetHasBeenSet; }
    inline void SetTileset(const Aws::String& value) { m_tilesetHasBeenSet = true; m_tileset = value; }
    inline void SetTileset(Aws::String&& value) { m_tilesetHasBeenSet = true; m_tileset = std::move(value); }
    inline void SetTileset(const char* value) { m_tilesetHasBeenSet = true; m_tileset.assign(value); }
    inline GetTileRequest& WithTileset(const Aws::String& value) { SetTileset(value); return *this;}
    inline GetTileRequest& WithTileset(Aws::String&& value) { SetTileset(std::move(value)); return *this;}
    inline GetTileRequest& WithTileset(const char* value) { SetTileset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline const Aws::String& GetZ() const{ return m_z; }
    inline bool ZHasBeenSet() const { return m_zHasBeenSet; }
    inline void SetZ(const Aws::String& value) { m_zHasBeenSet = true; m_z = value; }
    inline void SetZ(Aws::String&& value) { m_zHasBeenSet = true; m_z = std::move(value); }
    inline void SetZ(const char* value) { m_zHasBeenSet = true; m_z.assign(value); }
    inline GetTileRequest& WithZ(const Aws::String& value) { SetZ(value); return *this;}
    inline GetTileRequest& WithZ(Aws::String&& value) { SetZ(std::move(value)); return *this;}
    inline GetTileRequest& WithZ(const char* value) { SetZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The X axis value for the map tile. Must be between 0 and 19.</p>
     */
    inline const Aws::String& GetX() const{ return m_x; }
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }
    inline void SetX(const Aws::String& value) { m_xHasBeenSet = true; m_x = value; }
    inline void SetX(Aws::String&& value) { m_xHasBeenSet = true; m_x = std::move(value); }
    inline void SetX(const char* value) { m_xHasBeenSet = true; m_x.assign(value); }
    inline GetTileRequest& WithX(const Aws::String& value) { SetX(value); return *this;}
    inline GetTileRequest& WithX(Aws::String&& value) { SetX(std::move(value)); return *this;}
    inline GetTileRequest& WithX(const char* value) { SetX(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Y axis value for the map tile.</p>
     */
    inline const Aws::String& GetY() const{ return m_y; }
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }
    inline void SetY(const Aws::String& value) { m_yHasBeenSet = true; m_y = value; }
    inline void SetY(Aws::String&& value) { m_yHasBeenSet = true; m_y = std::move(value); }
    inline void SetY(const char* value) { m_yHasBeenSet = true; m_y.assign(value); }
    inline GetTileRequest& WithY(const Aws::String& value) { SetY(value); return *this;}
    inline GetTileRequest& WithY(Aws::String&& value) { SetY(std::move(value)); return *this;}
    inline GetTileRequest& WithY(const char* value) { SetY(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: The API key to be used for authorization. Either an API key or
     * valid SigV4 signature must be provided when making a request. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline GetTileRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline GetTileRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline GetTileRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Aws::String m_tileset;
    bool m_tilesetHasBeenSet = false;

    Aws::String m_z;
    bool m_zHasBeenSet = false;

    Aws::String m_x;
    bool m_xHasBeenSet = false;

    Aws::String m_y;
    bool m_yHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
