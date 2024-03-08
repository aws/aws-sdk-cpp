/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static const int aws_evidently_evaluation_HASH = HashingUtils::HashString("aws.evidently.evaluation");
        static const int aws_evidently_custom_HASH = HashingUtils::HashString("aws.evidently.custom");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_evidently_evaluation_HASH)
          {
            return EventType::aws_evidently_evaluation;
          }
          else if (hashCode == aws_evidently_custom_HASH)
          {
            return EventType::aws_evidently_custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::NOT_SET:
            return {};
          case EventType::aws_evidently_evaluation:
            return "aws.evidently.evaluation";
          case EventType::aws_evidently_custom:
            return "aws.evidently.custom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
