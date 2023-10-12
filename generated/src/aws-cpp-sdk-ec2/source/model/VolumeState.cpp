/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VolumeState.h>
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
      namespace VolumeStateMapper
      {

        static constexpr uint32_t creating_HASH = ConstExprHashingUtils::HashString("creating");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t in_use_HASH = ConstExprHashingUtils::HashString("in-use");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");
        static constexpr uint32_t error_HASH = ConstExprHashingUtils::HashString("error");


        VolumeState GetVolumeStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == creating_HASH)
          {
            return VolumeState::creating;
          }
          else if (hashCode == available_HASH)
          {
            return VolumeState::available;
          }
          else if (hashCode == in_use_HASH)
          {
            return VolumeState::in_use;
          }
          else if (hashCode == deleting_HASH)
          {
            return VolumeState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return VolumeState::deleted;
          }
          else if (hashCode == error_HASH)
          {
            return VolumeState::error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeState>(hashCode);
          }

          return VolumeState::NOT_SET;
        }

        Aws::String GetNameForVolumeState(VolumeState enumValue)
        {
          switch(enumValue)
          {
          case VolumeState::NOT_SET:
            return {};
          case VolumeState::creating:
            return "creating";
          case VolumeState::available:
            return "available";
          case VolumeState::in_use:
            return "in-use";
          case VolumeState::deleting:
            return "deleting";
          case VolumeState::deleted:
            return "deleted";
          case VolumeState::error:
            return "error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
