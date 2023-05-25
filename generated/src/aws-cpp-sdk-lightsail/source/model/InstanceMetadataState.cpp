/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceMetadataState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace InstanceMetadataStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int applied_HASH = HashingUtils::HashString("applied");


        InstanceMetadataState GetInstanceMetadataStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return InstanceMetadataState::pending;
          }
          else if (hashCode == applied_HASH)
          {
            return InstanceMetadataState::applied;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMetadataState>(hashCode);
          }

          return InstanceMetadataState::NOT_SET;
        }

        Aws::String GetNameForInstanceMetadataState(InstanceMetadataState enumValue)
        {
          switch(enumValue)
          {
          case InstanceMetadataState::pending:
            return "pending";
          case InstanceMetadataState::applied:
            return "applied";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceMetadataStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
