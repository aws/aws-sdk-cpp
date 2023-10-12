/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceEventWindowState.h>
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
      namespace InstanceEventWindowStateMapper
      {

        static constexpr uint32_t creating_HASH = ConstExprHashingUtils::HashString("creating");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");


        InstanceEventWindowState GetInstanceEventWindowStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == creating_HASH)
          {
            return InstanceEventWindowState::creating;
          }
          else if (hashCode == deleting_HASH)
          {
            return InstanceEventWindowState::deleting;
          }
          else if (hashCode == active_HASH)
          {
            return InstanceEventWindowState::active;
          }
          else if (hashCode == deleted_HASH)
          {
            return InstanceEventWindowState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceEventWindowState>(hashCode);
          }

          return InstanceEventWindowState::NOT_SET;
        }

        Aws::String GetNameForInstanceEventWindowState(InstanceEventWindowState enumValue)
        {
          switch(enumValue)
          {
          case InstanceEventWindowState::NOT_SET:
            return {};
          case InstanceEventWindowState::creating:
            return "creating";
          case InstanceEventWindowState::deleting:
            return "deleting";
          case InstanceEventWindowState::active:
            return "active";
          case InstanceEventWindowState::deleted:
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

      } // namespace InstanceEventWindowStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
