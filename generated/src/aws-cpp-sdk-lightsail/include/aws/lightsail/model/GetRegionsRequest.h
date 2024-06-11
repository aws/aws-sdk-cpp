﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetRegionsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetRegionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRegions"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A Boolean value indicating whether to also include Availability Zones in your
     * get regions request. Availability Zones are indicated with a letter:
     * <code>us-east-2a</code>.</p>
     */
    inline bool GetIncludeAvailabilityZones() const{ return m_includeAvailabilityZones; }
    inline bool IncludeAvailabilityZonesHasBeenSet() const { return m_includeAvailabilityZonesHasBeenSet; }
    inline void SetIncludeAvailabilityZones(bool value) { m_includeAvailabilityZonesHasBeenSet = true; m_includeAvailabilityZones = value; }
    inline GetRegionsRequest& WithIncludeAvailabilityZones(bool value) { SetIncludeAvailabilityZones(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether to also include Availability Zones for
     * databases in your get regions request. Availability Zones are indicated with a
     * letter (<code>us-east-2a</code>).</p>
     */
    inline bool GetIncludeRelationalDatabaseAvailabilityZones() const{ return m_includeRelationalDatabaseAvailabilityZones; }
    inline bool IncludeRelationalDatabaseAvailabilityZonesHasBeenSet() const { return m_includeRelationalDatabaseAvailabilityZonesHasBeenSet; }
    inline void SetIncludeRelationalDatabaseAvailabilityZones(bool value) { m_includeRelationalDatabaseAvailabilityZonesHasBeenSet = true; m_includeRelationalDatabaseAvailabilityZones = value; }
    inline GetRegionsRequest& WithIncludeRelationalDatabaseAvailabilityZones(bool value) { SetIncludeRelationalDatabaseAvailabilityZones(value); return *this;}
    ///@}
  private:

    bool m_includeAvailabilityZones;
    bool m_includeAvailabilityZonesHasBeenSet = false;

    bool m_includeRelationalDatabaseAvailabilityZones;
    bool m_includeRelationalDatabaseAvailabilityZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
