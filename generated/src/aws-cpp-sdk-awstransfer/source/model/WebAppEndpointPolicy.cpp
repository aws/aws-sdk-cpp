/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/WebAppEndpointPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace WebAppEndpointPolicyMapper
      {

        static const int FIPS_HASH = HashingUtils::HashString("FIPS");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        WebAppEndpointPolicy GetWebAppEndpointPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIPS_HASH)
          {
            return WebAppEndpointPolicy::FIPS;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return WebAppEndpointPolicy::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebAppEndpointPolicy>(hashCode);
          }

          return WebAppEndpointPolicy::NOT_SET;
        }

        Aws::String GetNameForWebAppEndpointPolicy(WebAppEndpointPolicy enumValue)
        {
          switch(enumValue)
          {
          case WebAppEndpointPolicy::NOT_SET:
            return {};
          case WebAppEndpointPolicy::FIPS:
            return "FIPS";
          case WebAppEndpointPolicy::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebAppEndpointPolicyMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
