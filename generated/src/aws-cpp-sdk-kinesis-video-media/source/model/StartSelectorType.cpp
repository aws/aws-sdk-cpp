/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-media/model/StartSelectorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideoMedia
  {
    namespace Model
    {
      namespace StartSelectorTypeMapper
      {

        static const int FRAGMENT_NUMBER_HASH = HashingUtils::HashString("FRAGMENT_NUMBER");
        static const int SERVER_TIMESTAMP_HASH = HashingUtils::HashString("SERVER_TIMESTAMP");
        static const int PRODUCER_TIMESTAMP_HASH = HashingUtils::HashString("PRODUCER_TIMESTAMP");
        static const int NOW_HASH = HashingUtils::HashString("NOW");
        static const int EARLIEST_HASH = HashingUtils::HashString("EARLIEST");
        static const int CONTINUATION_TOKEN_HASH = HashingUtils::HashString("CONTINUATION_TOKEN");


        StartSelectorType GetStartSelectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAGMENT_NUMBER_HASH)
          {
            return StartSelectorType::FRAGMENT_NUMBER;
          }
          else if (hashCode == SERVER_TIMESTAMP_HASH)
          {
            return StartSelectorType::SERVER_TIMESTAMP;
          }
          else if (hashCode == PRODUCER_TIMESTAMP_HASH)
          {
            return StartSelectorType::PRODUCER_TIMESTAMP;
          }
          else if (hashCode == NOW_HASH)
          {
            return StartSelectorType::NOW;
          }
          else if (hashCode == EARLIEST_HASH)
          {
            return StartSelectorType::EARLIEST;
          }
          else if (hashCode == CONTINUATION_TOKEN_HASH)
          {
            return StartSelectorType::CONTINUATION_TOKEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StartSelectorType>(hashCode);
          }

          return StartSelectorType::NOT_SET;
        }

        Aws::String GetNameForStartSelectorType(StartSelectorType enumValue)
        {
          switch(enumValue)
          {
          case StartSelectorType::FRAGMENT_NUMBER:
            return "FRAGMENT_NUMBER";
          case StartSelectorType::SERVER_TIMESTAMP:
            return "SERVER_TIMESTAMP";
          case StartSelectorType::PRODUCER_TIMESTAMP:
            return "PRODUCER_TIMESTAMP";
          case StartSelectorType::NOW:
            return "NOW";
          case StartSelectorType::EARLIEST:
            return "EARLIEST";
          case StartSelectorType::CONTINUATION_TOKEN:
            return "CONTINUATION_TOKEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StartSelectorTypeMapper
    } // namespace Model
  } // namespace KinesisVideoMedia
} // namespace Aws
