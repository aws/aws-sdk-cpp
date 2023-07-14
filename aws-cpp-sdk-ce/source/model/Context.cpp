/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Context.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace ContextMapper
      {

        static const int COST_AND_USAGE_HASH = HashingUtils::HashString("COST_AND_USAGE");
        static const int RESERVATIONS_HASH = HashingUtils::HashString("RESERVATIONS");
        static const int SAVINGS_PLANS_HASH = HashingUtils::HashString("SAVINGS_PLANS");


        Context GetContextForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COST_AND_USAGE_HASH)
          {
            return Context::COST_AND_USAGE;
          }
          else if (hashCode == RESERVATIONS_HASH)
          {
            return Context::RESERVATIONS;
          }
          else if (hashCode == SAVINGS_PLANS_HASH)
          {
            return Context::SAVINGS_PLANS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Context>(hashCode);
          }

          return Context::NOT_SET;
        }

        Aws::String GetNameForContext(Context enumValue)
        {
          switch(enumValue)
          {
          case Context::COST_AND_USAGE:
            return "COST_AND_USAGE";
          case Context::RESERVATIONS:
            return "RESERVATIONS";
          case Context::SAVINGS_PLANS:
            return "SAVINGS_PLANS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContextMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
