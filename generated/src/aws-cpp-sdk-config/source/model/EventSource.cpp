﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/EventSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace EventSourceMapper
      {

        static const int aws_config_HASH = HashingUtils::HashString("aws.config");


        EventSource GetEventSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_config_HASH)
          {
            return EventSource::aws_config;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventSource>(hashCode);
          }

          return EventSource::NOT_SET;
        }

        Aws::String GetNameForEventSource(EventSource enumValue)
        {
          switch(enumValue)
          {
          case EventSource::NOT_SET:
            return {};
          case EventSource::aws_config:
            return "aws.config";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventSourceMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
