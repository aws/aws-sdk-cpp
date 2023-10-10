/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/DomainNameStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApiGatewayV2
  {
    namespace Model
    {
      namespace DomainNameStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int PENDING_CERTIFICATE_REIMPORT_HASH = HashingUtils::HashString("PENDING_CERTIFICATE_REIMPORT");
        static const int PENDING_OWNERSHIP_VERIFICATION_HASH = HashingUtils::HashString("PENDING_OWNERSHIP_VERIFICATION");


        DomainNameStatus GetDomainNameStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return DomainNameStatus::AVAILABLE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DomainNameStatus::UPDATING;
          }
          else if (hashCode == PENDING_CERTIFICATE_REIMPORT_HASH)
          {
            return DomainNameStatus::PENDING_CERTIFICATE_REIMPORT;
          }
          else if (hashCode == PENDING_OWNERSHIP_VERIFICATION_HASH)
          {
            return DomainNameStatus::PENDING_OWNERSHIP_VERIFICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainNameStatus>(hashCode);
          }

          return DomainNameStatus::NOT_SET;
        }

        Aws::String GetNameForDomainNameStatus(DomainNameStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainNameStatus::NOT_SET:
            return {};
          case DomainNameStatus::AVAILABLE:
            return "AVAILABLE";
          case DomainNameStatus::UPDATING:
            return "UPDATING";
          case DomainNameStatus::PENDING_CERTIFICATE_REIMPORT:
            return "PENDING_CERTIFICATE_REIMPORT";
          case DomainNameStatus::PENDING_OWNERSHIP_VERIFICATION:
            return "PENDING_OWNERSHIP_VERIFICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainNameStatusMapper
    } // namespace Model
  } // namespace ApiGatewayV2
} // namespace Aws
