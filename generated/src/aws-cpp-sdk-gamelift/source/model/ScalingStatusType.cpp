/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ScalingStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace ScalingStatusTypeMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATE_REQUESTED_HASH = ConstExprHashingUtils::HashString("UPDATE_REQUESTED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETE_REQUESTED_HASH = ConstExprHashingUtils::HashString("DELETE_REQUESTED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        ScalingStatusType GetScalingStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ScalingStatusType::ACTIVE;
          }
          else if (hashCode == UPDATE_REQUESTED_HASH)
          {
            return ScalingStatusType::UPDATE_REQUESTED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ScalingStatusType::UPDATING;
          }
          else if (hashCode == DELETE_REQUESTED_HASH)
          {
            return ScalingStatusType::DELETE_REQUESTED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ScalingStatusType::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ScalingStatusType::DELETED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ScalingStatusType::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingStatusType>(hashCode);
          }

          return ScalingStatusType::NOT_SET;
        }

        Aws::String GetNameForScalingStatusType(ScalingStatusType enumValue)
        {
          switch(enumValue)
          {
          case ScalingStatusType::NOT_SET:
            return {};
          case ScalingStatusType::ACTIVE:
            return "ACTIVE";
          case ScalingStatusType::UPDATE_REQUESTED:
            return "UPDATE_REQUESTED";
          case ScalingStatusType::UPDATING:
            return "UPDATING";
          case ScalingStatusType::DELETE_REQUESTED:
            return "DELETE_REQUESTED";
          case ScalingStatusType::DELETING:
            return "DELETING";
          case ScalingStatusType::DELETED:
            return "DELETED";
          case ScalingStatusType::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingStatusTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
