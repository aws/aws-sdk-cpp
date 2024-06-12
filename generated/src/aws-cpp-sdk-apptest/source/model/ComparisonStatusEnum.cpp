/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/ComparisonStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace ComparisonStatusEnumMapper
      {

        static const int Different_HASH = HashingUtils::HashString("Different");
        static const int Equivalent_HASH = HashingUtils::HashString("Equivalent");
        static const int Equal_HASH = HashingUtils::HashString("Equal");


        ComparisonStatusEnum GetComparisonStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Different_HASH)
          {
            return ComparisonStatusEnum::Different;
          }
          else if (hashCode == Equivalent_HASH)
          {
            return ComparisonStatusEnum::Equivalent;
          }
          else if (hashCode == Equal_HASH)
          {
            return ComparisonStatusEnum::Equal;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComparisonStatusEnum>(hashCode);
          }

          return ComparisonStatusEnum::NOT_SET;
        }

        Aws::String GetNameForComparisonStatusEnum(ComparisonStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case ComparisonStatusEnum::NOT_SET:
            return {};
          case ComparisonStatusEnum::Different:
            return "Different";
          case ComparisonStatusEnum::Equivalent:
            return "Equivalent";
          case ComparisonStatusEnum::Equal:
            return "Equal";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparisonStatusEnumMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
