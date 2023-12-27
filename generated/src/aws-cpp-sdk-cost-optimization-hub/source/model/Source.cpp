/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Source.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostOptimizationHub
  {
    namespace Model
    {
      namespace SourceMapper
      {

        static const int ComputeOptimizer_HASH = HashingUtils::HashString("ComputeOptimizer");
        static const int CostExplorer_HASH = HashingUtils::HashString("CostExplorer");


        Source GetSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ComputeOptimizer_HASH)
          {
            return Source::ComputeOptimizer;
          }
          else if (hashCode == CostExplorer_HASH)
          {
            return Source::CostExplorer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Source>(hashCode);
          }

          return Source::NOT_SET;
        }

        Aws::String GetNameForSource(Source enumValue)
        {
          switch(enumValue)
          {
          case Source::NOT_SET:
            return {};
          case Source::ComputeOptimizer:
            return "ComputeOptimizer";
          case Source::CostExplorer:
            return "CostExplorer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceMapper
    } // namespace Model
  } // namespace CostOptimizationHub
} // namespace Aws
