/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetModelState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace AssetModelStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t PROPAGATING_HASH = ConstExprHashingUtils::HashString("PROPAGATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        AssetModelState GetAssetModelStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AssetModelState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AssetModelState::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AssetModelState::UPDATING;
          }
          else if (hashCode == PROPAGATING_HASH)
          {
            return AssetModelState::PROPAGATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AssetModelState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AssetModelState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetModelState>(hashCode);
          }

          return AssetModelState::NOT_SET;
        }

        Aws::String GetNameForAssetModelState(AssetModelState enumValue)
        {
          switch(enumValue)
          {
          case AssetModelState::NOT_SET:
            return {};
          case AssetModelState::CREATING:
            return "CREATING";
          case AssetModelState::ACTIVE:
            return "ACTIVE";
          case AssetModelState::UPDATING:
            return "UPDATING";
          case AssetModelState::PROPAGATING:
            return "PROPAGATING";
          case AssetModelState::DELETING:
            return "DELETING";
          case AssetModelState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetModelStateMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
