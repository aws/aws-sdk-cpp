/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/KeyLocation.h>
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
      namespace KeyLocationMapper
      {

        static const int URL_HASH = HashingUtils::HashString("URL");
        static const int SECRET_MANAGER_HASH = HashingUtils::HashString("SECRET_MANAGER");


        KeyLocation GetKeyLocationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == URL_HASH)
          {
            return KeyLocation::URL;
          }
          else if (hashCode == SECRET_MANAGER_HASH)
          {
            return KeyLocation::SECRET_MANAGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyLocation>(hashCode);
          }

          return KeyLocation::NOT_SET;
        }

        Aws::String GetNameForKeyLocation(KeyLocation enumValue)
        {
          switch(enumValue)
          {
          case KeyLocation::URL:
            return "URL";
          case KeyLocation::SECRET_MANAGER:
            return "SECRET_MANAGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyLocationMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
