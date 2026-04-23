/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{
  enum class AWSRegion
  {
    NOT_SET,
    us_east_1,
    us_west_1,
    us_west_2,
    eu_central_1,
    eu_west_1,
    ap_southeast_1,
    ap_southeast_2,
    ap_northeast_1,
    eu_north_1,
    ap_northeast_3
  };

namespace AWSRegionMapper
{
AWS_COSTANDUSAGEREPORTSERVICE_API AWSRegion GetAWSRegionForName(const Aws::String& name);

AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String GetNameForAWSRegion(AWSRegion value);
} // namespace AWSRegionMapper
} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
