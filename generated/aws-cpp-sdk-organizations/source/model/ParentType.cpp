/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ParentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace ParentTypeMapper
      {

        static const int ROOT_HASH = HashingUtils::HashString("ROOT");
        static const int ORGANIZATIONAL_UNIT_HASH = HashingUtils::HashString("ORGANIZATIONAL_UNIT");


        ParentType GetParentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROOT_HASH)
          {
            return ParentType::ROOT;
          }
          else if (hashCode == ORGANIZATIONAL_UNIT_HASH)
          {
            return ParentType::ORGANIZATIONAL_UNIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParentType>(hashCode);
          }

          return ParentType::NOT_SET;
        }

        Aws::String GetNameForParentType(ParentType enumValue)
        {
          switch(enumValue)
          {
          case ParentType::ROOT:
            return "ROOT";
          case ParentType::ORGANIZATIONAL_UNIT:
            return "ORGANIZATIONAL_UNIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParentTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
