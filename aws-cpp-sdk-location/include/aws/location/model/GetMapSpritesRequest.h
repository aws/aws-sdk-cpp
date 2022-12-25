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
  class GetMapSpritesRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapSpritesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMapSprites"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the sprite ﬁle. Use the following ﬁle names for the sprite
     * sheet:</p> <ul> <li> <p> <code>sprites.png</code> </p> </li> <li> <p>
     * <code>sprites@2x.png</code> for high pixel density displays</p> </li> </ul>
     * <p>For the JSON document containing image offsets. Use the following ﬁle
     * names:</p> <ul> <li> <p> <code>sprites.json</code> </p> </li> <li> <p>
     * <code>sprites@2x.json</code> for high pixel density displays</p> </li> </ul>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>The name of the sprite ﬁle. Use the following ﬁle names for the sprite
     * sheet:</p> <ul> <li> <p> <code>sprites.png</code> </p> </li> <li> <p>
     * <code>sprites@2x.png</code> for high pixel density displays</p> </li> </ul>
     * <p>For the JSON document containing image offsets. Use the following ﬁle
     * names:</p> <ul> <li> <p> <code>sprites.json</code> </p> </li> <li> <p>
     * <code>sprites@2x.json</code> for high pixel density displays</p> </li> </ul>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>The name of the sprite ﬁle. Use the following ﬁle names for the sprite
     * sheet:</p> <ul> <li> <p> <code>sprites.png</code> </p> </li> <li> <p>
     * <code>sprites@2x.png</code> for high pixel density displays</p> </li> </ul>
     * <p>For the JSON document containing image offsets. Use the following ﬁle
     * names:</p> <ul> <li> <p> <code>sprites.json</code> </p> </li> <li> <p>
     * <code>sprites@2x.json</code> for high pixel density displays</p> </li> </ul>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>The name of the sprite ﬁle. Use the following ﬁle names for the sprite
     * sheet:</p> <ul> <li> <p> <code>sprites.png</code> </p> </li> <li> <p>
     * <code>sprites@2x.png</code> for high pixel density displays</p> </li> </ul>
     * <p>For the JSON document containing image offsets. Use the following ﬁle
     * names:</p> <ul> <li> <p> <code>sprites.json</code> </p> </li> <li> <p>
     * <code>sprites@2x.json</code> for high pixel density displays</p> </li> </ul>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>The name of the sprite ﬁle. Use the following ﬁle names for the sprite
     * sheet:</p> <ul> <li> <p> <code>sprites.png</code> </p> </li> <li> <p>
     * <code>sprites@2x.png</code> for high pixel density displays</p> </li> </ul>
     * <p>For the JSON document containing image offsets. Use the following ﬁle
     * names:</p> <ul> <li> <p> <code>sprites.json</code> </p> </li> <li> <p>
     * <code>sprites@2x.json</code> for high pixel density displays</p> </li> </ul>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>The name of the sprite ﬁle. Use the following ﬁle names for the sprite
     * sheet:</p> <ul> <li> <p> <code>sprites.png</code> </p> </li> <li> <p>
     * <code>sprites@2x.png</code> for high pixel density displays</p> </li> </ul>
     * <p>For the JSON document containing image offsets. Use the following ﬁle
     * names:</p> <ul> <li> <p> <code>sprites.json</code> </p> </li> <li> <p>
     * <code>sprites@2x.json</code> for high pixel density displays</p> </li> </ul>
     */
    inline GetMapSpritesRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>The name of the sprite ﬁle. Use the following ﬁle names for the sprite
     * sheet:</p> <ul> <li> <p> <code>sprites.png</code> </p> </li> <li> <p>
     * <code>sprites@2x.png</code> for high pixel density displays</p> </li> </ul>
     * <p>For the JSON document containing image offsets. Use the following ﬁle
     * names:</p> <ul> <li> <p> <code>sprites.json</code> </p> </li> <li> <p>
     * <code>sprites@2x.json</code> for high pixel density displays</p> </li> </ul>
     */
    inline GetMapSpritesRequest& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>The name of the sprite ﬁle. Use the following ﬁle names for the sprite
     * sheet:</p> <ul> <li> <p> <code>sprites.png</code> </p> </li> <li> <p>
     * <code>sprites@2x.png</code> for high pixel density displays</p> </li> </ul>
     * <p>For the JSON document containing image offsets. Use the following ﬁle
     * names:</p> <ul> <li> <p> <code>sprites.json</code> </p> </li> <li> <p>
     * <code>sprites@2x.json</code> for high pixel density displays</p> </li> </ul>
     */
    inline GetMapSpritesRequest& WithFileName(const char* value) { SetFileName(value); return *this;}


    /**
     * <p>The map resource associated with the sprite ﬁle.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }

    /**
     * <p>The map resource associated with the sprite ﬁle.</p>
     */
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }

    /**
     * <p>The map resource associated with the sprite ﬁle.</p>
     */
    inline void SetMapName(const Aws::String& value) { m_mapNameHasBeenSet = true; m_mapName = value; }

    /**
     * <p>The map resource associated with the sprite ﬁle.</p>
     */
    inline void SetMapName(Aws::String&& value) { m_mapNameHasBeenSet = true; m_mapName = std::move(value); }

    /**
     * <p>The map resource associated with the sprite ﬁle.</p>
     */
    inline void SetMapName(const char* value) { m_mapNameHasBeenSet = true; m_mapName.assign(value); }

    /**
     * <p>The map resource associated with the sprite ﬁle.</p>
     */
    inline GetMapSpritesRequest& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}

    /**
     * <p>The map resource associated with the sprite ﬁle.</p>
     */
    inline GetMapSpritesRequest& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}

    /**
     * <p>The map resource associated with the sprite ﬁle.</p>
     */
    inline GetMapSpritesRequest& WithMapName(const char* value) { SetMapName(value); return *this;}

  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
