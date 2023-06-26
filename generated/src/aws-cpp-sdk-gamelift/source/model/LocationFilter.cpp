/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/LocationFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace LocationFilterMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        LocationFilter GetLocationFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return LocationFilter::AWS;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return LocationFilter::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocationFilter>(hashCode);
          }

          return LocationFilter::NOT_SET;
        }

        Aws::String GetNameForLocationFilter(LocationFilter enumValue)
        {
          switch(enumValue)
          {
          case LocationFilter::AWS:
            return "AWS";
          case LocationFilter::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocationFilterMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
