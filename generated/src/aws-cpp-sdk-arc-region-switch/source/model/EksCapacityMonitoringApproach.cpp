/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/EksCapacityMonitoringApproach.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace EksCapacityMonitoringApproachMapper
      {

        static const int sampledMaxInLast24Hours_HASH = HashingUtils::HashString("sampledMaxInLast24Hours");


        EksCapacityMonitoringApproach GetEksCapacityMonitoringApproachForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sampledMaxInLast24Hours_HASH)
          {
            return EksCapacityMonitoringApproach::sampledMaxInLast24Hours;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EksCapacityMonitoringApproach>(hashCode);
          }

          return EksCapacityMonitoringApproach::NOT_SET;
        }

        Aws::String GetNameForEksCapacityMonitoringApproach(EksCapacityMonitoringApproach enumValue)
        {
          switch(enumValue)
          {
          case EksCapacityMonitoringApproach::NOT_SET:
            return {};
          case EksCapacityMonitoringApproach::sampledMaxInLast24Hours:
            return "sampledMaxInLast24Hours";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EksCapacityMonitoringApproachMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
