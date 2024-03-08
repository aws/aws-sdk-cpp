/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ProcessorParameterName.h>
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
      namespace ProcessorParameterNameMapper
      {

        static const int LambdaArn_HASH = HashingUtils::HashString("LambdaArn");
        static const int NumberOfRetries_HASH = HashingUtils::HashString("NumberOfRetries");
        static const int MetadataExtractionQuery_HASH = HashingUtils::HashString("MetadataExtractionQuery");
        static const int JsonParsingEngine_HASH = HashingUtils::HashString("JsonParsingEngine");
        static const int RoleArn_HASH = HashingUtils::HashString("RoleArn");
        static const int BufferSizeInMBs_HASH = HashingUtils::HashString("BufferSizeInMBs");
        static const int BufferIntervalInSeconds_HASH = HashingUtils::HashString("BufferIntervalInSeconds");
        static const int SubRecordType_HASH = HashingUtils::HashString("SubRecordType");
        static const int Delimiter_HASH = HashingUtils::HashString("Delimiter");
        static const int CompressionFormat_HASH = HashingUtils::HashString("CompressionFormat");
        static const int DataMessageExtraction_HASH = HashingUtils::HashString("DataMessageExtraction");


        ProcessorParameterName GetProcessorParameterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LambdaArn_HASH)
          {
            return ProcessorParameterName::LambdaArn;
          }
          else if (hashCode == NumberOfRetries_HASH)
          {
            return ProcessorParameterName::NumberOfRetries;
          }
          else if (hashCode == MetadataExtractionQuery_HASH)
          {
            return ProcessorParameterName::MetadataExtractionQuery;
          }
          else if (hashCode == JsonParsingEngine_HASH)
          {
            return ProcessorParameterName::JsonParsingEngine;
          }
          else if (hashCode == RoleArn_HASH)
          {
            return ProcessorParameterName::RoleArn;
          }
          else if (hashCode == BufferSizeInMBs_HASH)
          {
            return ProcessorParameterName::BufferSizeInMBs;
          }
          else if (hashCode == BufferIntervalInSeconds_HASH)
          {
            return ProcessorParameterName::BufferIntervalInSeconds;
          }
          else if (hashCode == SubRecordType_HASH)
          {
            return ProcessorParameterName::SubRecordType;
          }
          else if (hashCode == Delimiter_HASH)
          {
            return ProcessorParameterName::Delimiter;
          }
          else if (hashCode == CompressionFormat_HASH)
          {
            return ProcessorParameterName::CompressionFormat;
          }
          else if (hashCode == DataMessageExtraction_HASH)
          {
            return ProcessorParameterName::DataMessageExtraction;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessorParameterName>(hashCode);
          }

          return ProcessorParameterName::NOT_SET;
        }

        Aws::String GetNameForProcessorParameterName(ProcessorParameterName enumValue)
        {
          switch(enumValue)
          {
          case ProcessorParameterName::NOT_SET:
            return {};
          case ProcessorParameterName::LambdaArn:
            return "LambdaArn";
          case ProcessorParameterName::NumberOfRetries:
            return "NumberOfRetries";
          case ProcessorParameterName::MetadataExtractionQuery:
            return "MetadataExtractionQuery";
          case ProcessorParameterName::JsonParsingEngine:
            return "JsonParsingEngine";
          case ProcessorParameterName::RoleArn:
            return "RoleArn";
          case ProcessorParameterName::BufferSizeInMBs:
            return "BufferSizeInMBs";
          case ProcessorParameterName::BufferIntervalInSeconds:
            return "BufferIntervalInSeconds";
          case ProcessorParameterName::SubRecordType:
            return "SubRecordType";
          case ProcessorParameterName::Delimiter:
            return "Delimiter";
          case ProcessorParameterName::CompressionFormat:
            return "CompressionFormat";
          case ProcessorParameterName::DataMessageExtraction:
            return "DataMessageExtraction";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessorParameterNameMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
