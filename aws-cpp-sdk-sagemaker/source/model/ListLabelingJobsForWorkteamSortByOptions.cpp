/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListLabelingJobsForWorkteamSortByOptions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ListLabelingJobsForWorkteamSortByOptionsMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        ListLabelingJobsForWorkteamSortByOptions GetListLabelingJobsForWorkteamSortByOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return ListLabelingJobsForWorkteamSortByOptions::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListLabelingJobsForWorkteamSortByOptions>(hashCode);
          }

          return ListLabelingJobsForWorkteamSortByOptions::NOT_SET;
        }

        Aws::String GetNameForListLabelingJobsForWorkteamSortByOptions(ListLabelingJobsForWorkteamSortByOptions enumValue)
        {
          switch(enumValue)
          {
          case ListLabelingJobsForWorkteamSortByOptions::CreationTime:
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

      } // namespace ListLabelingJobsForWorkteamSortByOptionsMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
