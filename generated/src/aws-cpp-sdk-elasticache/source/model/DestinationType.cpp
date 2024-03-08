/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace DestinationTypeMapper
      {

        static const int cloudwatch_logs_HASH = HashingUtils::HashString("cloudwatch-logs");
        static const int kinesis_firehose_HASH = HashingUtils::HashString("kinesis-firehose");


        DestinationType GetDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cloudwatch_logs_HASH)
          {
            return DestinationType::cloudwatch_logs;
          }
          else if (hashCode == kinesis_firehose_HASH)
          {
            return DestinationType::kinesis_firehose;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationType>(hashCode);
          }

          return DestinationType::NOT_SET;
        }

        Aws::String GetNameForDestinationType(DestinationType enumValue)
        {
          switch(enumValue)
          {
          case DestinationType::NOT_SET:
            return {};
          case DestinationType::cloudwatch_logs:
            return "cloudwatch-logs";
          case DestinationType::kinesis_firehose:
            return "kinesis-firehose";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationTypeMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
