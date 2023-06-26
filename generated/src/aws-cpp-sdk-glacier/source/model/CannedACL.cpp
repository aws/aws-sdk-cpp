/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/CannedACL.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glacier
  {
    namespace Model
    {
      namespace CannedACLMapper
      {

        static const int private__HASH = HashingUtils::HashString("private");
        static const int public_read_HASH = HashingUtils::HashString("public-read");
        static const int public_read_write_HASH = HashingUtils::HashString("public-read-write");
        static const int aws_exec_read_HASH = HashingUtils::HashString("aws-exec-read");
        static const int authenticated_read_HASH = HashingUtils::HashString("authenticated-read");
        static const int bucket_owner_read_HASH = HashingUtils::HashString("bucket-owner-read");
        static const int bucket_owner_full_control_HASH = HashingUtils::HashString("bucket-owner-full-control");


        CannedACL GetCannedACLForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == private__HASH)
          {
            return CannedACL::private_;
          }
          else if (hashCode == public_read_HASH)
          {
            return CannedACL::public_read;
          }
          else if (hashCode == public_read_write_HASH)
          {
            return CannedACL::public_read_write;
          }
          else if (hashCode == aws_exec_read_HASH)
          {
            return CannedACL::aws_exec_read;
          }
          else if (hashCode == authenticated_read_HASH)
          {
            return CannedACL::authenticated_read;
          }
          else if (hashCode == bucket_owner_read_HASH)
          {
            return CannedACL::bucket_owner_read;
          }
          else if (hashCode == bucket_owner_full_control_HASH)
          {
            return CannedACL::bucket_owner_full_control;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CannedACL>(hashCode);
          }

          return CannedACL::NOT_SET;
        }

        Aws::String GetNameForCannedACL(CannedACL enumValue)
        {
          switch(enumValue)
          {
          case CannedACL::private_:
            return "private";
          case CannedACL::public_read:
            return "public-read";
          case CannedACL::public_read_write:
            return "public-read-write";
          case CannedACL::aws_exec_read:
            return "aws-exec-read";
          case CannedACL::authenticated_read:
            return "authenticated-read";
          case CannedACL::bucket_owner_read:
            return "bucket-owner-read";
          case CannedACL::bucket_owner_full_control:
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

      } // namespace CannedACLMapper
    } // namespace Model
  } // namespace Glacier
} // namespace Aws
