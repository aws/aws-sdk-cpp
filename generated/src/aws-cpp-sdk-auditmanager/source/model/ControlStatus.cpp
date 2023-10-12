/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ControlStatus.h>
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
      namespace ControlStatusMapper
      {

        static constexpr uint32_t UNDER_REVIEW_HASH = ConstExprHashingUtils::HashString("UNDER_REVIEW");
        static constexpr uint32_t REVIEWED_HASH = ConstExprHashingUtils::HashString("REVIEWED");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        ControlStatus GetControlStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNDER_REVIEW_HASH)
          {
            return ControlStatus::UNDER_REVIEW;
          }
          else if (hashCode == REVIEWED_HASH)
          {
            return ControlStatus::REVIEWED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ControlStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlStatus>(hashCode);
          }

          return ControlStatus::NOT_SET;
        }

        Aws::String GetNameForControlStatus(ControlStatus enumValue)
        {
          switch(enumValue)
          {
          case ControlStatus::NOT_SET:
            return {};
          case ControlStatus::UNDER_REVIEW:
            return "UNDER_REVIEW";
          case ControlStatus::REVIEWED:
            return "REVIEWED";
          case ControlStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlStatusMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
