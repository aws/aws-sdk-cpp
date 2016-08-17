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
#include <aws/ssm/model/CommandFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace CommandFilterKeyMapper
      {

        static const int InvokedAfter_HASH = HashingUtils::HashString("InvokedAfter");
        static const int InvokedBefore_HASH = HashingUtils::HashString("InvokedBefore");
        static const int Status_HASH = HashingUtils::HashString("Status");


        CommandFilterKey GetCommandFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvokedAfter_HASH)
          {
            return CommandFilterKey::InvokedAfter;
          }
          else if (hashCode == InvokedBefore_HASH)
          {
            return CommandFilterKey::InvokedBefore;
          }
          else if (hashCode == Status_HASH)
          {
            return CommandFilterKey::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommandFilterKey>(hashCode);
          }

          return CommandFilterKey::NOT_SET;
        }

        Aws::String GetNameForCommandFilterKey(CommandFilterKey enumValue)
        {
          switch(enumValue)
          {
          case CommandFilterKey::InvokedAfter:
            return "InvokedAfter";
          case CommandFilterKey::InvokedBefore:
            return "InvokedBefore";
          case CommandFilterKey::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CommandFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
