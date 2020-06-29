/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/JobComparator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace JobComparatorMapper
      {

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int GTE_HASH = HashingUtils::HashString("GTE");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int LTE_HASH = HashingUtils::HashString("LTE");
        static const int NE_HASH = HashingUtils::HashString("NE");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");


        JobComparator GetJobComparatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return JobComparator::EQ;
          }
          else if (hashCode == GT_HASH)
          {
            return JobComparator::GT;
          }
          else if (hashCode == GTE_HASH)
          {
            return JobComparator::GTE;
          }
          else if (hashCode == LT_HASH)
          {
            return JobComparator::LT;
          }
          else if (hashCode == LTE_HASH)
          {
            return JobComparator::LTE;
          }
          else if (hashCode == NE_HASH)
          {
            return JobComparator::NE;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return JobComparator::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobComparator>(hashCode);
          }

          return JobComparator::NOT_SET;
        }

        Aws::String GetNameForJobComparator(JobComparator enumValue)
        {
          switch(enumValue)
          {
          case JobComparator::EQ:
            return "EQ";
          case JobComparator::GT:
            return "GT";
          case JobComparator::GTE:
            return "GTE";
          case JobComparator::LT:
            return "LT";
          case JobComparator::LTE:
            return "LTE";
          case JobComparator::NE:
            return "NE";
          case JobComparator::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobComparatorMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
