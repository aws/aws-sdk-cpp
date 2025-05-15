/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IncompatibleLoopNodeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace IncompatibleLoopNodeTypeMapper
      {

        static const int Input_HASH = HashingUtils::HashString("Input");
        static const int Condition_HASH = HashingUtils::HashString("Condition");
        static const int Iterator_HASH = HashingUtils::HashString("Iterator");
        static const int Collector_HASH = HashingUtils::HashString("Collector");


        IncompatibleLoopNodeType GetIncompatibleLoopNodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Input_HASH)
          {
            return IncompatibleLoopNodeType::Input;
          }
          else if (hashCode == Condition_HASH)
          {
            return IncompatibleLoopNodeType::Condition;
          }
          else if (hashCode == Iterator_HASH)
          {
            return IncompatibleLoopNodeType::Iterator;
          }
          else if (hashCode == Collector_HASH)
          {
            return IncompatibleLoopNodeType::Collector;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncompatibleLoopNodeType>(hashCode);
          }

          return IncompatibleLoopNodeType::NOT_SET;
        }

        Aws::String GetNameForIncompatibleLoopNodeType(IncompatibleLoopNodeType enumValue)
        {
          switch(enumValue)
          {
          case IncompatibleLoopNodeType::NOT_SET:
            return {};
          case IncompatibleLoopNodeType::Input:
            return "Input";
          case IncompatibleLoopNodeType::Condition:
            return "Condition";
          case IncompatibleLoopNodeType::Iterator:
            return "Iterator";
          case IncompatibleLoopNodeType::Collector:
            return "Collector";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncompatibleLoopNodeTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
