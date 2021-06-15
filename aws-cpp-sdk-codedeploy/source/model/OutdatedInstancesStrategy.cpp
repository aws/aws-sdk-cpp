/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/OutdatedInstancesStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace OutdatedInstancesStrategyMapper
      {

        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");


        OutdatedInstancesStrategy GetOutdatedInstancesStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_HASH)
          {
            return OutdatedInstancesStrategy::UPDATE;
          }
          else if (hashCode == IGNORE_HASH)
          {
            return OutdatedInstancesStrategy::IGNORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutdatedInstancesStrategy>(hashCode);
          }

          return OutdatedInstancesStrategy::NOT_SET;
        }

        Aws::String GetNameForOutdatedInstancesStrategy(OutdatedInstancesStrategy enumValue)
        {
          switch(enumValue)
          {
          case OutdatedInstancesStrategy::UPDATE:
            return "UPDATE";
          case OutdatedInstancesStrategy::IGNORE:
            return "IGNORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutdatedInstancesStrategyMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
