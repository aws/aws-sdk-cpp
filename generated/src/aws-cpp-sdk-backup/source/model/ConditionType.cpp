/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ConditionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace ConditionTypeMapper
      {

        static constexpr uint32_t STRINGEQUALS_HASH = ConstExprHashingUtils::HashString("STRINGEQUALS");


        ConditionType GetConditionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRINGEQUALS_HASH)
          {
            return ConditionType::STRINGEQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConditionType>(hashCode);
          }

          return ConditionType::NOT_SET;
        }

        Aws::String GetNameForConditionType(ConditionType enumValue)
        {
          switch(enumValue)
          {
          case ConditionType::NOT_SET:
            return {};
          case ConditionType::STRINGEQUALS:
            return "STRINGEQUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionTypeMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
