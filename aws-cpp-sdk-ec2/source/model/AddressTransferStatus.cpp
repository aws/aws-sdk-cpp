/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AddressTransferStatus.h>
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
      namespace AddressTransferStatusMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int accepted_HASH = HashingUtils::HashString("accepted");


        AddressTransferStatus GetAddressTransferStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return AddressTransferStatus::pending;
          }
          else if (hashCode == disabled_HASH)
          {
            return AddressTransferStatus::disabled;
          }
          else if (hashCode == accepted_HASH)
          {
            return AddressTransferStatus::accepted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AddressTransferStatus>(hashCode);
          }

          return AddressTransferStatus::NOT_SET;
        }

        Aws::String GetNameForAddressTransferStatus(AddressTransferStatus enumValue)
        {
          switch(enumValue)
          {
          case AddressTransferStatus::pending:
            return "pending";
          case AddressTransferStatus::disabled:
            return "disabled";
          case AddressTransferStatus::accepted:
            return "accepted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AddressTransferStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
