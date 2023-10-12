/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FilterValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace FilterValueTypeMapper
      {

        static constexpr uint32_t COLUMNEXTRACTED_HASH = ConstExprHashingUtils::HashString("COLUMNEXTRACTED");
        static constexpr uint32_t CONSTANT_HASH = ConstExprHashingUtils::HashString("CONSTANT");


        FilterValueType GetFilterValueTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLUMNEXTRACTED_HASH)
          {
            return FilterValueType::COLUMNEXTRACTED;
          }
          else if (hashCode == CONSTANT_HASH)
          {
            return FilterValueType::CONSTANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterValueType>(hashCode);
          }

          return FilterValueType::NOT_SET;
        }

        Aws::String GetNameForFilterValueType(FilterValueType enumValue)
        {
          switch(enumValue)
          {
          case FilterValueType::NOT_SET:
            return {};
          case FilterValueType::COLUMNEXTRACTED:
            return "COLUMNEXTRACTED";
          case FilterValueType::CONSTANT:
            return "CONSTANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterValueTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
