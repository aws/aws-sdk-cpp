/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ProcessorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace ProcessorTypeMapper
      {

        static const int RecordDeAggregation_HASH = HashingUtils::HashString("RecordDeAggregation");
        static const int Decompression_HASH = HashingUtils::HashString("Decompression");
        static const int CloudWatchLogProcessing_HASH = HashingUtils::HashString("CloudWatchLogProcessing");
        static const int Lambda_HASH = HashingUtils::HashString("Lambda");
        static const int MetadataExtraction_HASH = HashingUtils::HashString("MetadataExtraction");
        static const int AppendDelimiterToRecord_HASH = HashingUtils::HashString("AppendDelimiterToRecord");


        ProcessorType GetProcessorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RecordDeAggregation_HASH)
          {
            return ProcessorType::RecordDeAggregation;
          }
          else if (hashCode == Decompression_HASH)
          {
            return ProcessorType::Decompression;
          }
          else if (hashCode == CloudWatchLogProcessing_HASH)
          {
            return ProcessorType::CloudWatchLogProcessing;
          }
          else if (hashCode == Lambda_HASH)
          {
            return ProcessorType::Lambda;
          }
          else if (hashCode == MetadataExtraction_HASH)
          {
            return ProcessorType::MetadataExtraction;
          }
          else if (hashCode == AppendDelimiterToRecord_HASH)
          {
            return ProcessorType::AppendDelimiterToRecord;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessorType>(hashCode);
          }

          return ProcessorType::NOT_SET;
        }

        Aws::String GetNameForProcessorType(ProcessorType enumValue)
        {
          switch(enumValue)
          {
          case ProcessorType::NOT_SET:
            return {};
          case ProcessorType::RecordDeAggregation:
            return "RecordDeAggregation";
          case ProcessorType::Decompression:
            return "Decompression";
          case ProcessorType::CloudWatchLogProcessing:
            return "CloudWatchLogProcessing";
          case ProcessorType::Lambda:
            return "Lambda";
          case ProcessorType::MetadataExtraction:
            return "MetadataExtraction";
          case ProcessorType::AppendDelimiterToRecord:
            return "AppendDelimiterToRecord";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessorTypeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
