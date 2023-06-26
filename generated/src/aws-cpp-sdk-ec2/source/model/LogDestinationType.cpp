/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LogDestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace LogDestinationTypeMapper
      {

        static const int cloud_watch_logs_HASH = HashingUtils::HashString("cloud-watch-logs");
        static const int s3_HASH = HashingUtils::HashString("s3");
        static const int kinesis_data_firehose_HASH = HashingUtils::HashString("kinesis-data-firehose");


        LogDestinationType GetLogDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cloud_watch_logs_HASH)
          {
            return LogDestinationType::cloud_watch_logs;
          }
          else if (hashCode == s3_HASH)
          {
            return LogDestinationType::s3;
          }
          else if (hashCode == kinesis_data_firehose_HASH)
          {
            return LogDestinationType::kinesis_data_firehose;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogDestinationType>(hashCode);
          }

          return LogDestinationType::NOT_SET;
        }

        Aws::String GetNameForLogDestinationType(LogDestinationType enumValue)
        {
          switch(enumValue)
          {
          case LogDestinationType::cloud_watch_logs:
            return "cloud-watch-logs";
          case LogDestinationType::s3:
            return "s3";
          case LogDestinationType::kinesis_data_firehose:
            return "kinesis-data-firehose";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogDestinationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
