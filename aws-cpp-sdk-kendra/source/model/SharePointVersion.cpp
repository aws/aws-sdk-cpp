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

        static const int SHAREPOINT_2013_HASH = HashingUtils::HashString("SHAREPOINT_2013");
        static const int SHAREPOINT_2016_HASH = HashingUtils::HashString("SHAREPOINT_2016");
        static const int SHAREPOINT_ONLINE_HASH = HashingUtils::HashString("SHAREPOINT_ONLINE");
        static const int SHAREPOINT_2019_HASH = HashingUtils::HashString("SHAREPOINT_2019");


        SharePointVersion GetSharePointVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHAREPOINT_2013_HASH)
          {
            return SharePointVersion::SHAREPOINT_2013;
          }
          else if (hashCode == SHAREPOINT_2016_HASH)
          {
            return SharePointVersion::SHAREPOINT_2016;
          }
          else if (hashCode == SHAREPOINT_ONLINE_HASH)
          {
            return SharePointVersion::SHAREPOINT_ONLINE;
          }
          else if (hashCode == SHAREPOINT_2019_HASH)
          {
            return SharePointVersion::SHAREPOINT_2019;
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
          case SharePointVersion::SHAREPOINT_2013:
            return "SHAREPOINT_2013";
          case SharePointVersion::SHAREPOINT_2016:
            return "SHAREPOINT_2016";
          case SharePointVersion::SHAREPOINT_ONLINE:
            return "SHAREPOINT_ONLINE";
          case SharePointVersion::SHAREPOINT_2019:
            return "SHAREPOINT_2019";
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
