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
#include <aws/monitoring/model/HistoryItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace HistoryItemTypeMapper
      {

        static const int ConfigurationUpdate_HASH = HashingUtils::HashString("ConfigurationUpdate");
        static const int StateUpdate_HASH = HashingUtils::HashString("StateUpdate");
        static const int Action_HASH = HashingUtils::HashString("Action");


        HistoryItemType GetHistoryItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConfigurationUpdate_HASH)
          {
            return HistoryItemType::ConfigurationUpdate;
          }
          else if (hashCode == StateUpdate_HASH)
          {
            return HistoryItemType::StateUpdate;
          }
          else if (hashCode == Action_HASH)
          {
            return HistoryItemType::Action;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HistoryItemType>(hashCode);
          }

          return HistoryItemType::NOT_SET;
        }

        Aws::String GetNameForHistoryItemType(HistoryItemType enumValue)
        {
          switch(enumValue)
          {
          case HistoryItemType::ConfigurationUpdate:
            return "ConfigurationUpdate";
          case HistoryItemType::StateUpdate:
            return "StateUpdate";
          case HistoryItemType::Action:
            return "Action";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HistoryItemTypeMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
