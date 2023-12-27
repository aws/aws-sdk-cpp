/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ViewStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ViewStatusMapper
      {

        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
        static const int SAVED_HASH = HashingUtils::HashString("SAVED");


        ViewStatus GetViewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISHED_HASH)
          {
            return ViewStatus::PUBLISHED;
          }
          else if (hashCode == SAVED_HASH)
          {
            return ViewStatus::SAVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViewStatus>(hashCode);
          }

          return ViewStatus::NOT_SET;
        }

        Aws::String GetNameForViewStatus(ViewStatus enumValue)
        {
          switch(enumValue)
          {
          case ViewStatus::NOT_SET:
            return {};
          case ViewStatus::PUBLISHED:
            return "PUBLISHED";
          case ViewStatus::SAVED:
            return "SAVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViewStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
