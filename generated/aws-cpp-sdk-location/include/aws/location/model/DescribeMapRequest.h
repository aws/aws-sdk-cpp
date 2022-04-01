﻿/**
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
  class AWS_LOCATIONSERVICE_API DescribeMapRequest : public LocationServiceRequest
  {
  public:
    DescribeMapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMap"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the map resource.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }

    /**
     * <p>The name of the map resource.</p>
     */
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }

    /**
     * <p>The name of the map resource.</p>
     */
    inline void SetMapName(const Aws::String& value) { m_mapNameHasBeenSet = true; m_mapName = value; }

    /**
     * <p>The name of the map resource.</p>
     */
    inline void SetMapName(Aws::String&& value) { m_mapNameHasBeenSet = true; m_mapName = std::move(value); }

    /**
     * <p>The name of the map resource.</p>
     */
    inline void SetMapName(const char* value) { m_mapNameHasBeenSet = true; m_mapName.assign(value); }

    /**
     * <p>The name of the map resource.</p>
     */
    inline DescribeMapRequest& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}

    /**
     * <p>The name of the map resource.</p>
     */
    inline DescribeMapRequest& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}

    /**
     * <p>The name of the map resource.</p>
     */
    inline DescribeMapRequest& WithMapName(const char* value) { SetMapName(value); return *this;}

  private:

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
