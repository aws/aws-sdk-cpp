/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/SearchFieldKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMessaging
  {
    namespace Model
    {
      namespace SearchFieldKeyMapper
      {

        static const int MEMBERS_HASH = HashingUtils::HashString("MEMBERS");


        SearchFieldKey GetSearchFieldKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEMBERS_HASH)
          {
            return SearchFieldKey::MEMBERS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchFieldKey>(hashCode);
          }

          return SearchFieldKey::NOT_SET;
        }

        Aws::String GetNameForSearchFieldKey(SearchFieldKey enumValue)
        {
          switch(enumValue)
          {
          case SearchFieldKey::NOT_SET:
            return {};
          case SearchFieldKey::MEMBERS:
            return "MEMBERS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchFieldKeyMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
