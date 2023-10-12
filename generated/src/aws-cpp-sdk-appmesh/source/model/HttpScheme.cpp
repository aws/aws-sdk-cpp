/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpScheme.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace HttpSchemeMapper
      {

        static constexpr uint32_t http_HASH = ConstExprHashingUtils::HashString("http");
        static constexpr uint32_t https_HASH = ConstExprHashingUtils::HashString("https");


        HttpScheme GetHttpSchemeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == http_HASH)
          {
            return HttpScheme::http;
          }
          else if (hashCode == https_HASH)
          {
            return HttpScheme::https;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpScheme>(hashCode);
          }

          return HttpScheme::NOT_SET;
        }

        Aws::String GetNameForHttpScheme(HttpScheme enumValue)
        {
          switch(enumValue)
          {
          case HttpScheme::NOT_SET:
            return {};
          case HttpScheme::http:
            return "http";
          case HttpScheme::https:
            return "https";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HttpSchemeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
