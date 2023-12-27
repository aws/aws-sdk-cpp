/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DetailedErrorCode.h>
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
      namespace DetailedErrorCodeMapper
      {

        static const int INCOMPATIBLE_COMPUTE_LOCATION_HASH = HashingUtils::HashString("INCOMPATIBLE_COMPUTE_LOCATION");
        static const int INCOMPATIBLE_FORWARDING_CONFIGURATION_HASH = HashingUtils::HashString("INCOMPATIBLE_FORWARDING_CONFIGURATION");


        DetailedErrorCode GetDetailedErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCOMPATIBLE_COMPUTE_LOCATION_HASH)
          {
            return DetailedErrorCode::INCOMPATIBLE_COMPUTE_LOCATION;
          }
          else if (hashCode == INCOMPATIBLE_FORWARDING_CONFIGURATION_HASH)
          {
            return DetailedErrorCode::INCOMPATIBLE_FORWARDING_CONFIGURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetailedErrorCode>(hashCode);
          }

          return DetailedErrorCode::NOT_SET;
        }

        Aws::String GetNameForDetailedErrorCode(DetailedErrorCode enumValue)
        {
          switch(enumValue)
          {
          case DetailedErrorCode::NOT_SET:
            return {};
          case DetailedErrorCode::INCOMPATIBLE_COMPUTE_LOCATION:
            return "INCOMPATIBLE_COMPUTE_LOCATION";
          case DetailedErrorCode::INCOMPATIBLE_FORWARDING_CONFIGURATION:
            return "INCOMPATIBLE_FORWARDING_CONFIGURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetailedErrorCodeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
