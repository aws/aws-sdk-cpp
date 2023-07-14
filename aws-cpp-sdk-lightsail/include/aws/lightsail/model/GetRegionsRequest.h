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
  class AWS_LIGHTSAIL_API GetRegionsRequest : public LightsailRequest
  {
  public:
    GetRegionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRegions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A Boolean value indicating whether to also include Availability Zones in your
     * get regions request. Availability Zones are indicated with a letter: e.g.,
     * <code>us-east-2a</code>.</p>
     */
    inline bool GetIncludeAvailabilityZones() const{ return m_includeAvailabilityZones; }

    /**
     * <p>A Boolean value indicating whether to also include Availability Zones in your
     * get regions request. Availability Zones are indicated with a letter: e.g.,
     * <code>us-east-2a</code>.</p>
     */
    inline bool IncludeAvailabilityZonesHasBeenSet() const { return m_includeAvailabilityZonesHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether to also include Availability Zones in your
     * get regions request. Availability Zones are indicated with a letter: e.g.,
     * <code>us-east-2a</code>.</p>
     */
    inline void SetIncludeAvailabilityZones(bool value) { m_includeAvailabilityZonesHasBeenSet = true; m_includeAvailabilityZones = value; }

    /**
     * <p>A Boolean value indicating whether to also include Availability Zones in your
     * get regions request. Availability Zones are indicated with a letter: e.g.,
     * <code>us-east-2a</code>.</p>
     */
    inline GetRegionsRequest& WithIncludeAvailabilityZones(bool value) { SetIncludeAvailabilityZones(value); return *this;}


    /**
     * <p>A Boolean value indicating whether to also include Availability Zones for
     * databases in your get regions request. Availability Zones are indicated with a
     * letter (e.g., <code>us-east-2a</code>).</p>
     */
    inline bool GetIncludeRelationalDatabaseAvailabilityZones() const{ return m_includeRelationalDatabaseAvailabilityZones; }

    /**
     * <p>A Boolean value indicating whether to also include Availability Zones for
     * databases in your get regions request. Availability Zones are indicated with a
     * letter (e.g., <code>us-east-2a</code>).</p>
     */
    inline bool IncludeRelationalDatabaseAvailabilityZonesHasBeenSet() const { return m_includeRelationalDatabaseAvailabilityZonesHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether to also include Availability Zones for
     * databases in your get regions request. Availability Zones are indicated with a
     * letter (e.g., <code>us-east-2a</code>).</p>
     */
    inline void SetIncludeRelationalDatabaseAvailabilityZones(bool value) { m_includeRelationalDatabaseAvailabilityZonesHasBeenSet = true; m_includeRelationalDatabaseAvailabilityZones = value; }

    /**
     * <p>A Boolean value indicating whether to also include Availability Zones for
     * databases in your get regions request. Availability Zones are indicated with a
     * letter (e.g., <code>us-east-2a</code>).</p>
     */
    inline GetRegionsRequest& WithIncludeRelationalDatabaseAvailabilityZones(bool value) { SetIncludeRelationalDatabaseAvailabilityZones(value); return *this;}

  private:

    bool m_includeAvailabilityZones;
    bool m_includeAvailabilityZonesHasBeenSet;

    bool m_includeRelationalDatabaseAvailabilityZones;
    bool m_includeRelationalDatabaseAvailabilityZonesHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
