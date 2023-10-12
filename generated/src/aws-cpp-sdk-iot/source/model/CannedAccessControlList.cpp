/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CannedAccessControlList.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace CannedAccessControlListMapper
      {

        static constexpr uint32_t private__HASH = ConstExprHashingUtils::HashString("private");
        static constexpr uint32_t public_read_HASH = ConstExprHashingUtils::HashString("public-read");
        static constexpr uint32_t public_read_write_HASH = ConstExprHashingUtils::HashString("public-read-write");
        static constexpr uint32_t aws_exec_read_HASH = ConstExprHashingUtils::HashString("aws-exec-read");
        static constexpr uint32_t authenticated_read_HASH = ConstExprHashingUtils::HashString("authenticated-read");
        static constexpr uint32_t bucket_owner_read_HASH = ConstExprHashingUtils::HashString("bucket-owner-read");
        static constexpr uint32_t bucket_owner_full_control_HASH = ConstExprHashingUtils::HashString("bucket-owner-full-control");
        static constexpr uint32_t log_delivery_write_HASH = ConstExprHashingUtils::HashString("log-delivery-write");


        CannedAccessControlList GetCannedAccessControlListForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == private__HASH)
          {
            return CannedAccessControlList::private_;
          }
          else if (hashCode == public_read_HASH)
          {
            return CannedAccessControlList::public_read;
          }
          else if (hashCode == public_read_write_HASH)
          {
            return CannedAccessControlList::public_read_write;
          }
          else if (hashCode == aws_exec_read_HASH)
          {
            return CannedAccessControlList::aws_exec_read;
          }
          else if (hashCode == authenticated_read_HASH)
          {
            return CannedAccessControlList::authenticated_read;
          }
          else if (hashCode == bucket_owner_read_HASH)
          {
            return CannedAccessControlList::bucket_owner_read;
          }
          else if (hashCode == bucket_owner_full_control_HASH)
          {
            return CannedAccessControlList::bucket_owner_full_control;
          }
          else if (hashCode == log_delivery_write_HASH)
          {
            return CannedAccessControlList::log_delivery_write;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CannedAccessControlList>(hashCode);
          }

          return CannedAccessControlList::NOT_SET;
        }

        Aws::String GetNameForCannedAccessControlList(CannedAccessControlList enumValue)
        {
          switch(enumValue)
          {
          case CannedAccessControlList::NOT_SET:
            return {};
          case CannedAccessControlList::private_:
            return "private";
          case CannedAccessControlList::public_read:
            return "public-read";
          case CannedAccessControlList::public_read_write:
            return "public-read-write";
          case CannedAccessControlList::aws_exec_read:
            return "aws-exec-read";
          case CannedAccessControlList::authenticated_read:
            return "authenticated-read";
          case CannedAccessControlList::bucket_owner_read:
            return "bucket-owner-read";
          case CannedAccessControlList::bucket_owner_full_control:
            return "bucket-owner-full-control";
          case CannedAccessControlList::log_delivery_write:
            return "log-delivery-write";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CannedAccessControlListMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
