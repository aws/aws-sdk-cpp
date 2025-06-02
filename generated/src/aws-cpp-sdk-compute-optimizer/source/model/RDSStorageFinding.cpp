/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSStorageFinding.h>
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
      namespace RDSStorageFindingMapper
      {

        static const int Optimized_HASH = HashingUtils::HashString("Optimized");
        static const int Underprovisioned_HASH = HashingUtils::HashString("Underprovisioned");
        static const int Overprovisioned_HASH = HashingUtils::HashString("Overprovisioned");
        static const int NotOptimized_HASH = HashingUtils::HashString("NotOptimized");


        RDSStorageFinding GetRDSStorageFindingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Optimized_HASH)
          {
            return RDSStorageFinding::Optimized;
          }
          else if (hashCode == Underprovisioned_HASH)
          {
            return RDSStorageFinding::Underprovisioned;
          }
          else if (hashCode == Overprovisioned_HASH)
          {
            return RDSStorageFinding::Overprovisioned;
          }
          else if (hashCode == NotOptimized_HASH)
          {
            return RDSStorageFinding::NotOptimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSStorageFinding>(hashCode);
          }

          return RDSStorageFinding::NOT_SET;
        }

        Aws::String GetNameForRDSStorageFinding(RDSStorageFinding enumValue)
        {
          switch(enumValue)
          {
          case RDSStorageFinding::NOT_SET:
            return {};
          case RDSStorageFinding::Optimized:
            return "Optimized";
          case RDSStorageFinding::Underprovisioned:
            return "Underprovisioned";
          case RDSStorageFinding::Overprovisioned:
            return "Overprovisioned";
          case RDSStorageFinding::NotOptimized:
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

      } // namespace RDSStorageFindingMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
