/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/OutboundCrossClusterSearchConnectionStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace OutboundCrossClusterSearchConnectionStatusCodeMapper
      {

        static const int PENDING_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_ACCEPTANCE");
        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        OutboundCrossClusterSearchConnectionStatusCode GetOutboundCrossClusterSearchConnectionStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_ACCEPTANCE_HASH)
          {
            return OutboundCrossClusterSearchConnectionStatusCode::PENDING_ACCEPTANCE;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return OutboundCrossClusterSearchConnectionStatusCode::VALIDATING;
          }
          else if (hashCode == VALIDATION_FAILED_HASH)
          {
            return OutboundCrossClusterSearchConnectionStatusCode::VALIDATION_FAILED;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return OutboundCrossClusterSearchConnectionStatusCode::PROVISIONING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return OutboundCrossClusterSearchConnectionStatusCode::ACTIVE;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return OutboundCrossClusterSearchConnectionStatusCode::REJECTED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return OutboundCrossClusterSearchConnectionStatusCode::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return OutboundCrossClusterSearchConnectionStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutboundCrossClusterSearchConnectionStatusCode>(hashCode);
          }

          return OutboundCrossClusterSearchConnectionStatusCode::NOT_SET;
        }

        Aws::String GetNameForOutboundCrossClusterSearchConnectionStatusCode(OutboundCrossClusterSearchConnectionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case OutboundCrossClusterSearchConnectionStatusCode::PENDING_ACCEPTANCE:
            return "PENDING_ACCEPTANCE";
          case OutboundCrossClusterSearchConnectionStatusCode::VALIDATING:
            return "VALIDATING";
          case OutboundCrossClusterSearchConnectionStatusCode::VALIDATION_FAILED:
            return "VALIDATION_FAILED";
          case OutboundCrossClusterSearchConnectionStatusCode::PROVISIONING:
            return "PROVISIONING";
          case OutboundCrossClusterSearchConnectionStatusCode::ACTIVE:
            return "ACTIVE";
          case OutboundCrossClusterSearchConnectionStatusCode::REJECTED:
            return "REJECTED";
          case OutboundCrossClusterSearchConnectionStatusCode::DELETING:
            return "DELETING";
          case OutboundCrossClusterSearchConnectionStatusCode::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutboundCrossClusterSearchConnectionStatusCodeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
