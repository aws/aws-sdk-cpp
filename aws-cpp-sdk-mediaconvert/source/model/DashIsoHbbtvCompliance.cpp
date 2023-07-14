/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoHbbtvCompliance.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DashIsoHbbtvComplianceMapper
      {

        static const int HBBTV_1_5_HASH = HashingUtils::HashString("HBBTV_1_5");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        DashIsoHbbtvCompliance GetDashIsoHbbtvComplianceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HBBTV_1_5_HASH)
          {
            return DashIsoHbbtvCompliance::HBBTV_1_5;
          }
          else if (hashCode == NONE_HASH)
          {
            return DashIsoHbbtvCompliance::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoHbbtvCompliance>(hashCode);
          }

          return DashIsoHbbtvCompliance::NOT_SET;
        }

        Aws::String GetNameForDashIsoHbbtvCompliance(DashIsoHbbtvCompliance enumValue)
        {
          switch(enumValue)
          {
          case DashIsoHbbtvCompliance::HBBTV_1_5:
            return "HBBTV_1_5";
          case DashIsoHbbtvCompliance::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoHbbtvComplianceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
