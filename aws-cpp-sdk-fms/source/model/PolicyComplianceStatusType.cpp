/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/PolicyComplianceStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace PolicyComplianceStatusTypeMapper
      {

        static const int COMPLIANT_HASH = HashingUtils::HashString("COMPLIANT");
        static const int NON_COMPLIANT_HASH = HashingUtils::HashString("NON_COMPLIANT");


        PolicyComplianceStatusType GetPolicyComplianceStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLIANT_HASH)
          {
            return PolicyComplianceStatusType::COMPLIANT;
          }
          else if (hashCode == NON_COMPLIANT_HASH)
          {
            return PolicyComplianceStatusType::NON_COMPLIANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyComplianceStatusType>(hashCode);
          }

          return PolicyComplianceStatusType::NOT_SET;
        }

        Aws::String GetNameForPolicyComplianceStatusType(PolicyComplianceStatusType enumValue)
        {
          switch(enumValue)
          {
          case PolicyComplianceStatusType::COMPLIANT:
            return "COMPLIANT";
          case PolicyComplianceStatusType::NON_COMPLIANT:
            return "NON_COMPLIANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyComplianceStatusTypeMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
