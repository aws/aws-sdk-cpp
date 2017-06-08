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

#include <aws/sms/model/ReplicationJobState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace ReplicationJobStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ReplicationJobState GetReplicationJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ReplicationJobState::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ReplicationJobState::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReplicationJobState::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReplicationJobState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ReplicationJobState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationJobState>(hashCode);
          }

          return ReplicationJobState::NOT_SET;
        }

        Aws::String GetNameForReplicationJobState(ReplicationJobState enumValue)
        {
          switch(enumValue)
          {
          case ReplicationJobState::PENDING:
            return "PENDING";
          case ReplicationJobState::ACTIVE:
            return "ACTIVE";
          case ReplicationJobState::FAILED:
            return "FAILED";
          case ReplicationJobState::DELETING:
            return "DELETING";
          case ReplicationJobState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ReplicationJobStateMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
