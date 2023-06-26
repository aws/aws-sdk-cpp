/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/TLSSecurityPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace TLSSecurityPolicyMapper
      {

        static const int Policy_Min_TLS_1_0_2019_07_HASH = HashingUtils::HashString("Policy-Min-TLS-1-0-2019-07");
        static const int Policy_Min_TLS_1_2_2019_07_HASH = HashingUtils::HashString("Policy-Min-TLS-1-2-2019-07");


        TLSSecurityPolicy GetTLSSecurityPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Policy_Min_TLS_1_0_2019_07_HASH)
          {
            return TLSSecurityPolicy::Policy_Min_TLS_1_0_2019_07;
          }
          else if (hashCode == Policy_Min_TLS_1_2_2019_07_HASH)
          {
            return TLSSecurityPolicy::Policy_Min_TLS_1_2_2019_07;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TLSSecurityPolicy>(hashCode);
          }

          return TLSSecurityPolicy::NOT_SET;
        }

        Aws::String GetNameForTLSSecurityPolicy(TLSSecurityPolicy enumValue)
        {
          switch(enumValue)
          {
          case TLSSecurityPolicy::Policy_Min_TLS_1_0_2019_07:
            return "Policy-Min-TLS-1-0-2019-07";
          case TLSSecurityPolicy::Policy_Min_TLS_1_2_2019_07:
            return "Policy-Min-TLS-1-2-2019-07";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TLSSecurityPolicyMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
