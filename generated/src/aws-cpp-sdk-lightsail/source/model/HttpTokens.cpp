/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/HttpTokens.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace HttpTokensMapper
      {

        static const int optional_HASH = HashingUtils::HashString("optional");
        static const int required_HASH = HashingUtils::HashString("required");


        HttpTokens GetHttpTokensForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == optional_HASH)
          {
            return HttpTokens::optional;
          }
          else if (hashCode == required_HASH)
          {
            return HttpTokens::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpTokens>(hashCode);
          }

          return HttpTokens::NOT_SET;
        }

        Aws::String GetNameForHttpTokens(HttpTokens enumValue)
        {
          switch(enumValue)
          {
          case HttpTokens::optional:
            return "optional";
          case HttpTokens::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HttpTokensMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
