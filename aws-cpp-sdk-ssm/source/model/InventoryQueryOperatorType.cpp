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

#include <aws/ssm/model/InventoryQueryOperatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace InventoryQueryOperatorTypeMapper
      {

        static const int Equal_HASH = HashingUtils::HashString("Equal");
        static const int NotEqual_HASH = HashingUtils::HashString("NotEqual");
        static const int BeginWith_HASH = HashingUtils::HashString("BeginWith");
        static const int LessThan_HASH = HashingUtils::HashString("LessThan");
        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
        static const int Exists_HASH = HashingUtils::HashString("Exists");


        InventoryQueryOperatorType GetInventoryQueryOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return InventoryQueryOperatorType::Equal;
          }
          else if (hashCode == NotEqual_HASH)
          {
            return InventoryQueryOperatorType::NotEqual;
          }
          else if (hashCode == BeginWith_HASH)
          {
            return InventoryQueryOperatorType::BeginWith;
          }
          else if (hashCode == LessThan_HASH)
          {
            return InventoryQueryOperatorType::LessThan;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return InventoryQueryOperatorType::GreaterThan;
          }
          else if (hashCode == Exists_HASH)
          {
            return InventoryQueryOperatorType::Exists;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InventoryQueryOperatorType>(hashCode);
          }

          return InventoryQueryOperatorType::NOT_SET;
        }

        Aws::String GetNameForInventoryQueryOperatorType(InventoryQueryOperatorType enumValue)
        {
          switch(enumValue)
          {
          case InventoryQueryOperatorType::Equal:
            return "Equal";
          case InventoryQueryOperatorType::NotEqual:
            return "NotEqual";
          case InventoryQueryOperatorType::BeginWith:
            return "BeginWith";
          case InventoryQueryOperatorType::LessThan:
            return "LessThan";
          case InventoryQueryOperatorType::GreaterThan:
            return "GreaterThan";
          case InventoryQueryOperatorType::Exists:
            return "Exists";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InventoryQueryOperatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
