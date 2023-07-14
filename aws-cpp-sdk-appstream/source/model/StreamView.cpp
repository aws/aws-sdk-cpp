/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StreamView.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace StreamViewMapper
      {

        static const int APP_HASH = HashingUtils::HashString("APP");
        static const int DESKTOP_HASH = HashingUtils::HashString("DESKTOP");


        StreamView GetStreamViewForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APP_HASH)
          {
            return StreamView::APP;
          }
          else if (hashCode == DESKTOP_HASH)
          {
            return StreamView::DESKTOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamView>(hashCode);
          }

          return StreamView::NOT_SET;
        }

        Aws::String GetNameForStreamView(StreamView enumValue)
        {
          switch(enumValue)
          {
          case StreamView::APP:
            return "APP";
          case StreamView::DESKTOP:
            return "DESKTOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamViewMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
