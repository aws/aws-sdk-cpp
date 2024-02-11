/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/DnsResponseType.h>
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
      namespace DnsResponseTypeMapper
      {

        static const int LOADBALANCER_HASH = HashingUtils::HashString("LOADBALANCER");
        static const int ENDPOINTS_HASH = HashingUtils::HashString("ENDPOINTS");


        DnsResponseType GetDnsResponseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOADBALANCER_HASH)
          {
            return DnsResponseType::LOADBALANCER;
          }
          else if (hashCode == ENDPOINTS_HASH)
          {
            return DnsResponseType::ENDPOINTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DnsResponseType>(hashCode);
          }

          return DnsResponseType::NOT_SET;
        }

        Aws::String GetNameForDnsResponseType(DnsResponseType enumValue)
        {
          switch(enumValue)
          {
          case DnsResponseType::NOT_SET:
            return {};
          case DnsResponseType::LOADBALANCER:
            return "LOADBALANCER";
          case DnsResponseType::ENDPOINTS:
            return "ENDPOINTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DnsResponseTypeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
