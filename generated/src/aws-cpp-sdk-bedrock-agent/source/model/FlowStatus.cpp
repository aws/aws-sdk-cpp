/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowStatus.h>
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
      namespace FlowStatusMapper
      {

        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Prepared_HASH = HashingUtils::HashString("Prepared");
        static const int Preparing_HASH = HashingUtils::HashString("Preparing");
        static const int NotPrepared_HASH = HashingUtils::HashString("NotPrepared");


        FlowStatus GetFlowStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Failed_HASH)
          {
            return FlowStatus::Failed;
          }
          else if (hashCode == Prepared_HASH)
          {
            return FlowStatus::Prepared;
          }
          else if (hashCode == Preparing_HASH)
          {
            return FlowStatus::Preparing;
          }
          else if (hashCode == NotPrepared_HASH)
          {
            return FlowStatus::NotPrepared;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowStatus>(hashCode);
          }

          return FlowStatus::NOT_SET;
        }

        Aws::String GetNameForFlowStatus(FlowStatus enumValue)
        {
          switch(enumValue)
          {
          case FlowStatus::NOT_SET:
            return {};
          case FlowStatus::Failed:
            return "Failed";
          case FlowStatus::Prepared:
            return "Prepared";
          case FlowStatus::Preparing:
            return "Preparing";
          case FlowStatus::NotPrepared:
            return "NotPrepared";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowStatusMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
