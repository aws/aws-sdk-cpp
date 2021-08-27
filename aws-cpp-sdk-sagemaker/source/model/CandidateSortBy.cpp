/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CandidateSortBy.h>
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
      namespace CandidateSortByMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int FinalObjectiveMetricValue_HASH = HashingUtils::HashString("FinalObjectiveMetricValue");


        CandidateSortBy GetCandidateSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return CandidateSortBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return CandidateSortBy::Status;
          }
          else if (hashCode == FinalObjectiveMetricValue_HASH)
          {
            return CandidateSortBy::FinalObjectiveMetricValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CandidateSortBy>(hashCode);
          }

          return CandidateSortBy::NOT_SET;
        }

        Aws::String GetNameForCandidateSortBy(CandidateSortBy enumValue)
        {
          switch(enumValue)
          {
          case CandidateSortBy::CreationTime:
            return "CreationTime";
          case CandidateSortBy::Status:
            return "Status";
          case CandidateSortBy::FinalObjectiveMetricValue:
            return "FinalObjectiveMetricValue";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CandidateSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
