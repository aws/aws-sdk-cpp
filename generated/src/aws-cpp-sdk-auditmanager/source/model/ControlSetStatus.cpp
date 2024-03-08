/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ControlSetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace ControlSetStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UNDER_REVIEW_HASH = HashingUtils::HashString("UNDER_REVIEW");
        static const int REVIEWED_HASH = HashingUtils::HashString("REVIEWED");


        ControlSetStatus GetControlSetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ControlSetStatus::ACTIVE;
          }
          else if (hashCode == UNDER_REVIEW_HASH)
          {
            return ControlSetStatus::UNDER_REVIEW;
          }
          else if (hashCode == REVIEWED_HASH)
          {
            return ControlSetStatus::REVIEWED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlSetStatus>(hashCode);
          }

          return ControlSetStatus::NOT_SET;
        }

        Aws::String GetNameForControlSetStatus(ControlSetStatus enumValue)
        {
          switch(enumValue)
          {
          case ControlSetStatus::NOT_SET:
            return {};
          case ControlSetStatus::ACTIVE:
            return "ACTIVE";
          case ControlSetStatus::UNDER_REVIEW:
            return "UNDER_REVIEW";
          case ControlSetStatus::REVIEWED:
            return "REVIEWED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlSetStatusMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
