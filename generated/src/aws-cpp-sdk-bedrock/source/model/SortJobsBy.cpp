/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/SortJobsBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace SortJobsByMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortJobsBy GetSortJobsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return SortJobsBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortJobsBy>(hashCode);
          }

          return SortJobsBy::NOT_SET;
        }

        Aws::String GetNameForSortJobsBy(SortJobsBy enumValue)
        {
          switch(enumValue)
          {
          case SortJobsBy::NOT_SET:
            return {};
          case SortJobsBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortJobsByMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
