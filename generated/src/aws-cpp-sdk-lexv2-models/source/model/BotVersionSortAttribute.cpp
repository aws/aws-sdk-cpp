/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotVersionSortAttribute.h>
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
      namespace BotVersionSortAttributeMapper
      {

        static const int BotVersion_HASH = HashingUtils::HashString("BotVersion");


        BotVersionSortAttribute GetBotVersionSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotVersion_HASH)
          {
            return BotVersionSortAttribute::BotVersion;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotVersionSortAttribute>(hashCode);
          }

          return BotVersionSortAttribute::NOT_SET;
        }

        Aws::String GetNameForBotVersionSortAttribute(BotVersionSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case BotVersionSortAttribute::NOT_SET:
            return {};
          case BotVersionSortAttribute::BotVersion:
            return "BotVersion";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotVersionSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
