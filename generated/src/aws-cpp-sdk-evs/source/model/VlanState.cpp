/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/VlanState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EVS
  {
    namespace Model
    {
      namespace VlanStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");


        VlanState GetVlanStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return VlanState::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return VlanState::CREATED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return VlanState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VlanState::DELETED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return VlanState::CREATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VlanState>(hashCode);
          }

          return VlanState::NOT_SET;
        }

        Aws::String GetNameForVlanState(VlanState enumValue)
        {
          switch(enumValue)
          {
          case VlanState::NOT_SET:
            return {};
          case VlanState::CREATING:
            return "CREATING";
          case VlanState::CREATED:
            return "CREATED";
          case VlanState::DELETING:
            return "DELETING";
          case VlanState::DELETED:
            return "DELETED";
          case VlanState::CREATE_FAILED:
            return "CREATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VlanStateMapper
    } // namespace Model
  } // namespace EVS
} // namespace Aws
