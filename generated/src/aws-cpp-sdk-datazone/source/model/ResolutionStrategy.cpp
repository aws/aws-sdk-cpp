/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ResolutionStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace ResolutionStrategyMapper
      {

        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        ResolutionStrategy GetResolutionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_HASH)
          {
            return ResolutionStrategy::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolutionStrategy>(hashCode);
          }

          return ResolutionStrategy::NOT_SET;
        }

        Aws::String GetNameForResolutionStrategy(ResolutionStrategy enumValue)
        {
          switch(enumValue)
          {
          case ResolutionStrategy::NOT_SET:
            return {};
          case ResolutionStrategy::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolutionStrategyMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
