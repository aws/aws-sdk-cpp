/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace ApplicationModeMapper
      {

        static const int STREAMING_HASH = HashingUtils::HashString("STREAMING");
        static const int INTERACTIVE_HASH = HashingUtils::HashString("INTERACTIVE");


        ApplicationMode GetApplicationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STREAMING_HASH)
          {
            return ApplicationMode::STREAMING;
          }
          else if (hashCode == INTERACTIVE_HASH)
          {
            return ApplicationMode::INTERACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationMode>(hashCode);
          }

          return ApplicationMode::NOT_SET;
        }

        Aws::String GetNameForApplicationMode(ApplicationMode enumValue)
        {
          switch(enumValue)
          {
          case ApplicationMode::NOT_SET:
            return {};
          case ApplicationMode::STREAMING:
            return "STREAMING";
          case ApplicationMode::INTERACTIVE:
            return "INTERACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationModeMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
