/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ComponentUpdateType.h>
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
      namespace ComponentUpdateTypeMapper
      {

        static const int CREATE_HASH = HashingUtils::HashString("CREATE");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        ComponentUpdateType GetComponentUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_HASH)
          {
            return ComponentUpdateType::CREATE;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return ComponentUpdateType::UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return ComponentUpdateType::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentUpdateType>(hashCode);
          }

          return ComponentUpdateType::NOT_SET;
        }

        Aws::String GetNameForComponentUpdateType(ComponentUpdateType enumValue)
        {
          switch(enumValue)
          {
          case ComponentUpdateType::NOT_SET:
            return {};
          case ComponentUpdateType::CREATE:
            return "CREATE";
          case ComponentUpdateType::UPDATE:
            return "UPDATE";
          case ComponentUpdateType::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentUpdateTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
