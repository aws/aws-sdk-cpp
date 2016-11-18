/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int creating_HASH = HashingUtils::HashString("creating");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int in_use_HASH = HashingUtils::HashString("in-use");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int error_HASH = HashingUtils::HashString("error");


        VolumeState GetVolumeStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace VolumeStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
