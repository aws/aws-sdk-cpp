/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/TrustedAdvisorIntegrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace TrustedAdvisorIntegrationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        TrustedAdvisorIntegrationStatus GetTrustedAdvisorIntegrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return TrustedAdvisorIntegrationStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return TrustedAdvisorIntegrationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustedAdvisorIntegrationStatus>(hashCode);
          }

          return TrustedAdvisorIntegrationStatus::NOT_SET;
        }

        Aws::String GetNameForTrustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus enumValue)
        {
          switch(enumValue)
          {
          case TrustedAdvisorIntegrationStatus::ENABLED:
            return "ENABLED";
          case TrustedAdvisorIntegrationStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrustedAdvisorIntegrationStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
