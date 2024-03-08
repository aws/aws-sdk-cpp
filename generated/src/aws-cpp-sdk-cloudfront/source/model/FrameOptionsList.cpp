/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/FrameOptionsList.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace FrameOptionsListMapper
      {

        static const int DENY_HASH = HashingUtils::HashString("DENY");
        static const int SAMEORIGIN_HASH = HashingUtils::HashString("SAMEORIGIN");


        FrameOptionsList GetFrameOptionsListForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DENY_HASH)
          {
            return FrameOptionsList::DENY;
          }
          else if (hashCode == SAMEORIGIN_HASH)
          {
            return FrameOptionsList::SAMEORIGIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FrameOptionsList>(hashCode);
          }

          return FrameOptionsList::NOT_SET;
        }

        Aws::String GetNameForFrameOptionsList(FrameOptionsList enumValue)
        {
          switch(enumValue)
          {
          case FrameOptionsList::NOT_SET:
            return {};
          case FrameOptionsList::DENY:
            return "DENY";
          case FrameOptionsList::SAMEORIGIN:
            return "SAMEORIGIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrameOptionsListMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
