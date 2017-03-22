/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A Boolean value indicating whether to also include Availability Zones in your
     * get regions request. Availability Zones are indicated with a letter: e.g.,
     * <code>us-east-1a</code>.</p>
     */
    inline bool GetIncludeAvailabilityZones() const{ return m_includeAvailabilityZones; }

    /**
     * <p>A Boolean value indicating whether to also include Availability Zones in your
     * get regions request. Availability Zones are indicated with a letter: e.g.,
     * <code>us-east-1a</code>.</p>
     */
    inline void SetIncludeAvailabilityZones(bool value) { m_includeAvailabilityZonesHasBeenSet = true; m_includeAvailabilityZones = value; }

    /**
     * <p>A Boolean value indicating whether to also include Availability Zones in your
     * get regions request. Availability Zones are indicated with a letter: e.g.,
     * <code>us-east-1a</code>.</p>
     */
    inline GetRegionsRequest& WithIncludeAvailabilityZones(bool value) { SetIncludeAvailabilityZones(value); return *this;}

  private:
    bool m_includeAvailabilityZones;
    bool m_includeAvailabilityZonesHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
