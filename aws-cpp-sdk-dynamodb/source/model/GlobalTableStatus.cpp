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

#include <aws/dynamodb/model/GlobalTableStatus.h>
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
      namespace GlobalTableStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        GlobalTableStatus GetGlobalTableStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return GlobalTableStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return GlobalTableStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GlobalTableStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return GlobalTableStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalTableStatus>(hashCode);
          }

          return GlobalTableStatus::NOT_SET;
        }

        Aws::String GetNameForGlobalTableStatus(GlobalTableStatus enumValue)
        {
          switch(enumValue)
          {
          case GlobalTableStatus::CREATING:
            return "CREATING";
          case GlobalTableStatus::ACTIVE:
            return "ACTIVE";
          case GlobalTableStatus::DELETING:
            return "DELETING";
          case GlobalTableStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalTableStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
