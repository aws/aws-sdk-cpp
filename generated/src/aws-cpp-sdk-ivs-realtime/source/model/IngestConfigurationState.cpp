/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/IngestConfigurationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace IngestConfigurationStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        IngestConfigurationState GetIngestConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return IngestConfigurationState::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return IngestConfigurationState::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestConfigurationState>(hashCode);
          }

          return IngestConfigurationState::NOT_SET;
        }

        Aws::String GetNameForIngestConfigurationState(IngestConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case IngestConfigurationState::NOT_SET:
            return {};
          case IngestConfigurationState::ACTIVE:
            return "ACTIVE";
          case IngestConfigurationState::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestConfigurationStateMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
