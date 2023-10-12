/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ReplicationScope.h>
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
      namespace ReplicationScopeMapper
      {

        static constexpr uint32_t Domain_HASH = ConstExprHashingUtils::HashString("Domain");


        ReplicationScope GetReplicationScopeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Domain_HASH)
          {
            return ReplicationScope::Domain;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationScope>(hashCode);
          }

          return ReplicationScope::NOT_SET;
        }

        Aws::String GetNameForReplicationScope(ReplicationScope enumValue)
        {
          switch(enumValue)
          {
          case ReplicationScope::NOT_SET:
            return {};
          case ReplicationScope::Domain:
            return "Domain";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationScopeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
