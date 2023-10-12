/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetState.h>
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
      namespace AssetStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        AssetState GetAssetStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AssetState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AssetState::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AssetState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AssetState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AssetState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetState>(hashCode);
          }

          return AssetState::NOT_SET;
        }

        Aws::String GetNameForAssetState(AssetState enumValue)
        {
          switch(enumValue)
          {
          case AssetState::NOT_SET:
            return {};
          case AssetState::CREATING:
            return "CREATING";
          case AssetState::ACTIVE:
            return "ACTIVE";
          case AssetState::UPDATING:
            return "UPDATING";
          case AssetState::DELETING:
            return "DELETING";
          case AssetState::FAILED:
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

      } // namespace AssetStateMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
