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

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
    /**
     * AWS Regions
     */
    enum class AWS_CORE_API Region
    {
        US_EAST_1,
        US_WEST_1,
        US_WEST_2,
        EU_WEST_1,
        EU_CENTRAL_1,
        AP_SOUTHEAST_1,
        AP_SOUTHEAST_2,
        AP_NORTHEAST_1,
        AP_NORTHEAST_2,
        SA_EAST_1
    };

    namespace RegionMapper
    {
        /**
         * Converts a Region member to a string
         */
        AWS_CORE_API const char* GetRegionName(Region region);
    }

} // namespace Aws

