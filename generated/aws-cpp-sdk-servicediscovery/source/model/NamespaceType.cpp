/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/NamespaceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace NamespaceTypeMapper
      {

        static const int DNS_PUBLIC_HASH = HashingUtils::HashString("DNS_PUBLIC");
        static const int DNS_PRIVATE_HASH = HashingUtils::HashString("DNS_PRIVATE");
        static const int HTTP_HASH = HashingUtils::HashString("HTTP");


        NamespaceType GetNamespaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DNS_PUBLIC_HASH)
          {
            return NamespaceType::DNS_PUBLIC;
          }
          else if (hashCode == DNS_PRIVATE_HASH)
          {
            return NamespaceType::DNS_PRIVATE;
          }
          else if (hashCode == HTTP_HASH)
          {
            return NamespaceType::HTTP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceType>(hashCode);
          }

          return NamespaceType::NOT_SET;
        }

        Aws::String GetNameForNamespaceType(NamespaceType enumValue)
        {
          switch(enumValue)
          {
          case NamespaceType::DNS_PUBLIC:
            return "DNS_PUBLIC";
          case NamespaceType::DNS_PRIVATE:
            return "DNS_PRIVATE";
          case NamespaceType::HTTP:
            return "HTTP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamespaceTypeMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
