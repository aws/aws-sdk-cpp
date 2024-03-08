/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentSortAttribute.h>
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
      namespace IntentSortAttributeMapper
      {

        static const int IntentName_HASH = HashingUtils::HashString("IntentName");
        static const int LastUpdatedDateTime_HASH = HashingUtils::HashString("LastUpdatedDateTime");


        IntentSortAttribute GetIntentSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IntentName_HASH)
          {
            return IntentSortAttribute::IntentName;
          }
          else if (hashCode == LastUpdatedDateTime_HASH)
          {
            return IntentSortAttribute::LastUpdatedDateTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntentSortAttribute>(hashCode);
          }

          return IntentSortAttribute::NOT_SET;
        }

        Aws::String GetNameForIntentSortAttribute(IntentSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case IntentSortAttribute::NOT_SET:
            return {};
          case IntentSortAttribute::IntentName:
            return "IntentName";
          case IntentSortAttribute::LastUpdatedDateTime:
            return "LastUpdatedDateTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntentSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
