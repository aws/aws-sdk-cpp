/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobSortByOptions.h>
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
      namespace HyperParameterTuningJobSortByOptionsMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        HyperParameterTuningJobSortByOptions GetHyperParameterTuningJobSortByOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return HyperParameterTuningJobSortByOptions::Name;
          }
          else if (hashCode == Status_HASH)
          {
            return HyperParameterTuningJobSortByOptions::Status;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return HyperParameterTuningJobSortByOptions::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterTuningJobSortByOptions>(hashCode);
          }

          return HyperParameterTuningJobSortByOptions::NOT_SET;
        }

        Aws::String GetNameForHyperParameterTuningJobSortByOptions(HyperParameterTuningJobSortByOptions enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterTuningJobSortByOptions::Name:
            return "Name";
          case HyperParameterTuningJobSortByOptions::Status:
            return "Status";
          case HyperParameterTuningJobSortByOptions::CreationTime:
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

      } // namespace HyperParameterTuningJobSortByOptionsMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
