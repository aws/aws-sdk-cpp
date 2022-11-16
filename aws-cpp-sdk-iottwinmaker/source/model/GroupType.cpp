/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GroupType.h>
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
      namespace GroupTypeMapper
      {

        static const int TABULAR_HASH = HashingUtils::HashString("TABULAR");


        GroupType GetGroupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABULAR_HASH)
          {
            return GroupType::TABULAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupType>(hashCode);
          }

          return GroupType::NOT_SET;
        }

        Aws::String GetNameForGroupType(GroupType enumValue)
        {
          switch(enumValue)
          {
          case GroupType::TABULAR:
            return "TABULAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
