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
    AWS_GEOMAPS_API GetTileRequest() = default;

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
    inline const Aws::String& GetTileset() const { return m_tileset; }
    inline bool TilesetHasBeenSet() const { return m_tilesetHasBeenSet; }
    template<typename TilesetT = Aws::String>
    void SetTileset(TilesetT&& value) { m_tilesetHasBeenSet = true; m_tileset = std::forward<TilesetT>(value); }
    template<typename TilesetT = Aws::String>
    GetTileRequest& WithTileset(TilesetT&& value) { SetTileset(std::forward<TilesetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zoom value for the map tile.</p>
     */
    inline const Aws::String& GetZ() const { return m_z; }
    inline bool ZHasBeenSet() const { return m_zHasBeenSet; }
    template<typename ZT = Aws::String>
    void SetZ(ZT&& value) { m_zHasBeenSet = true; m_z = std::forward<ZT>(value); }
    template<typename ZT = Aws::String>
    GetTileRequest& WithZ(ZT&& value) { SetZ(std::forward<ZT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The X axis value for the map tile. Must be between 0 and 19.</p>
     */
    inline const Aws::String& GetX() const { return m_x; }
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }
    template<typename XT = Aws::String>
    void SetX(XT&& value) { m_xHasBeenSet = true; m_x = std::forward<XT>(value); }
    template<typename XT = Aws::String>
    GetTileRequest& WithX(XT&& value) { SetX(std::forward<XT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Y axis value for the map tile.</p>
     */
    inline const Aws::String& GetY() const { return m_y; }
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }
    template<typename YT = Aws::String>
    void SetY(YT&& value) { m_yHasBeenSet = true; m_y = std::forward<YT>(value); }
    template<typename YT = Aws::String>
    GetTileRequest& WithY(YT&& value) { SetY(std::forward<YT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: The API key to be used for authorization. Either an API key or
     * valid SigV4 signature must be provided when making a request. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    GetTileRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
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
