/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/HybridUpdateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace HybridUpdateTypeMapper
      {

        static const int SelfManagedInstances_HASH = HashingUtils::HashString("SelfManagedInstances");
        static const int HybridAdministratorAccount_HASH = HashingUtils::HashString("HybridAdministratorAccount");


        HybridUpdateType GetHybridUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SelfManagedInstances_HASH)
          {
            return HybridUpdateType::SelfManagedInstances;
          }
          else if (hashCode == HybridAdministratorAccount_HASH)
          {
            return HybridUpdateType::HybridAdministratorAccount;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HybridUpdateType>(hashCode);
          }

          return HybridUpdateType::NOT_SET;
        }

        Aws::String GetNameForHybridUpdateType(HybridUpdateType enumValue)
        {
          switch(enumValue)
          {
          case HybridUpdateType::NOT_SET:
            return {};
          case HybridUpdateType::SelfManagedInstances:
            return "SelfManagedInstances";
          case HybridUpdateType::HybridAdministratorAccount:
            return "HybridAdministratorAccount";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HybridUpdateTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
