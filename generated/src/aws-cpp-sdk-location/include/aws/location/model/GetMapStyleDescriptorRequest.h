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
  class GetMapStyleDescriptorRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapStyleDescriptorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMapStyleDescriptor"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_LOCATIONSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline GetMapStyleDescriptorRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline GetMapStyleDescriptorRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline GetMapStyleDescriptorRequest& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The map resource to retrieve the style descriptor from.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }

    /**
     * <p>The map resource to retrieve the style descriptor from.</p>
     */
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }

    /**
     * <p>The map resource to retrieve the style descriptor from.</p>
     */
    inline void SetMapName(const Aws::String& value) { m_mapNameHasBeenSet = true; m_mapName = value; }

    /**
     * <p>The map resource to retrieve the style descriptor from.</p>
     */
    inline void SetMapName(Aws::String&& value) { m_mapNameHasBeenSet = true; m_mapName = std::move(value); }

    /**
     * <p>The map resource to retrieve the style descriptor from.</p>
     */
    inline void SetMapName(const char* value) { m_mapNameHasBeenSet = true; m_mapName.assign(value); }

    /**
     * <p>The map resource to retrieve the style descriptor from.</p>
     */
    inline GetMapStyleDescriptorRequest& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}

    /**
     * <p>The map resource to retrieve the style descriptor from.</p>
     */
    inline GetMapStyleDescriptorRequest& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}

    /**
     * <p>The map resource to retrieve the style descriptor from.</p>
     */
    inline GetMapStyleDescriptorRequest& WithMapName(const char* value) { SetMapName(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
