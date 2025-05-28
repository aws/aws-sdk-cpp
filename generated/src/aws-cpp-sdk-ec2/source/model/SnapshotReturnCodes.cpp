/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SnapshotReturnCodes.h>
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
      namespace SnapshotReturnCodesMapper
      {

        static const int success_HASH = HashingUtils::HashString("success");
        static const int skipped_HASH = HashingUtils::HashString("skipped");
        static const int missing_permissions_HASH = HashingUtils::HashString("missing-permissions");
        static const int internal_error_HASH = HashingUtils::HashString("internal-error");
        static const int client_error_HASH = HashingUtils::HashString("client-error");


        SnapshotReturnCodes GetSnapshotReturnCodesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == success_HASH)
          {
            return SnapshotReturnCodes::success;
          }
          else if (hashCode == skipped_HASH)
          {
            return SnapshotReturnCodes::skipped;
          }
          else if (hashCode == missing_permissions_HASH)
          {
            return SnapshotReturnCodes::missing_permissions;
          }
          else if (hashCode == internal_error_HASH)
          {
            return SnapshotReturnCodes::internal_error;
          }
          else if (hashCode == client_error_HASH)
          {
            return SnapshotReturnCodes::client_error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotReturnCodes>(hashCode);
          }

          return SnapshotReturnCodes::NOT_SET;
        }

        Aws::String GetNameForSnapshotReturnCodes(SnapshotReturnCodes enumValue)
        {
          switch(enumValue)
          {
          case SnapshotReturnCodes::NOT_SET:
            return {};
          case SnapshotReturnCodes::success:
            return "success";
          case SnapshotReturnCodes::skipped:
            return "skipped";
          case SnapshotReturnCodes::missing_permissions:
            return "missing-permissions";
          case SnapshotReturnCodes::internal_error:
            return "internal-error";
          case SnapshotReturnCodes::client_error:
            return "client-error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotReturnCodesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
