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

        static constexpr uint32_t PENDING_ACCEPTANCE_HASH = ConstExprHashingUtils::HashString("PENDING_ACCEPTANCE");
        static constexpr uint32_t VALIDATING_HASH = ConstExprHashingUtils::HashString("VALIDATING");
        static constexpr uint32_t VALIDATION_FAILED_HASH = ConstExprHashingUtils::HashString("VALIDATION_FAILED");
        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        OutboundCrossClusterSearchConnectionStatusCode GetOutboundCrossClusterSearchConnectionStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case OutboundCrossClusterSearchConnectionStatusCode::NOT_SET:
            return {};
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
