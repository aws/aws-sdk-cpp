/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/VpcEndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace VpcEndpointStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        VpcEndpointStatus GetVpcEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return VpcEndpointStatus::PENDING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return VpcEndpointStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return VpcEndpointStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VpcEndpointStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEndpointStatus>(hashCode);
          }

          return VpcEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForVpcEndpointStatus(VpcEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case VpcEndpointStatus::PENDING:
            return "PENDING";
          case VpcEndpointStatus::DELETING:
            return "DELETING";
          case VpcEndpointStatus::ACTIVE:
            return "ACTIVE";
          case VpcEndpointStatus::FAILED:
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

      } // namespace VpcEndpointStatusMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
