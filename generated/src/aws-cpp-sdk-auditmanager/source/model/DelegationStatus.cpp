/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DelegationStatus.h>
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
      namespace DelegationStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int UNDER_REVIEW_HASH = HashingUtils::HashString("UNDER_REVIEW");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");


        DelegationStatus GetDelegationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return DelegationStatus::IN_PROGRESS;
          }
          else if (hashCode == UNDER_REVIEW_HASH)
          {
            return DelegationStatus::UNDER_REVIEW;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return DelegationStatus::COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DelegationStatus>(hashCode);
          }

          return DelegationStatus::NOT_SET;
        }

        Aws::String GetNameForDelegationStatus(DelegationStatus enumValue)
        {
          switch(enumValue)
          {
          case DelegationStatus::NOT_SET:
            return {};
          case DelegationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DelegationStatus::UNDER_REVIEW:
            return "UNDER_REVIEW";
          case DelegationStatus::COMPLETE:
            return "COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DelegationStatusMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
