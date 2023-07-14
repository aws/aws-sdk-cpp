/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ArrayJobDependency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace ArrayJobDependencyMapper
      {

        static const int N_TO_N_HASH = HashingUtils::HashString("N_TO_N");
        static const int SEQUENTIAL_HASH = HashingUtils::HashString("SEQUENTIAL");


        ArrayJobDependency GetArrayJobDependencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == N_TO_N_HASH)
          {
            return ArrayJobDependency::N_TO_N;
          }
          else if (hashCode == SEQUENTIAL_HASH)
          {
            return ArrayJobDependency::SEQUENTIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArrayJobDependency>(hashCode);
          }

          return ArrayJobDependency::NOT_SET;
        }

        Aws::String GetNameForArrayJobDependency(ArrayJobDependency enumValue)
        {
          switch(enumValue)
          {
          case ArrayJobDependency::N_TO_N:
            return "N_TO_N";
          case ArrayJobDependency::SEQUENTIAL:
            return "SEQUENTIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArrayJobDependencyMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
