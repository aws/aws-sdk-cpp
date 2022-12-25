/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/LayoutOption.h>
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
      namespace LayoutOptionMapper
      {

        static const int GridView_HASH = HashingUtils::HashString("GridView");


        LayoutOption GetLayoutOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GridView_HASH)
          {
            return LayoutOption::GridView;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LayoutOption>(hashCode);
          }

          return LayoutOption::NOT_SET;
        }

        Aws::String GetNameForLayoutOption(LayoutOption enumValue)
        {
          switch(enumValue)
          {
          case LayoutOption::GridView:
            return "GridView";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LayoutOptionMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
