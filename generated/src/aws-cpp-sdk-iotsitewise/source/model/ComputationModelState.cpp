/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ComputationModelState.h>
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
      namespace ComputationModelStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ComputationModelState GetComputationModelStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ComputationModelState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ComputationModelState::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ComputationModelState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ComputationModelState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ComputationModelState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputationModelState>(hashCode);
          }

          return ComputationModelState::NOT_SET;
        }

        Aws::String GetNameForComputationModelState(ComputationModelState enumValue)
        {
          switch(enumValue)
          {
          case ComputationModelState::NOT_SET:
            return {};
          case ComputationModelState::CREATING:
            return "CREATING";
          case ComputationModelState::ACTIVE:
            return "ACTIVE";
          case ComputationModelState::UPDATING:
            return "UPDATING";
          case ComputationModelState::DELETING:
            return "DELETING";
          case ComputationModelState::FAILED:
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

      } // namespace ComputationModelStateMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
