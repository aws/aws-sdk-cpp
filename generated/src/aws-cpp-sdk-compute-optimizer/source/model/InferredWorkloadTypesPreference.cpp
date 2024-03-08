/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InferredWorkloadTypesPreference.h>
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
      namespace InferredWorkloadTypesPreferenceMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");


        InferredWorkloadTypesPreference GetInferredWorkloadTypesPreferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return InferredWorkloadTypesPreference::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return InferredWorkloadTypesPreference::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferredWorkloadTypesPreference>(hashCode);
          }

          return InferredWorkloadTypesPreference::NOT_SET;
        }

        Aws::String GetNameForInferredWorkloadTypesPreference(InferredWorkloadTypesPreference enumValue)
        {
          switch(enumValue)
          {
          case InferredWorkloadTypesPreference::NOT_SET:
            return {};
          case InferredWorkloadTypesPreference::Active:
            return "Active";
          case InferredWorkloadTypesPreference::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferredWorkloadTypesPreferenceMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
