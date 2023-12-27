/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CannedAclForObjectsValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace CannedAclForObjectsValueMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int private__HASH = HashingUtils::HashString("private");
        static const int public_read_HASH = HashingUtils::HashString("public-read");
        static const int public_read_write_HASH = HashingUtils::HashString("public-read-write");
        static const int authenticated_read_HASH = HashingUtils::HashString("authenticated-read");
        static const int aws_exec_read_HASH = HashingUtils::HashString("aws-exec-read");
        static const int bucket_owner_read_HASH = HashingUtils::HashString("bucket-owner-read");
        static const int bucket_owner_full_control_HASH = HashingUtils::HashString("bucket-owner-full-control");


        CannedAclForObjectsValue GetCannedAclForObjectsValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return CannedAclForObjectsValue::none;
          }
          else if (hashCode == private__HASH)
          {
            return CannedAclForObjectsValue::private_;
          }
          else if (hashCode == public_read_HASH)
          {
            return CannedAclForObjectsValue::public_read;
          }
          else if (hashCode == public_read_write_HASH)
          {
            return CannedAclForObjectsValue::public_read_write;
          }
          else if (hashCode == authenticated_read_HASH)
          {
            return CannedAclForObjectsValue::authenticated_read;
          }
          else if (hashCode == aws_exec_read_HASH)
          {
            return CannedAclForObjectsValue::aws_exec_read;
          }
          else if (hashCode == bucket_owner_read_HASH)
          {
            return CannedAclForObjectsValue::bucket_owner_read;
          }
          else if (hashCode == bucket_owner_full_control_HASH)
          {
            return CannedAclForObjectsValue::bucket_owner_full_control;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CannedAclForObjectsValue>(hashCode);
          }

          return CannedAclForObjectsValue::NOT_SET;
        }

        Aws::String GetNameForCannedAclForObjectsValue(CannedAclForObjectsValue enumValue)
        {
          switch(enumValue)
          {
          case CannedAclForObjectsValue::NOT_SET:
            return {};
          case CannedAclForObjectsValue::none:
            return "none";
          case CannedAclForObjectsValue::private_:
            return "private";
          case CannedAclForObjectsValue::public_read:
            return "public-read";
          case CannedAclForObjectsValue::public_read_write:
            return "public-read-write";
          case CannedAclForObjectsValue::authenticated_read:
            return "authenticated-read";
          case CannedAclForObjectsValue::aws_exec_read:
            return "aws-exec-read";
          case CannedAclForObjectsValue::bucket_owner_read:
            return "bucket-owner-read";
          case CannedAclForObjectsValue::bucket_owner_full_control:
            return "bucket-owner-full-control";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CannedAclForObjectsValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
