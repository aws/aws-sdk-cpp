/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/GeneratedCodeJobState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameSparks
  {
    namespace Model
    {
      namespace GeneratedCodeJobStateMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");


        GeneratedCodeJobState GetGeneratedCodeJobStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return GeneratedCodeJobState::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return GeneratedCodeJobState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return GeneratedCodeJobState::FAILED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return GeneratedCodeJobState::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeneratedCodeJobState>(hashCode);
          }

          return GeneratedCodeJobState::NOT_SET;
        }

        Aws::String GetNameForGeneratedCodeJobState(GeneratedCodeJobState enumValue)
        {
          switch(enumValue)
          {
          case GeneratedCodeJobState::NOT_SET:
            return {};
          case GeneratedCodeJobState::IN_PROGRESS:
            return "IN_PROGRESS";
          case GeneratedCodeJobState::COMPLETED:
            return "COMPLETED";
          case GeneratedCodeJobState::FAILED:
            return "FAILED";
          case GeneratedCodeJobState::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeneratedCodeJobStateMapper
    } // namespace Model
  } // namespace GameSparks
} // namespace Aws
