/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyUpdateType.h>
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
      namespace PropertyUpdateTypeMapper
      {

        static constexpr uint32_t UPDATE_HASH = ConstExprHashingUtils::HashString("UPDATE");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");
        static constexpr uint32_t CREATE_HASH = ConstExprHashingUtils::HashString("CREATE");


        PropertyUpdateType GetPropertyUpdateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_HASH)
          {
            return PropertyUpdateType::UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return PropertyUpdateType::DELETE_;
          }
          else if (hashCode == CREATE_HASH)
          {
            return PropertyUpdateType::CREATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropertyUpdateType>(hashCode);
          }

          return PropertyUpdateType::NOT_SET;
        }

        Aws::String GetNameForPropertyUpdateType(PropertyUpdateType enumValue)
        {
          switch(enumValue)
          {
          case PropertyUpdateType::NOT_SET:
            return {};
          case PropertyUpdateType::UPDATE:
            return "UPDATE";
          case PropertyUpdateType::DELETE_:
            return "DELETE";
          case PropertyUpdateType::CREATE:
            return "CREATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PropertyUpdateTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
