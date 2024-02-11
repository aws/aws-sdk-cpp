/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DeletionConfigurationItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace DeletionConfigurationItemTypeMapper
      {

        static const int SERVER_HASH = HashingUtils::HashString("SERVER");


        DeletionConfigurationItemType GetDeletionConfigurationItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVER_HASH)
          {
            return DeletionConfigurationItemType::SERVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletionConfigurationItemType>(hashCode);
          }

          return DeletionConfigurationItemType::NOT_SET;
        }

        Aws::String GetNameForDeletionConfigurationItemType(DeletionConfigurationItemType enumValue)
        {
          switch(enumValue)
          {
          case DeletionConfigurationItemType::NOT_SET:
            return {};
          case DeletionConfigurationItemType::SERVER:
            return "SERVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletionConfigurationItemTypeMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
