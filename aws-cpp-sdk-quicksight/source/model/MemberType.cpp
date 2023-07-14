/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/MemberType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace MemberTypeMapper
      {

        static const int DASHBOARD_HASH = HashingUtils::HashString("DASHBOARD");
        static const int ANALYSIS_HASH = HashingUtils::HashString("ANALYSIS");
        static const int DATASET_HASH = HashingUtils::HashString("DATASET");


        MemberType GetMemberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DASHBOARD_HASH)
          {
            return MemberType::DASHBOARD;
          }
          else if (hashCode == ANALYSIS_HASH)
          {
            return MemberType::ANALYSIS;
          }
          else if (hashCode == DATASET_HASH)
          {
            return MemberType::DATASET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberType>(hashCode);
          }

          return MemberType::NOT_SET;
        }

        Aws::String GetNameForMemberType(MemberType enumValue)
        {
          switch(enumValue)
          {
          case MemberType::DASHBOARD:
            return "DASHBOARD";
          case MemberType::ANALYSIS:
            return "ANALYSIS";
          case MemberType::DATASET:
            return "DATASET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
