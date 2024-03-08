/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EBSFinding.h>
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
      namespace EBSFindingMapper
      {

        static const int Optimized_HASH = HashingUtils::HashString("Optimized");
        static const int NotOptimized_HASH = HashingUtils::HashString("NotOptimized");


        EBSFinding GetEBSFindingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Optimized_HASH)
          {
            return EBSFinding::Optimized;
          }
          else if (hashCode == NotOptimized_HASH)
          {
            return EBSFinding::NotOptimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EBSFinding>(hashCode);
          }

          return EBSFinding::NOT_SET;
        }

        Aws::String GetNameForEBSFinding(EBSFinding enumValue)
        {
          switch(enumValue)
          {
          case EBSFinding::NOT_SET:
            return {};
          case EBSFinding::Optimized:
            return "Optimized";
          case EBSFinding::NotOptimized:
            return "NotOptimized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EBSFindingMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
