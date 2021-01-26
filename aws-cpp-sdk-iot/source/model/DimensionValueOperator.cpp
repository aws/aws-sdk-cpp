/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DimensionValueOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace DimensionValueOperatorMapper
      {

        static const int IN_HASH = HashingUtils::HashString("IN");
        static const int NOT_IN_HASH = HashingUtils::HashString("NOT_IN");


        DimensionValueOperator GetDimensionValueOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_HASH)
          {
            return DimensionValueOperator::IN;
          }
          else if (hashCode == NOT_IN_HASH)
          {
            return DimensionValueOperator::NOT_IN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionValueOperator>(hashCode);
          }

          return DimensionValueOperator::NOT_SET;
        }

        Aws::String GetNameForDimensionValueOperator(DimensionValueOperator enumValue)
        {
          switch(enumValue)
          {
          case DimensionValueOperator::IN:
            return "IN";
          case DimensionValueOperator::NOT_IN:
            return "NOT_IN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionValueOperatorMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
