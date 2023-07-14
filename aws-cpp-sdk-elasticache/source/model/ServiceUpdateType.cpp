/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ServiceUpdateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace ServiceUpdateTypeMapper
      {

        static const int security_update_HASH = HashingUtils::HashString("security-update");


        ServiceUpdateType GetServiceUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == security_update_HASH)
          {
            return ServiceUpdateType::security_update;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceUpdateType>(hashCode);
          }

          return ServiceUpdateType::NOT_SET;
        }

        Aws::String GetNameForServiceUpdateType(ServiceUpdateType enumValue)
        {
          switch(enumValue)
          {
          case ServiceUpdateType::security_update:
            return "security-update";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceUpdateTypeMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
