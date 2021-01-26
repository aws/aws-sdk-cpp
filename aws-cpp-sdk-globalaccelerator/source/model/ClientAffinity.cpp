/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ClientAffinity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlobalAccelerator
  {
    namespace Model
    {
      namespace ClientAffinityMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SOURCE_IP_HASH = HashingUtils::HashString("SOURCE_IP");


        ClientAffinity GetClientAffinityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ClientAffinity::NONE;
          }
          else if (hashCode == SOURCE_IP_HASH)
          {
            return ClientAffinity::SOURCE_IP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientAffinity>(hashCode);
          }

          return ClientAffinity::NOT_SET;
        }

        Aws::String GetNameForClientAffinity(ClientAffinity enumValue)
        {
          switch(enumValue)
          {
          case ClientAffinity::NONE:
            return "NONE";
          case ClientAffinity::SOURCE_IP:
            return "SOURCE_IP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientAffinityMapper
    } // namespace Model
  } // namespace GlobalAccelerator
} // namespace Aws
