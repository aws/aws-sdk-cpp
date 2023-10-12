/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/NestingLevelValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace NestingLevelValueMapper
      {

        static constexpr uint32_t none_HASH = ConstExprHashingUtils::HashString("none");
        static constexpr uint32_t one_HASH = ConstExprHashingUtils::HashString("one");


        NestingLevelValue GetNestingLevelValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return NestingLevelValue::none;
          }
          else if (hashCode == one_HASH)
          {
            return NestingLevelValue::one;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NestingLevelValue>(hashCode);
          }

          return NestingLevelValue::NOT_SET;
        }

        Aws::String GetNameForNestingLevelValue(NestingLevelValue enumValue)
        {
          switch(enumValue)
          {
          case NestingLevelValue::NOT_SET:
            return {};
          case NestingLevelValue::none:
            return "none";
          case NestingLevelValue::one:
            return "one";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NestingLevelValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
