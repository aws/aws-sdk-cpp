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

#include <aws/codestar-notifications/model/ListNotificationRulesFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarNotifications
  {
    namespace Model
    {
      namespace ListNotificationRulesFilterNameMapper
      {

        static const int EVENT_TYPE_ID_HASH = HashingUtils::HashString("EVENT_TYPE_ID");
        static const int CREATED_BY_HASH = HashingUtils::HashString("CREATED_BY");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int TARGET_ADDRESS_HASH = HashingUtils::HashString("TARGET_ADDRESS");


        ListNotificationRulesFilterName GetListNotificationRulesFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVENT_TYPE_ID_HASH)
          {
            return ListNotificationRulesFilterName::EVENT_TYPE_ID;
          }
          else if (hashCode == CREATED_BY_HASH)
          {
            return ListNotificationRulesFilterName::CREATED_BY;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return ListNotificationRulesFilterName::RESOURCE;
          }
          else if (hashCode == TARGET_ADDRESS_HASH)
          {
            return ListNotificationRulesFilterName::TARGET_ADDRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListNotificationRulesFilterName>(hashCode);
          }

          return ListNotificationRulesFilterName::NOT_SET;
        }

        Aws::String GetNameForListNotificationRulesFilterName(ListNotificationRulesFilterName enumValue)
        {
          switch(enumValue)
          {
          case ListNotificationRulesFilterName::EVENT_TYPE_ID:
            return "EVENT_TYPE_ID";
          case ListNotificationRulesFilterName::CREATED_BY:
            return "CREATED_BY";
          case ListNotificationRulesFilterName::RESOURCE:
            return "RESOURCE";
          case ListNotificationRulesFilterName::TARGET_ADDRESS:
            return "TARGET_ADDRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListNotificationRulesFilterNameMapper
    } // namespace Model
  } // namespace CodeStarNotifications
} // namespace Aws
