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
namespace Http
{
    class URI;
} //namespace Http
namespace LocationService
{
namespace Model
{

  /**
   */
  class GetMapTileRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapTileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMapTile"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_LOCATIONSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The map resource to retrieve the map tiles from.</p>
     */
    inline const Aws::String& GetMapName() const { return m_mapName; }
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }
    template<typename MapNameT = Aws::String>
    void SetMapName(MapNameT&& value) { m_mapNameHasBeenSet = true; m_mapName = std::forward<MapNameT>(value); }
    template<typename MapNameT = Aws::String>
    GetMapTileRequest& WithMapName(MapNameT&& value) { SetMapName(std::forward<MapNameT>(value)); return *this;}
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
    GetMapTileRequest& WithZ(ZT&& value) { SetZ(std::forward<ZT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline const Aws::String& GetX() const { return m_x; }
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }
    template<typename XT = Aws::String>
    void SetX(XT&& value) { m_xHasBeenSet = true; m_x = std::forward<XT>(value); }
    template<typename XT = Aws::String>
    GetMapTileRequest& WithX(XT&& value) { SetX(std::forward<XT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline const Aws::String& GetY() const { return m_y; }
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }
    template<typename YT = Aws::String>
    void SetY(YT&& value) { m_yHasBeenSet = true; m_y = std::forward<YT>(value); }
    template<typename YT = Aws::String>
    GetMapTileRequest& WithY(YT&& value) { SetY(std::forward<YT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    GetMapTileRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;

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
} // namespace LocationService
} // namespace Aws
