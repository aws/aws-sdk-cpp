/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/TagStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace TagStatusMapper
      {

        static const int TAGGED_HASH = HashingUtils::HashString("TAGGED");
        static const int UNTAGGED_HASH = HashingUtils::HashString("UNTAGGED");
        static const int ANY_HASH = HashingUtils::HashString("ANY");


        TagStatus GetTagStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TAGGED_HASH)
          {
            return TagStatus::TAGGED;
          }
          else if (hashCode == UNTAGGED_HASH)
          {
            return TagStatus::UNTAGGED;
          }
          else if (hashCode == ANY_HASH)
          {
            return TagStatus::ANY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagStatus>(hashCode);
          }

          return TagStatus::NOT_SET;
        }

        Aws::String GetNameForTagStatus(TagStatus enumValue)
        {
          switch(enumValue)
          {
          case TagStatus::TAGGED:
            return "TAGGED";
          case TagStatus::UNTAGGED:
            return "UNTAGGED";
          case TagStatus::ANY:
            return "ANY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TagStatusMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
