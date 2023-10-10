/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ComputeLocation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ComputeLocationMapper
      {

        static const int EDGE_HASH = HashingUtils::HashString("EDGE");
        static const int CLOUD_HASH = HashingUtils::HashString("CLOUD");


        ComputeLocation GetComputeLocationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EDGE_HASH)
          {
            return ComputeLocation::EDGE;
          }
          else if (hashCode == CLOUD_HASH)
          {
            return ComputeLocation::CLOUD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeLocation>(hashCode);
          }

          return ComputeLocation::NOT_SET;
        }

        Aws::String GetNameForComputeLocation(ComputeLocation enumValue)
        {
          switch(enumValue)
          {
          case ComputeLocation::NOT_SET:
            return {};
          case ComputeLocation::EDGE:
            return "EDGE";
          case ComputeLocation::CLOUD:
            return "CLOUD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeLocationMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
