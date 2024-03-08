/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentFilterName.h>
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
      namespace IntentFilterNameMapper
      {

        static const int IntentName_HASH = HashingUtils::HashString("IntentName");


        IntentFilterName GetIntentFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IntentName_HASH)
          {
            return IntentFilterName::IntentName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntentFilterName>(hashCode);
          }

          return IntentFilterName::NOT_SET;
        }

        Aws::String GetNameForIntentFilterName(IntentFilterName enumValue)
        {
          switch(enumValue)
          {
          case IntentFilterName::NOT_SET:
            return {};
          case IntentFilterName::IntentName:
            return "IntentName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntentFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
