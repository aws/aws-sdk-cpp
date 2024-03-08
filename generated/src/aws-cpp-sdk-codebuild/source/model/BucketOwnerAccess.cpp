/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BucketOwnerAccess.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace BucketOwnerAccessMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int READ_ONLY_HASH = HashingUtils::HashString("READ_ONLY");
        static const int FULL_HASH = HashingUtils::HashString("FULL");


        BucketOwnerAccess GetBucketOwnerAccessForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return BucketOwnerAccess::NONE;
          }
          else if (hashCode == READ_ONLY_HASH)
          {
            return BucketOwnerAccess::READ_ONLY;
          }
          else if (hashCode == FULL_HASH)
          {
            return BucketOwnerAccess::FULL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BucketOwnerAccess>(hashCode);
          }

          return BucketOwnerAccess::NOT_SET;
        }

        Aws::String GetNameForBucketOwnerAccess(BucketOwnerAccess enumValue)
        {
          switch(enumValue)
          {
          case BucketOwnerAccess::NOT_SET:
            return {};
          case BucketOwnerAccess::NONE:
            return "NONE";
          case BucketOwnerAccess::READ_ONLY:
            return "READ_ONLY";
          case BucketOwnerAccess::FULL:
            return "FULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BucketOwnerAccessMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
