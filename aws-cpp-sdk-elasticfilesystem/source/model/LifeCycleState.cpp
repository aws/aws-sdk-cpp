/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/LifeCycleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace LifeCycleStateMapper
      {

        static const int creating_HASH = HashingUtils::HashString("creating");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int updating_HASH = HashingUtils::HashString("updating");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int error_HASH = HashingUtils::HashString("error");


        LifeCycleState GetLifeCycleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == creating_HASH)
          {
            return LifeCycleState::creating;
          }
          else if (hashCode == available_HASH)
          {
            return LifeCycleState::available;
          }
          else if (hashCode == updating_HASH)
          {
            return LifeCycleState::updating;
          }
          else if (hashCode == deleting_HASH)
          {
            return LifeCycleState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return LifeCycleState::deleted;
          }
          else if (hashCode == error_HASH)
          {
            return LifeCycleState::error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifeCycleState>(hashCode);
          }

          return LifeCycleState::NOT_SET;
        }

        Aws::String GetNameForLifeCycleState(LifeCycleState enumValue)
        {
          switch(enumValue)
          {
          case LifeCycleState::creating:
            return "creating";
          case LifeCycleState::available:
            return "available";
          case LifeCycleState::updating:
            return "updating";
          case LifeCycleState::deleting:
            return "deleting";
          case LifeCycleState::deleted:
            return "deleted";
          case LifeCycleState::error:
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

      } // namespace LifeCycleStateMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
