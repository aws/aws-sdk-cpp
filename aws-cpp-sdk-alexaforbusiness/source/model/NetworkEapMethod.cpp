/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/NetworkEapMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace NetworkEapMethodMapper
      {

        static const int EAP_TLS_HASH = HashingUtils::HashString("EAP_TLS");


        NetworkEapMethod GetNetworkEapMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EAP_TLS_HASH)
          {
            return NetworkEapMethod::EAP_TLS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkEapMethod>(hashCode);
          }

          return NetworkEapMethod::NOT_SET;
        }

        Aws::String GetNameForNetworkEapMethod(NetworkEapMethod enumValue)
        {
          switch(enumValue)
          {
          case NetworkEapMethod::EAP_TLS:
            return "EAP_TLS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkEapMethodMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
