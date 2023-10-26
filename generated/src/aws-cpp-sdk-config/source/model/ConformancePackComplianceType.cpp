/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackComplianceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ConformancePackComplianceTypeMapper
      {

        static const int COMPLIANT_HASH = HashingUtils::HashString("COMPLIANT");
        static const int NON_COMPLIANT_HASH = HashingUtils::HashString("NON_COMPLIANT");
        static const int INSUFFICIENT_DATA_HASH = HashingUtils::HashString("INSUFFICIENT_DATA");


        ConformancePackComplianceType GetConformancePackComplianceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLIANT_HASH)
          {
            return ConformancePackComplianceType::COMPLIANT;
          }
          else if (hashCode == NON_COMPLIANT_HASH)
          {
            return ConformancePackComplianceType::NON_COMPLIANT;
          }
          else if (hashCode == INSUFFICIENT_DATA_HASH)
          {
            return ConformancePackComplianceType::INSUFFICIENT_DATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConformancePackComplianceType>(hashCode);
          }

          return ConformancePackComplianceType::NOT_SET;
        }

        Aws::String GetNameForConformancePackComplianceType(ConformancePackComplianceType enumValue)
        {
          switch(enumValue)
          {
          case ConformancePackComplianceType::NOT_SET:
            return {};
          case ConformancePackComplianceType::COMPLIANT:
            return "COMPLIANT";
          case ConformancePackComplianceType::NON_COMPLIANT:
            return "NON_COMPLIANT";
          case ConformancePackComplianceType::INSUFFICIENT_DATA:
            return "INSUFFICIENT_DATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConformancePackComplianceTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
