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

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        GeneratedCodeJobState GetGeneratedCodeJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
