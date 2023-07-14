/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/ResourceType.h>
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
      namespace ResourceTypeMapper
      {

        static const int BOT_HASH = HashingUtils::HashString("BOT");
        static const int INTENT_HASH = HashingUtils::HashString("INTENT");
        static const int SLOT_TYPE_HASH = HashingUtils::HashString("SLOT_TYPE");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOT_HASH)
          {
            return ResourceType::BOT;
          }
          else if (hashCode == INTENT_HASH)
          {
            return ResourceType::INTENT;
          }
          else if (hashCode == SLOT_TYPE_HASH)
          {
            return ResourceType::SLOT_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::BOT:
            return "BOT";
          case ResourceType::INTENT:
            return "INTENT";
          case ResourceType::SLOT_TYPE:
            return "SLOT_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
