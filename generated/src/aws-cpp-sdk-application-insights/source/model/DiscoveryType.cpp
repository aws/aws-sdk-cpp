/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/DiscoveryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace DiscoveryTypeMapper
      {

        static const int RESOURCE_GROUP_BASED_HASH = HashingUtils::HashString("RESOURCE_GROUP_BASED");
        static const int ACCOUNT_BASED_HASH = HashingUtils::HashString("ACCOUNT_BASED");


        DiscoveryType GetDiscoveryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_GROUP_BASED_HASH)
          {
            return DiscoveryType::RESOURCE_GROUP_BASED;
          }
          else if (hashCode == ACCOUNT_BASED_HASH)
          {
            return DiscoveryType::ACCOUNT_BASED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscoveryType>(hashCode);
          }

          return DiscoveryType::NOT_SET;
        }

        Aws::String GetNameForDiscoveryType(DiscoveryType enumValue)
        {
          switch(enumValue)
          {
          case DiscoveryType::NOT_SET:
            return {};
          case DiscoveryType::RESOURCE_GROUP_BASED:
            return "RESOURCE_GROUP_BASED";
          case DiscoveryType::ACCOUNT_BASED:
            return "ACCOUNT_BASED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscoveryTypeMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
