/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/WebserverAccessMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MWAA
  {
    namespace Model
    {
      namespace WebserverAccessModeMapper
      {

        static const int PRIVATE_ONLY_HASH = HashingUtils::HashString("PRIVATE_ONLY");
        static const int PUBLIC_ONLY_HASH = HashingUtils::HashString("PUBLIC_ONLY");


        WebserverAccessMode GetWebserverAccessModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIVATE_ONLY_HASH)
          {
            return WebserverAccessMode::PRIVATE_ONLY;
          }
          else if (hashCode == PUBLIC_ONLY_HASH)
          {
            return WebserverAccessMode::PUBLIC_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebserverAccessMode>(hashCode);
          }

          return WebserverAccessMode::NOT_SET;
        }

        Aws::String GetNameForWebserverAccessMode(WebserverAccessMode enumValue)
        {
          switch(enumValue)
          {
          case WebserverAccessMode::PRIVATE_ONLY:
            return "PRIVATE_ONLY";
          case WebserverAccessMode::PUBLIC_ONLY:
            return "PUBLIC_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebserverAccessModeMapper
    } // namespace Model
  } // namespace MWAA
} // namespace Aws
