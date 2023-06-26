/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ContentShareLayoutOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace ContentShareLayoutOptionMapper
      {

        static const int PresenterOnly_HASH = HashingUtils::HashString("PresenterOnly");
        static const int Horizontal_HASH = HashingUtils::HashString("Horizontal");
        static const int Vertical_HASH = HashingUtils::HashString("Vertical");


        ContentShareLayoutOption GetContentShareLayoutOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PresenterOnly_HASH)
          {
            return ContentShareLayoutOption::PresenterOnly;
          }
          else if (hashCode == Horizontal_HASH)
          {
            return ContentShareLayoutOption::Horizontal;
          }
          else if (hashCode == Vertical_HASH)
          {
            return ContentShareLayoutOption::Vertical;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentShareLayoutOption>(hashCode);
          }

          return ContentShareLayoutOption::NOT_SET;
        }

        Aws::String GetNameForContentShareLayoutOption(ContentShareLayoutOption enumValue)
        {
          switch(enumValue)
          {
          case ContentShareLayoutOption::PresenterOnly:
            return "PresenterOnly";
          case ContentShareLayoutOption::Horizontal:
            return "Horizontal";
          case ContentShareLayoutOption::Vertical:
            return "Vertical";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentShareLayoutOptionMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
