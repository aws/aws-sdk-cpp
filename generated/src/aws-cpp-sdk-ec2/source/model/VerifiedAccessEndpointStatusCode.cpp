/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessEndpointStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace VerifiedAccessEndpointStatusCodeMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int updating_HASH = HashingUtils::HashString("updating");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        VerifiedAccessEndpointStatusCode GetVerifiedAccessEndpointStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return VerifiedAccessEndpointStatusCode::pending;
          }
          else if (hashCode == active_HASH)
          {
            return VerifiedAccessEndpointStatusCode::active;
          }
          else if (hashCode == updating_HASH)
          {
            return VerifiedAccessEndpointStatusCode::updating;
          }
          else if (hashCode == deleting_HASH)
          {
            return VerifiedAccessEndpointStatusCode::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return VerifiedAccessEndpointStatusCode::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifiedAccessEndpointStatusCode>(hashCode);
          }

          return VerifiedAccessEndpointStatusCode::NOT_SET;
        }

        Aws::String GetNameForVerifiedAccessEndpointStatusCode(VerifiedAccessEndpointStatusCode enumValue)
        {
          switch(enumValue)
          {
          case VerifiedAccessEndpointStatusCode::pending:
            return "pending";
          case VerifiedAccessEndpointStatusCode::active:
            return "active";
          case VerifiedAccessEndpointStatusCode::updating:
            return "updating";
          case VerifiedAccessEndpointStatusCode::deleting:
            return "deleting";
          case VerifiedAccessEndpointStatusCode::deleted:
            return "deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifiedAccessEndpointStatusCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
