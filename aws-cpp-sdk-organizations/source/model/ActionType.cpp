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
#include <aws/organizations/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static const int INVITE_HASH = HashingUtils::HashString("INVITE");
        static const int ENABLE_ALL_FEATURES_HASH = HashingUtils::HashString("ENABLE_ALL_FEATURES");
        static const int APPROVE_ALL_FEATURES_HASH = HashingUtils::HashString("APPROVE_ALL_FEATURES");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVITE_HASH)
          {
            return ActionType::INVITE;
          }
          else if (hashCode == ENABLE_ALL_FEATURES_HASH)
          {
            return ActionType::ENABLE_ALL_FEATURES;
          }
          else if (hashCode == APPROVE_ALL_FEATURES_HASH)
          {
            return ActionType::APPROVE_ALL_FEATURES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::INVITE:
            return "INVITE";
          case ActionType::ENABLE_ALL_FEATURES:
            return "ENABLE_ALL_FEATURES";
          case ActionType::APPROVE_ALL_FEATURES:
            return "APPROVE_ALL_FEATURES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
