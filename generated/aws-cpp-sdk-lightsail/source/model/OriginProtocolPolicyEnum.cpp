/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/OriginProtocolPolicyEnum.h>
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
      namespace OriginProtocolPolicyEnumMapper
      {

        static const int http_only_HASH = HashingUtils::HashString("http-only");
        static const int https_only_HASH = HashingUtils::HashString("https-only");


        OriginProtocolPolicyEnum GetOriginProtocolPolicyEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == http_only_HASH)
          {
            return OriginProtocolPolicyEnum::http_only;
          }
          else if (hashCode == https_only_HASH)
          {
            return OriginProtocolPolicyEnum::https_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginProtocolPolicyEnum>(hashCode);
          }

          return OriginProtocolPolicyEnum::NOT_SET;
        }

        Aws::String GetNameForOriginProtocolPolicyEnum(OriginProtocolPolicyEnum enumValue)
        {
          switch(enumValue)
          {
          case OriginProtocolPolicyEnum::http_only:
            return "http-only";
          case OriginProtocolPolicyEnum::https_only:
            return "https-only";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginProtocolPolicyEnumMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
