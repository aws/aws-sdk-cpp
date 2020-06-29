/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace OpsItemStatusMapper
      {

        static const int Open_HASH = HashingUtils::HashString("Open");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Resolved_HASH = HashingUtils::HashString("Resolved");


        OpsItemStatus GetOpsItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Open_HASH)
          {
            return OpsItemStatus::Open;
          }
          else if (hashCode == InProgress_HASH)
          {
            return OpsItemStatus::InProgress;
          }
          else if (hashCode == Resolved_HASH)
          {
            return OpsItemStatus::Resolved;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemStatus>(hashCode);
          }

          return OpsItemStatus::NOT_SET;
        }

        Aws::String GetNameForOpsItemStatus(OpsItemStatus enumValue)
        {
          switch(enumValue)
          {
          case OpsItemStatus::Open:
            return "Open";
          case OpsItemStatus::InProgress:
            return "InProgress";
          case OpsItemStatus::Resolved:
            return "Resolved";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
