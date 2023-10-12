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

        static constexpr uint32_t LambdaArn_HASH = ConstExprHashingUtils::HashString("LambdaArn");
        static constexpr uint32_t NumberOfRetries_HASH = ConstExprHashingUtils::HashString("NumberOfRetries");
        static constexpr uint32_t MetadataExtractionQuery_HASH = ConstExprHashingUtils::HashString("MetadataExtractionQuery");
        static constexpr uint32_t JsonParsingEngine_HASH = ConstExprHashingUtils::HashString("JsonParsingEngine");
        static constexpr uint32_t RoleArn_HASH = ConstExprHashingUtils::HashString("RoleArn");
        static constexpr uint32_t BufferSizeInMBs_HASH = ConstExprHashingUtils::HashString("BufferSizeInMBs");
        static constexpr uint32_t BufferIntervalInSeconds_HASH = ConstExprHashingUtils::HashString("BufferIntervalInSeconds");
        static constexpr uint32_t SubRecordType_HASH = ConstExprHashingUtils::HashString("SubRecordType");
        static constexpr uint32_t Delimiter_HASH = ConstExprHashingUtils::HashString("Delimiter");
        static constexpr uint32_t CompressionFormat_HASH = ConstExprHashingUtils::HashString("CompressionFormat");


        ProcessorParameterName GetProcessorParameterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
