/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
