/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/IntegrationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace IntegrationTypeMapper
      {

        static const int SEND_FINDINGS_TO_SECURITY_HUB_HASH = HashingUtils::HashString("SEND_FINDINGS_TO_SECURITY_HUB");
        static const int RECEIVE_FINDINGS_FROM_SECURITY_HUB_HASH = HashingUtils::HashString("RECEIVE_FINDINGS_FROM_SECURITY_HUB");


        IntegrationType GetIntegrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_FINDINGS_TO_SECURITY_HUB_HASH)
          {
            return IntegrationType::SEND_FINDINGS_TO_SECURITY_HUB;
          }
          else if (hashCode == RECEIVE_FINDINGS_FROM_SECURITY_HUB_HASH)
          {
            return IntegrationType::RECEIVE_FINDINGS_FROM_SECURITY_HUB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationType>(hashCode);
          }

          return IntegrationType::NOT_SET;
        }

        Aws::String GetNameForIntegrationType(IntegrationType enumValue)
        {
          switch(enumValue)
          {
          case IntegrationType::SEND_FINDINGS_TO_SECURITY_HUB:
            return "SEND_FINDINGS_TO_SECURITY_HUB";
          case IntegrationType::RECEIVE_FINDINGS_FROM_SECURITY_HUB:
            return "RECEIVE_FINDINGS_FROM_SECURITY_HUB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntegrationTypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
