/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/InboundCrossClusterSearchConnectionStatusCode.h>
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
      namespace InboundCrossClusterSearchConnectionStatusCodeMapper
      {

        static constexpr uint32_t PENDING_ACCEPTANCE_HASH = ConstExprHashingUtils::HashString("PENDING_ACCEPTANCE");
        static constexpr uint32_t APPROVED_HASH = ConstExprHashingUtils::HashString("APPROVED");
        static constexpr uint32_t REJECTING_HASH = ConstExprHashingUtils::HashString("REJECTING");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        InboundCrossClusterSearchConnectionStatusCode GetInboundCrossClusterSearchConnectionStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_ACCEPTANCE_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::PENDING_ACCEPTANCE;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::APPROVED;
          }
          else if (hashCode == REJECTING_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::REJECTING;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::REJECTED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InboundCrossClusterSearchConnectionStatusCode>(hashCode);
          }

          return InboundCrossClusterSearchConnectionStatusCode::NOT_SET;
        }

        Aws::String GetNameForInboundCrossClusterSearchConnectionStatusCode(InboundCrossClusterSearchConnectionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case InboundCrossClusterSearchConnectionStatusCode::NOT_SET:
            return {};
          case InboundCrossClusterSearchConnectionStatusCode::PENDING_ACCEPTANCE:
            return "PENDING_ACCEPTANCE";
          case InboundCrossClusterSearchConnectionStatusCode::APPROVED:
            return "APPROVED";
          case InboundCrossClusterSearchConnectionStatusCode::REJECTING:
            return "REJECTING";
          case InboundCrossClusterSearchConnectionStatusCode::REJECTED:
            return "REJECTED";
          case InboundCrossClusterSearchConnectionStatusCode::DELETING:
            return "DELETING";
          case InboundCrossClusterSearchConnectionStatusCode::DELETED:
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

      } // namespace InboundCrossClusterSearchConnectionStatusCodeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
