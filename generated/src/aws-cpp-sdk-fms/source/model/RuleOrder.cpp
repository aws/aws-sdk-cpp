/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/RuleOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace RuleOrderMapper
      {

        static const int STRICT_ORDER_HASH = HashingUtils::HashString("STRICT_ORDER");
        static const int DEFAULT_ACTION_ORDER_HASH = HashingUtils::HashString("DEFAULT_ACTION_ORDER");


        RuleOrder GetRuleOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRICT_ORDER_HASH)
          {
            return RuleOrder::STRICT_ORDER;
          }
          else if (hashCode == DEFAULT_ACTION_ORDER_HASH)
          {
            return RuleOrder::DEFAULT_ACTION_ORDER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleOrder>(hashCode);
          }

          return RuleOrder::NOT_SET;
        }

        Aws::String GetNameForRuleOrder(RuleOrder enumValue)
        {
          switch(enumValue)
          {
          case RuleOrder::NOT_SET:
            return {};
          case RuleOrder::STRICT_ORDER:
            return "STRICT_ORDER";
          case RuleOrder::DEFAULT_ACTION_ORDER:
            return "DEFAULT_ACTION_ORDER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleOrderMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
