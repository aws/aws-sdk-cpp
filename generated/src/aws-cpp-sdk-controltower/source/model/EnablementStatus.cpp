/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnablementStatus.h>
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
      namespace EnablementStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UNDER_CHANGE_HASH = HashingUtils::HashString("UNDER_CHANGE");


        EnablementStatus GetEnablementStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return EnablementStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EnablementStatus::FAILED;
          }
          else if (hashCode == UNDER_CHANGE_HASH)
          {
            return EnablementStatus::UNDER_CHANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnablementStatus>(hashCode);
          }

          return EnablementStatus::NOT_SET;
        }

        Aws::String GetNameForEnablementStatus(EnablementStatus enumValue)
        {
          switch(enumValue)
          {
          case EnablementStatus::NOT_SET:
            return {};
          case EnablementStatus::SUCCEEDED:
            return "SUCCEEDED";
          case EnablementStatus::FAILED:
            return "FAILED";
          case EnablementStatus::UNDER_CHANGE:
            return "UNDER_CHANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnablementStatusMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
