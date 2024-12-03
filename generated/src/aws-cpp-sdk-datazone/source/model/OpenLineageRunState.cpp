/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/OpenLineageRunState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace OpenLineageRunStateMapper
      {

        static const int START_HASH = HashingUtils::HashString("START");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int ABORT_HASH = HashingUtils::HashString("ABORT");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        OpenLineageRunState GetOpenLineageRunStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_HASH)
          {
            return OpenLineageRunState::START;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return OpenLineageRunState::RUNNING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return OpenLineageRunState::COMPLETE;
          }
          else if (hashCode == ABORT_HASH)
          {
            return OpenLineageRunState::ABORT;
          }
          else if (hashCode == FAIL_HASH)
          {
            return OpenLineageRunState::FAIL;
          }
          else if (hashCode == OTHER_HASH)
          {
            return OpenLineageRunState::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenLineageRunState>(hashCode);
          }

          return OpenLineageRunState::NOT_SET;
        }

        Aws::String GetNameForOpenLineageRunState(OpenLineageRunState enumValue)
        {
          switch(enumValue)
          {
          case OpenLineageRunState::NOT_SET:
            return {};
          case OpenLineageRunState::START:
            return "START";
          case OpenLineageRunState::RUNNING:
            return "RUNNING";
          case OpenLineageRunState::COMPLETE:
            return "COMPLETE";
          case OpenLineageRunState::ABORT:
            return "ABORT";
          case OpenLineageRunState::FAIL:
            return "FAIL";
          case OpenLineageRunState::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenLineageRunStateMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
