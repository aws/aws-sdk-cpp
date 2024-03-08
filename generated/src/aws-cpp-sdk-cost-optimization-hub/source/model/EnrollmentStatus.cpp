/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/EnrollmentStatus.h>
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
      namespace EnrollmentStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");


        EnrollmentStatus GetEnrollmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return EnrollmentStatus::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return EnrollmentStatus::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnrollmentStatus>(hashCode);
          }

          return EnrollmentStatus::NOT_SET;
        }

        Aws::String GetNameForEnrollmentStatus(EnrollmentStatus enumValue)
        {
          switch(enumValue)
          {
          case EnrollmentStatus::NOT_SET:
            return {};
          case EnrollmentStatus::Active:
            return "Active";
          case EnrollmentStatus::Inactive:
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

      } // namespace EnrollmentStatusMapper
    } // namespace Model
  } // namespace CostOptimizationHub
} // namespace Aws
