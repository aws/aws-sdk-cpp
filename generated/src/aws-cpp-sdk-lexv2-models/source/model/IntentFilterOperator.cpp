/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentFilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace IntentFilterOperatorMapper
      {

        static const int CO_HASH = HashingUtils::HashString("CO");
        static const int EQ_HASH = HashingUtils::HashString("EQ");


        IntentFilterOperator GetIntentFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CO_HASH)
          {
            return IntentFilterOperator::CO;
          }
          else if (hashCode == EQ_HASH)
          {
            return IntentFilterOperator::EQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntentFilterOperator>(hashCode);
          }

          return IntentFilterOperator::NOT_SET;
        }

        Aws::String GetNameForIntentFilterOperator(IntentFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case IntentFilterOperator::NOT_SET:
            return {};
          case IntentFilterOperator::CO:
            return "CO";
          case IntentFilterOperator::EQ:
            return "EQ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntentFilterOperatorMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
