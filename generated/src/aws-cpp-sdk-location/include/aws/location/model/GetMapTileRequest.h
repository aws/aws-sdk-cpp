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
    AWS_LOCATIONSERVICE_API GetMapTileRequest();

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
    inline const Aws::String& GetMapName() const{ return m_mapName; }
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }
    inline void SetMapName(const Aws::String& value) { m_mapNameHasBeenSet = true; m_mapName = value; }
    inline void SetMapName(Aws::String&& value) { m_mapNameHasBeenSet = true; m_mapName = std::move(value); }
    inline void SetMapName(const char* value) { m_mapNameHasBeenSet = true; m_mapName.assign(value); }
    inline GetMapTileRequest& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}
    inline GetMapTileRequest& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}
    inline GetMapTileRequest& WithMapName(const char* value) { SetMapName(value); return *this;}
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
    inline GetMapTileRequest& WithZ(const Aws::String& value) { SetZ(value); return *this;}
    inline GetMapTileRequest& WithZ(Aws::String&& value) { SetZ(std::move(value)); return *this;}
    inline GetMapTileRequest& WithZ(const char* value) { SetZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The X axis value for the map tile.</p>
     */
    inline const Aws::String& GetX() const{ return m_x; }
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }
    inline void SetX(const Aws::String& value) { m_xHasBeenSet = true; m_x = value; }
    inline void SetX(Aws::String&& value) { m_xHasBeenSet = true; m_x = std::move(value); }
    inline void SetX(const char* value) { m_xHasBeenSet = true; m_x.assign(value); }
    inline GetMapTileRequest& WithX(const Aws::String& value) { SetX(value); return *this;}
    inline GetMapTileRequest& WithX(Aws::String&& value) { SetX(std::move(value)); return *this;}
    inline GetMapTileRequest& WithX(const char* value) { SetX(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Y axis value for the map tile. </p>
     */
    inline const Aws::String& GetY() const{ return m_y; }
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }
    inline void SetY(const Aws::String& value) { m_yHasBeenSet = true; m_y = value; }
    inline void SetY(Aws::String&& value) { m_yHasBeenSet = true; m_y = std::move(value); }
    inline void SetY(const char* value) { m_yHasBeenSet = true; m_y.assign(value); }
    inline GetMapTileRequest& WithY(const Aws::String& value) { SetY(value); return *this;}
    inline GetMapTileRequest& WithY(Aws::String&& value) { SetY(std::move(value)); return *this;}
    inline GetMapTileRequest& WithY(const char* value) { SetY(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline GetMapTileRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline GetMapTileRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline GetMapTileRequest& WithKey(const char* value) { SetKey(value); return *this;}
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
