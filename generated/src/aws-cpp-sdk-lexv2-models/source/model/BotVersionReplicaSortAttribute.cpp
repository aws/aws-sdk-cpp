/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotVersionReplicaSortAttribute.h>
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
      namespace BotVersionReplicaSortAttributeMapper
      {

        static const int BotVersion_HASH = HashingUtils::HashString("BotVersion");


        BotVersionReplicaSortAttribute GetBotVersionReplicaSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotVersion_HASH)
          {
            return BotVersionReplicaSortAttribute::BotVersion;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotVersionReplicaSortAttribute>(hashCode);
          }

          return BotVersionReplicaSortAttribute::NOT_SET;
        }

        Aws::String GetNameForBotVersionReplicaSortAttribute(BotVersionReplicaSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case BotVersionReplicaSortAttribute::NOT_SET:
            return {};
          case BotVersionReplicaSortAttribute::BotVersion:
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

      } // namespace BotVersionReplicaSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
