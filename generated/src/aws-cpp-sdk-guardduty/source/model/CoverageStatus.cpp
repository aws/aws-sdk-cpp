/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace CoverageStatusMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");


        CoverageStatus GetCoverageStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return CoverageStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return CoverageStatus::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoverageStatus>(hashCode);
          }

          return CoverageStatus::NOT_SET;
        }

        Aws::String GetNameForCoverageStatus(CoverageStatus enumValue)
        {
          switch(enumValue)
          {
          case CoverageStatus::NOT_SET:
            return {};
          case CoverageStatus::HEALTHY:
            return "HEALTHY";
          case CoverageStatus::UNHEALTHY:
            return "UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CoverageStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
