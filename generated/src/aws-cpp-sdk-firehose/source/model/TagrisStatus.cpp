/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/TagrisStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace TagrisStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int NOT_ACTIVE_HASH = HashingUtils::HashString("NOT_ACTIVE");


        TagrisStatus GetTagrisStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TagrisStatus::ACTIVE;
          }
          else if (hashCode == NOT_ACTIVE_HASH)
          {
            return TagrisStatus::NOT_ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagrisStatus>(hashCode);
          }

          return TagrisStatus::NOT_SET;
        }

        Aws::String GetNameForTagrisStatus(TagrisStatus enumValue)
        {
          switch(enumValue)
          {
          case TagrisStatus::NOT_SET:
            return {};
          case TagrisStatus::ACTIVE:
            return "ACTIVE";
          case TagrisStatus::NOT_ACTIVE:
            return "NOT_ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TagrisStatusMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
