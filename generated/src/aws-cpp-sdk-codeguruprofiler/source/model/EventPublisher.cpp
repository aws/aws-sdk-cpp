/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/EventPublisher.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruProfiler
  {
    namespace Model
    {
      namespace EventPublisherMapper
      {

        static const int AnomalyDetection_HASH = HashingUtils::HashString("AnomalyDetection");


        EventPublisher GetEventPublisherForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AnomalyDetection_HASH)
          {
            return EventPublisher::AnomalyDetection;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventPublisher>(hashCode);
          }

          return EventPublisher::NOT_SET;
        }

        Aws::String GetNameForEventPublisher(EventPublisher enumValue)
        {
          switch(enumValue)
          {
          case EventPublisher::AnomalyDetection:
            return "AnomalyDetection";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventPublisherMapper
    } // namespace Model
  } // namespace CodeGuruProfiler
} // namespace Aws
