/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CacheConfigType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace CacheConfigTypeMapper
      {

        static const int AMPLIFY_MANAGED_HASH = HashingUtils::HashString("AMPLIFY_MANAGED");
        static const int AMPLIFY_MANAGED_NO_COOKIES_HASH = HashingUtils::HashString("AMPLIFY_MANAGED_NO_COOKIES");


        CacheConfigType GetCacheConfigTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMPLIFY_MANAGED_HASH)
          {
            return CacheConfigType::AMPLIFY_MANAGED;
          }
          else if (hashCode == AMPLIFY_MANAGED_NO_COOKIES_HASH)
          {
            return CacheConfigType::AMPLIFY_MANAGED_NO_COOKIES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheConfigType>(hashCode);
          }

          return CacheConfigType::NOT_SET;
        }

        Aws::String GetNameForCacheConfigType(CacheConfigType enumValue)
        {
          switch(enumValue)
          {
          case CacheConfigType::NOT_SET:
            return {};
          case CacheConfigType::AMPLIFY_MANAGED:
            return "AMPLIFY_MANAGED";
          case CacheConfigType::AMPLIFY_MANAGED_NO_COOKIES:
            return "AMPLIFY_MANAGED_NO_COOKIES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CacheConfigTypeMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
