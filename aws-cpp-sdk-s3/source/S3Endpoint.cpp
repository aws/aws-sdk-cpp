﻿/*
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

#include <aws/s3/S3Endpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::S3;

namespace Aws
{
namespace S3
{
namespace S3Endpoint
{
  static const int CN_NORTH_HASH = Aws::Utils::HashingUtils::HashString("cn-north-1");
  static const int CN_NORTHWEST_1_HASH = Aws::Utils::HashingUtils::HashString("cn-northwest-1");
  
  static const int US_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-east-1");
  static const int US_GOV_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-west-1");
  static const int FIPS_US_GOV_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("fips-us-gov-west-1");

  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    auto hash = Aws::Utils::HashingUtils::HashString(regionName.c_str());
    
    if(!useDualStack)
    {      
      if(hash == US_EAST_1_HASH)
      {
        return "s3.amazonaws.com";
      }
      else if(hash == US_GOV_WEST_1_HASH)
      {
        return "s3-us-gov-west-1.amazonaws.com";
      }
      else if(hash == FIPS_US_GOV_WEST_1_HASH)
      {
        return "s3-fips-us-gov-west-1.amazonaws.com";
      }
    }
    Aws::StringStream ss;
    ss << "s3" << ".";

    if(useDualStack)
    {
      ss << "dualstack.";
    }

    ss << regionName << ".amazonaws.com";
    
    if (hash == CN_NORTH_HASH || hash == CN_NORTHWEST_1_HASH)
    {
      ss << ".cn"; 
    }
    
    return ss.str();
  }

} // namespace S3Endpoint
} // namespace S3
} // namespace Aws

