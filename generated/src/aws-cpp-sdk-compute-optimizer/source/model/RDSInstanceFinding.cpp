/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSInstanceFinding.h>
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
      namespace RDSInstanceFindingMapper
      {

        static const int Optimized_HASH = HashingUtils::HashString("Optimized");
        static const int Underprovisioned_HASH = HashingUtils::HashString("Underprovisioned");
        static const int Overprovisioned_HASH = HashingUtils::HashString("Overprovisioned");


        RDSInstanceFinding GetRDSInstanceFindingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Optimized_HASH)
          {
            return RDSInstanceFinding::Optimized;
          }
          else if (hashCode == Underprovisioned_HASH)
          {
            return RDSInstanceFinding::Underprovisioned;
          }
          else if (hashCode == Overprovisioned_HASH)
          {
            return RDSInstanceFinding::Overprovisioned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSInstanceFinding>(hashCode);
          }

          return RDSInstanceFinding::NOT_SET;
        }

        Aws::String GetNameForRDSInstanceFinding(RDSInstanceFinding enumValue)
        {
          switch(enumValue)
          {
          case RDSInstanceFinding::NOT_SET:
            return {};
          case RDSInstanceFinding::Optimized:
            return "Optimized";
          case RDSInstanceFinding::Underprovisioned:
            return "Underprovisioned";
          case RDSInstanceFinding::Overprovisioned:
            return "Overprovisioned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RDSInstanceFindingMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
