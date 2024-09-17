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

        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int CREATE_HASH = HashingUtils::HashString("CREATE");
        static const int RESET_VALUE_HASH = HashingUtils::HashString("RESET_VALUE");


        PropertyUpdateType GetPropertyUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == RESET_VALUE_HASH)
          {
            return PropertyUpdateType::RESET_VALUE;
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
          case PropertyUpdateType::RESET_VALUE:
            return "RESET_VALUE";
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
