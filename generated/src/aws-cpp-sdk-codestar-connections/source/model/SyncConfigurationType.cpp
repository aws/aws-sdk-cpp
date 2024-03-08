/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/SyncConfigurationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarconnections
  {
    namespace Model
    {
      namespace SyncConfigurationTypeMapper
      {

        static const int CFN_STACK_SYNC_HASH = HashingUtils::HashString("CFN_STACK_SYNC");


        SyncConfigurationType GetSyncConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CFN_STACK_SYNC_HASH)
          {
            return SyncConfigurationType::CFN_STACK_SYNC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncConfigurationType>(hashCode);
          }

          return SyncConfigurationType::NOT_SET;
        }

        Aws::String GetNameForSyncConfigurationType(SyncConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case SyncConfigurationType::NOT_SET:
            return {};
          case SyncConfigurationType::CFN_STACK_SYNC:
            return "CFN_STACK_SYNC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SyncConfigurationTypeMapper
    } // namespace Model
  } // namespace CodeStarconnections
} // namespace Aws
