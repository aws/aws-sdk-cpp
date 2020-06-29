/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SharePointVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace SharePointVersionMapper
      {

        static const int SHAREPOINT_ONLINE_HASH = HashingUtils::HashString("SHAREPOINT_ONLINE");


        SharePointVersion GetSharePointVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHAREPOINT_ONLINE_HASH)
          {
            return SharePointVersion::SHAREPOINT_ONLINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharePointVersion>(hashCode);
          }

          return SharePointVersion::NOT_SET;
        }

        Aws::String GetNameForSharePointVersion(SharePointVersion enumValue)
        {
          switch(enumValue)
          {
          case SharePointVersion::SHAREPOINT_ONLINE:
            return "SHAREPOINT_ONLINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharePointVersionMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
