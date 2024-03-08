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
        static const int launch_before_terminate_HASH = HashingUtils::HashString("launch-before-terminate");


        ReplacementStrategy GetReplacementStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == launch_HASH)
          {
            return ReplacementStrategy::launch;
          }
          else if (hashCode == launch_before_terminate_HASH)
          {
            return ReplacementStrategy::launch_before_terminate;
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
          case ReplacementStrategy::NOT_SET:
            return {};
          case ReplacementStrategy::launch:
            return "launch";
          case ReplacementStrategy::launch_before_terminate:
            return "launch-before-terminate";
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
