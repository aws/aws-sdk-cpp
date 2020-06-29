/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int ExecutionStage_HASH = HashingUtils::HashString("ExecutionStage");
        static const int DocumentName_HASH = HashingUtils::HashString("DocumentName");


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
          else if (hashCode == ExecutionStage_HASH)
          {
            return CommandFilterKey::ExecutionStage;
          }
          else if (hashCode == DocumentName_HASH)
          {
            return CommandFilterKey::DocumentName;
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
          case CommandFilterKey::ExecutionStage:
            return "ExecutionStage";
          case CommandFilterKey::DocumentName:
            return "DocumentName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommandFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
