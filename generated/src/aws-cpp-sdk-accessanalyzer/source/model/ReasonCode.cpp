/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace ReasonCodeMapper
      {

        static const int AWS_SERVICE_ACCESS_DISABLED_HASH = HashingUtils::HashString("AWS_SERVICE_ACCESS_DISABLED");
        static const int DELEGATED_ADMINISTRATOR_DEREGISTERED_HASH = HashingUtils::HashString("DELEGATED_ADMINISTRATOR_DEREGISTERED");
        static const int ORGANIZATION_DELETED_HASH = HashingUtils::HashString("ORGANIZATION_DELETED");
        static const int SERVICE_LINKED_ROLE_CREATION_FAILED_HASH = HashingUtils::HashString("SERVICE_LINKED_ROLE_CREATION_FAILED");


        ReasonCode GetReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_SERVICE_ACCESS_DISABLED_HASH)
          {
            return ReasonCode::AWS_SERVICE_ACCESS_DISABLED;
          }
          else if (hashCode == DELEGATED_ADMINISTRATOR_DEREGISTERED_HASH)
          {
            return ReasonCode::DELEGATED_ADMINISTRATOR_DEREGISTERED;
          }
          else if (hashCode == ORGANIZATION_DELETED_HASH)
          {
            return ReasonCode::ORGANIZATION_DELETED;
          }
          else if (hashCode == SERVICE_LINKED_ROLE_CREATION_FAILED_HASH)
          {
            return ReasonCode::SERVICE_LINKED_ROLE_CREATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReasonCode>(hashCode);
          }

          return ReasonCode::NOT_SET;
        }

        Aws::String GetNameForReasonCode(ReasonCode enumValue)
        {
          switch(enumValue)
          {
          case ReasonCode::AWS_SERVICE_ACCESS_DISABLED:
            return "AWS_SERVICE_ACCESS_DISABLED";
          case ReasonCode::DELEGATED_ADMINISTRATOR_DEREGISTERED:
            return "DELEGATED_ADMINISTRATOR_DEREGISTERED";
          case ReasonCode::ORGANIZATION_DELETED:
            return "ORGANIZATION_DELETED";
          case ReasonCode::SERVICE_LINKED_ROLE_CREATION_FAILED:
            return "SERVICE_LINKED_ROLE_CREATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReasonCodeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
