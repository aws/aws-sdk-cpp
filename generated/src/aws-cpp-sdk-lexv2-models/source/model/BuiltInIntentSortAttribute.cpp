/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BuiltInIntentSortAttribute.h>
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
      namespace BuiltInIntentSortAttributeMapper
      {

        static const int IntentSignature_HASH = HashingUtils::HashString("IntentSignature");


        BuiltInIntentSortAttribute GetBuiltInIntentSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IntentSignature_HASH)
          {
            return BuiltInIntentSortAttribute::IntentSignature;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BuiltInIntentSortAttribute>(hashCode);
          }

          return BuiltInIntentSortAttribute::NOT_SET;
        }

        Aws::String GetNameForBuiltInIntentSortAttribute(BuiltInIntentSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case BuiltInIntentSortAttribute::NOT_SET:
            return {};
          case BuiltInIntentSortAttribute::IntentSignature:
            return "IntentSignature";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BuiltInIntentSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
