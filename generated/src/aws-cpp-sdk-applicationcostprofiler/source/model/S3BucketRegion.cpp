/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/S3BucketRegion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationCostProfiler
  {
    namespace Model
    {
      namespace S3BucketRegionMapper
      {

        static const int ap_east_1_HASH = HashingUtils::HashString("ap-east-1");
        static const int me_south_1_HASH = HashingUtils::HashString("me-south-1");
        static const int eu_south_1_HASH = HashingUtils::HashString("eu-south-1");
        static const int af_south_1_HASH = HashingUtils::HashString("af-south-1");


        S3BucketRegion GetS3BucketRegionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ap_east_1_HASH)
          {
            return S3BucketRegion::ap_east_1;
          }
          else if (hashCode == me_south_1_HASH)
          {
            return S3BucketRegion::me_south_1;
          }
          else if (hashCode == eu_south_1_HASH)
          {
            return S3BucketRegion::eu_south_1;
          }
          else if (hashCode == af_south_1_HASH)
          {
            return S3BucketRegion::af_south_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3BucketRegion>(hashCode);
          }

          return S3BucketRegion::NOT_SET;
        }

        Aws::String GetNameForS3BucketRegion(S3BucketRegion enumValue)
        {
          switch(enumValue)
          {
          case S3BucketRegion::NOT_SET:
            return {};
          case S3BucketRegion::ap_east_1:
            return "ap-east-1";
          case S3BucketRegion::me_south_1:
            return "me-south-1";
          case S3BucketRegion::eu_south_1:
            return "eu-south-1";
          case S3BucketRegion::af_south_1:
            return "af-south-1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3BucketRegionMapper
    } // namespace Model
  } // namespace ApplicationCostProfiler
} // namespace Aws
