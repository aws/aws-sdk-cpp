/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/guardduty/model/ThreatIntelSetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace ThreatIntelSetStatusMapper
      {

        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DEACTIVATING_HASH = HashingUtils::HashString("DEACTIVATING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ThreatIntelSetStatus GetThreatIntelSetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INACTIVE_HASH)
          {
            return ThreatIntelSetStatus::INACTIVE;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return ThreatIntelSetStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ThreatIntelSetStatus::ACTIVE;
          }
          else if (hashCode == DEACTIVATING_HASH)
          {
            return ThreatIntelSetStatus::DEACTIVATING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ThreatIntelSetStatus::ERROR_;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return ThreatIntelSetStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ThreatIntelSetStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThreatIntelSetStatus>(hashCode);
          }

          return ThreatIntelSetStatus::NOT_SET;
        }

        Aws::String GetNameForThreatIntelSetStatus(ThreatIntelSetStatus enumValue)
        {
          switch(enumValue)
          {
          case ThreatIntelSetStatus::INACTIVE:
            return "INACTIVE";
          case ThreatIntelSetStatus::ACTIVATING:
            return "ACTIVATING";
          case ThreatIntelSetStatus::ACTIVE:
            return "ACTIVE";
          case ThreatIntelSetStatus::DEACTIVATING:
            return "DEACTIVATING";
          case ThreatIntelSetStatus::ERROR_:
            return "ERROR";
          case ThreatIntelSetStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case ThreatIntelSetStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThreatIntelSetStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
