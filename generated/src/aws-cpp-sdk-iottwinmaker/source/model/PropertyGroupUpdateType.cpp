/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyGroupUpdateType.h>
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
      namespace PropertyGroupUpdateTypeMapper
      {

        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int CREATE_HASH = HashingUtils::HashString("CREATE");


        PropertyGroupUpdateType GetPropertyGroupUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_HASH)
          {
            return PropertyGroupUpdateType::UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return PropertyGroupUpdateType::DELETE_;
          }
          else if (hashCode == CREATE_HASH)
          {
            return PropertyGroupUpdateType::CREATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropertyGroupUpdateType>(hashCode);
          }

          return PropertyGroupUpdateType::NOT_SET;
        }

        Aws::String GetNameForPropertyGroupUpdateType(PropertyGroupUpdateType enumValue)
        {
          switch(enumValue)
          {
          case PropertyGroupUpdateType::UPDATE:
            return "UPDATE";
          case PropertyGroupUpdateType::DELETE_:
            return "DELETE";
          case PropertyGroupUpdateType::CREATE:
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

      } // namespace PropertyGroupUpdateTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
