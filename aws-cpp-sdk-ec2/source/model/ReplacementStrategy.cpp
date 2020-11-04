/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReplacementStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ReplacementStrategyMapper
      {

        static const int launch_HASH = HashingUtils::HashString("launch");


        ReplacementStrategy GetReplacementStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == launch_HASH)
          {
            return ReplacementStrategy::launch;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplacementStrategy>(hashCode);
          }

          return ReplacementStrategy::NOT_SET;
        }

        Aws::String GetNameForReplacementStrategy(ReplacementStrategy enumValue)
        {
          switch(enumValue)
          {
          case ReplacementStrategy::launch:
            return "launch";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplacementStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
