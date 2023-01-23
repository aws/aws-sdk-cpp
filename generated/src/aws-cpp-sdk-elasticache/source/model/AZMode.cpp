/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/AZMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace AZModeMapper
      {

        static const int single_az_HASH = HashingUtils::HashString("single-az");
        static const int cross_az_HASH = HashingUtils::HashString("cross-az");


        AZMode GetAZModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == single_az_HASH)
          {
            return AZMode::single_az;
          }
          else if (hashCode == cross_az_HASH)
          {
            return AZMode::cross_az;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AZMode>(hashCode);
          }

          return AZMode::NOT_SET;
        }

        Aws::String GetNameForAZMode(AZMode enumValue)
        {
          switch(enumValue)
          {
          case AZMode::single_az:
            return "single-az";
          case AZMode::cross_az:
            return "cross-az";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AZModeMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
