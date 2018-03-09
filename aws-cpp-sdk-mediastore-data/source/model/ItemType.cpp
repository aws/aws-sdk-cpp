﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediastore-data/model/ItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaStoreData
  {
    namespace Model
    {
      namespace ItemTypeMapper
      {

        static const int OBJECT_HASH = HashingUtils::HashString("OBJECT");
        static const int FOLDER_HASH = HashingUtils::HashString("FOLDER");


        ItemType GetItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OBJECT_HASH)
          {
            return ItemType::OBJECT;
          }
          else if (hashCode == FOLDER_HASH)
          {
            return ItemType::FOLDER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ItemType>(hashCode);
          }

          return ItemType::NOT_SET;
        }

        Aws::String GetNameForItemType(ItemType enumValue)
        {
          switch(enumValue)
          {
          case ItemType::OBJECT:
            return "OBJECT";
          case ItemType::FOLDER:
            return "FOLDER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ItemTypeMapper
    } // namespace Model
  } // namespace MediaStoreData
} // namespace Aws
