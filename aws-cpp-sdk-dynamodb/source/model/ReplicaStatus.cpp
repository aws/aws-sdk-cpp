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

#include <aws/dynamodb/model/ReplicaStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ReplicaStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        ReplicaStatus GetReplicaStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ReplicaStatus::CREATING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return ReplicaStatus::CREATION_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ReplicaStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReplicaStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ReplicaStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicaStatus>(hashCode);
          }

          return ReplicaStatus::NOT_SET;
        }

        Aws::String GetNameForReplicaStatus(ReplicaStatus enumValue)
        {
          switch(enumValue)
          {
          case ReplicaStatus::CREATING:
            return "CREATING";
          case ReplicaStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          case ReplicaStatus::UPDATING:
            return "UPDATING";
          case ReplicaStatus::DELETING:
            return "DELETING";
          case ReplicaStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicaStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
