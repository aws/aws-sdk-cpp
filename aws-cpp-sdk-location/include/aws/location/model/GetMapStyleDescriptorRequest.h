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

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
