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

        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t GTE_HASH = ConstExprHashingUtils::HashString("GTE");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LTE_HASH = ConstExprHashingUtils::HashString("LTE");
        static constexpr uint32_t NE_HASH = ConstExprHashingUtils::HashString("NE");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");
        static constexpr uint32_t STARTS_WITH_HASH = ConstExprHashingUtils::HashString("STARTS_WITH");


        JobComparator GetJobComparatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == STARTS_WITH_HASH)
          {
            return JobComparator::STARTS_WITH;
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
          case JobComparator::NOT_SET:
            return {};
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
          case JobComparator::STARTS_WITH:
            return "STARTS_WITH";
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
