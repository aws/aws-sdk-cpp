/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMetadataOptionsState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace InstanceMetadataOptionsStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int applied_HASH = HashingUtils::HashString("applied");


        InstanceMetadataOptionsState GetInstanceMetadataOptionsStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return InstanceMetadataOptionsState::pending;
          }
          else if (hashCode == applied_HASH)
          {
            return InstanceMetadataOptionsState::applied;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMetadataOptionsState>(hashCode);
          }

          return InstanceMetadataOptionsState::NOT_SET;
        }

        Aws::String GetNameForInstanceMetadataOptionsState(InstanceMetadataOptionsState enumValue)
        {
          switch(enumValue)
          {
          case InstanceMetadataOptionsState::pending:
            return "pending";
          case InstanceMetadataOptionsState::applied:
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

      } // namespace InstanceMetadataOptionsStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
