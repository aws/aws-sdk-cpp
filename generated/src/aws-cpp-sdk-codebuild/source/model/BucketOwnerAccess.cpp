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

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t READ_ONLY_HASH = ConstExprHashingUtils::HashString("READ_ONLY");
        static constexpr uint32_t FULL_HASH = ConstExprHashingUtils::HashString("FULL");


        BucketOwnerAccess GetBucketOwnerAccessForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
