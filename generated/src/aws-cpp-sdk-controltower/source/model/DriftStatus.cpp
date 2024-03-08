/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/DriftStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlTower
  {
    namespace Model
    {
      namespace DriftStatusMapper
      {

        static const int DRIFTED_HASH = HashingUtils::HashString("DRIFTED");
        static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");
        static const int NOT_CHECKING_HASH = HashingUtils::HashString("NOT_CHECKING");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        DriftStatus GetDriftStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRIFTED_HASH)
          {
            return DriftStatus::DRIFTED;
          }
          else if (hashCode == IN_SYNC_HASH)
          {
            return DriftStatus::IN_SYNC;
          }
          else if (hashCode == NOT_CHECKING_HASH)
          {
            return DriftStatus::NOT_CHECKING;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return DriftStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DriftStatus>(hashCode);
          }

          return DriftStatus::NOT_SET;
        }

        Aws::String GetNameForDriftStatus(DriftStatus enumValue)
        {
          switch(enumValue)
          {
          case DriftStatus::NOT_SET:
            return {};
          case DriftStatus::DRIFTED:
            return "DRIFTED";
          case DriftStatus::IN_SYNC:
            return "IN_SYNC";
          case DriftStatus::NOT_CHECKING:
            return "NOT_CHECKING";
          case DriftStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DriftStatusMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
