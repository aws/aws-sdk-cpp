/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PlacementGroupState.h>
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
      namespace PlacementGroupStateMapper
      {

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");


        PlacementGroupState GetPlacementGroupStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return PlacementGroupState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return PlacementGroupState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return PlacementGroupState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return PlacementGroupState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlacementGroupState>(hashCode);
          }

          return PlacementGroupState::NOT_SET;
        }

        Aws::String GetNameForPlacementGroupState(PlacementGroupState enumValue)
        {
          switch(enumValue)
          {
          case PlacementGroupState::NOT_SET:
            return {};
          case PlacementGroupState::pending:
            return "pending";
          case PlacementGroupState::available:
            return "available";
          case PlacementGroupState::deleting:
            return "deleting";
          case PlacementGroupState::deleted:
            return "deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlacementGroupStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
