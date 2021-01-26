/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/VpcLinkStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace VpcLinkStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        VpcLinkStatus GetVpcLinkStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return VpcLinkStatus::AVAILABLE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return VpcLinkStatus::PENDING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return VpcLinkStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VpcLinkStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcLinkStatus>(hashCode);
          }

          return VpcLinkStatus::NOT_SET;
        }

        Aws::String GetNameForVpcLinkStatus(VpcLinkStatus enumValue)
        {
          switch(enumValue)
          {
          case VpcLinkStatus::AVAILABLE:
            return "AVAILABLE";
          case VpcLinkStatus::PENDING:
            return "PENDING";
          case VpcLinkStatus::DELETING:
            return "DELETING";
          case VpcLinkStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcLinkStatusMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
