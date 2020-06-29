/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ResourceValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ResourceValueTypeMapper
      {

        static const int RESOURCE_ID_HASH = HashingUtils::HashString("RESOURCE_ID");


        ResourceValueType GetResourceValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_ID_HASH)
          {
            return ResourceValueType::RESOURCE_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceValueType>(hashCode);
          }

          return ResourceValueType::NOT_SET;
        }

        Aws::String GetNameForResourceValueType(ResourceValueType enumValue)
        {
          switch(enumValue)
          {
          case ResourceValueType::RESOURCE_ID:
            return "RESOURCE_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceValueTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
