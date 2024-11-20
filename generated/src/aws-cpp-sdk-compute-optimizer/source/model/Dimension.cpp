/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/Dimension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace DimensionMapper
      {

        static const int SavingsValue_HASH = HashingUtils::HashString("SavingsValue");
        static const int SavingsValueAfterDiscount_HASH = HashingUtils::HashString("SavingsValueAfterDiscount");


        Dimension GetDimensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SavingsValue_HASH)
          {
            return Dimension::SavingsValue;
          }
          else if (hashCode == SavingsValueAfterDiscount_HASH)
          {
            return Dimension::SavingsValueAfterDiscount;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Dimension>(hashCode);
          }

          return Dimension::NOT_SET;
        }

        Aws::String GetNameForDimension(Dimension enumValue)
        {
          switch(enumValue)
          {
          case Dimension::NOT_SET:
            return {};
          case Dimension::SavingsValue:
            return "SavingsValue";
          case Dimension::SavingsValueAfterDiscount:
            return "SavingsValueAfterDiscount";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
