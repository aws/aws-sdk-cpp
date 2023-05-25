/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SyncResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace SyncResourceTypeMapper
      {

        static const int ENTITY_HASH = HashingUtils::HashString("ENTITY");
        static const int COMPONENT_TYPE_HASH = HashingUtils::HashString("COMPONENT_TYPE");


        SyncResourceType GetSyncResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENTITY_HASH)
          {
            return SyncResourceType::ENTITY;
          }
          else if (hashCode == COMPONENT_TYPE_HASH)
          {
            return SyncResourceType::COMPONENT_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncResourceType>(hashCode);
          }

          return SyncResourceType::NOT_SET;
        }

        Aws::String GetNameForSyncResourceType(SyncResourceType enumValue)
        {
          switch(enumValue)
          {
          case SyncResourceType::ENTITY:
            return "ENTITY";
          case SyncResourceType::COMPONENT_TYPE:
            return "COMPONENT_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SyncResourceTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
