/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/ReferenceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace ReferenceTypeMapper
      {

        static const int Intent_HASH = HashingUtils::HashString("Intent");
        static const int Bot_HASH = HashingUtils::HashString("Bot");
        static const int BotAlias_HASH = HashingUtils::HashString("BotAlias");
        static const int BotChannel_HASH = HashingUtils::HashString("BotChannel");


        ReferenceType GetReferenceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Intent_HASH)
          {
            return ReferenceType::Intent;
          }
          else if (hashCode == Bot_HASH)
          {
            return ReferenceType::Bot;
          }
          else if (hashCode == BotAlias_HASH)
          {
            return ReferenceType::BotAlias;
          }
          else if (hashCode == BotChannel_HASH)
          {
            return ReferenceType::BotChannel;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceType>(hashCode);
          }

          return ReferenceType::NOT_SET;
        }

        Aws::String GetNameForReferenceType(ReferenceType enumValue)
        {
          switch(enumValue)
          {
          case ReferenceType::Intent:
            return "Intent";
          case ReferenceType::Bot:
            return "Bot";
          case ReferenceType::BotAlias:
            return "BotAlias";
          case ReferenceType::BotChannel:
            return "BotChannel";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
