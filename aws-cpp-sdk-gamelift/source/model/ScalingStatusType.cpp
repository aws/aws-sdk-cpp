/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/model/ScalingStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace ScalingStatusTypeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATE_REQUESTED_HASH = HashingUtils::HashString("UPDATE_REQUESTED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETE_REQUESTED_HASH = HashingUtils::HashString("DELETE_REQUESTED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ScalingStatusType GetScalingStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ScalingStatusType::ACTIVE;
          }
          else if (hashCode == UPDATE_REQUESTED_HASH)
          {
            return ScalingStatusType::UPDATE_REQUESTED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ScalingStatusType::UPDATING;
          }
          else if (hashCode == DELETE_REQUESTED_HASH)
          {
            return ScalingStatusType::DELETE_REQUESTED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ScalingStatusType::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ScalingStatusType::DELETED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ScalingStatusType::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingStatusType>(hashCode);
          }

          return ScalingStatusType::NOT_SET;
        }

        Aws::String GetNameForScalingStatusType(ScalingStatusType enumValue)
        {
          switch(enumValue)
          {
          case ScalingStatusType::ACTIVE:
            return "ACTIVE";
          case ScalingStatusType::UPDATE_REQUESTED:
            return "UPDATE_REQUESTED";
          case ScalingStatusType::UPDATING:
            return "UPDATING";
          case ScalingStatusType::DELETE_REQUESTED:
            return "DELETE_REQUESTED";
          case ScalingStatusType::DELETING:
            return "DELETING";
          case ScalingStatusType::DELETED:
            return "DELETED";
          case ScalingStatusType::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ScalingStatusTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
