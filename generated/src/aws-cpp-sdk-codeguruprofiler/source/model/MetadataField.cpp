/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/MetadataField.h>
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
      namespace MetadataFieldMapper
      {

        static constexpr uint32_t ComputePlatform_HASH = ConstExprHashingUtils::HashString("ComputePlatform");
        static constexpr uint32_t AgentId_HASH = ConstExprHashingUtils::HashString("AgentId");
        static constexpr uint32_t AwsRequestId_HASH = ConstExprHashingUtils::HashString("AwsRequestId");
        static constexpr uint32_t ExecutionEnvironment_HASH = ConstExprHashingUtils::HashString("ExecutionEnvironment");
        static constexpr uint32_t LambdaFunctionArn_HASH = ConstExprHashingUtils::HashString("LambdaFunctionArn");
        static constexpr uint32_t LambdaMemoryLimitInMB_HASH = ConstExprHashingUtils::HashString("LambdaMemoryLimitInMB");
        static constexpr uint32_t LambdaRemainingTimeInMilliseconds_HASH = ConstExprHashingUtils::HashString("LambdaRemainingTimeInMilliseconds");
        static constexpr uint32_t LambdaTimeGapBetweenInvokesInMilliseconds_HASH = ConstExprHashingUtils::HashString("LambdaTimeGapBetweenInvokesInMilliseconds");
        static constexpr uint32_t LambdaPreviousExecutionTimeInMilliseconds_HASH = ConstExprHashingUtils::HashString("LambdaPreviousExecutionTimeInMilliseconds");


        MetadataField GetMetadataFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ComputePlatform_HASH)
          {
            return MetadataField::ComputePlatform;
          }
          else if (hashCode == AgentId_HASH)
          {
            return MetadataField::AgentId;
          }
          else if (hashCode == AwsRequestId_HASH)
          {
            return MetadataField::AwsRequestId;
          }
          else if (hashCode == ExecutionEnvironment_HASH)
          {
            return MetadataField::ExecutionEnvironment;
          }
          else if (hashCode == LambdaFunctionArn_HASH)
          {
            return MetadataField::LambdaFunctionArn;
          }
          else if (hashCode == LambdaMemoryLimitInMB_HASH)
          {
            return MetadataField::LambdaMemoryLimitInMB;
          }
          else if (hashCode == LambdaRemainingTimeInMilliseconds_HASH)
          {
            return MetadataField::LambdaRemainingTimeInMilliseconds;
          }
          else if (hashCode == LambdaTimeGapBetweenInvokesInMilliseconds_HASH)
          {
            return MetadataField::LambdaTimeGapBetweenInvokesInMilliseconds;
          }
          else if (hashCode == LambdaPreviousExecutionTimeInMilliseconds_HASH)
          {
            return MetadataField::LambdaPreviousExecutionTimeInMilliseconds;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataField>(hashCode);
          }

          return MetadataField::NOT_SET;
        }

        Aws::String GetNameForMetadataField(MetadataField enumValue)
        {
          switch(enumValue)
          {
          case MetadataField::NOT_SET:
            return {};
          case MetadataField::ComputePlatform:
            return "ComputePlatform";
          case MetadataField::AgentId:
            return "AgentId";
          case MetadataField::AwsRequestId:
            return "AwsRequestId";
          case MetadataField::ExecutionEnvironment:
            return "ExecutionEnvironment";
          case MetadataField::LambdaFunctionArn:
            return "LambdaFunctionArn";
          case MetadataField::LambdaMemoryLimitInMB:
            return "LambdaMemoryLimitInMB";
          case MetadataField::LambdaRemainingTimeInMilliseconds:
            return "LambdaRemainingTimeInMilliseconds";
          case MetadataField::LambdaTimeGapBetweenInvokesInMilliseconds:
            return "LambdaTimeGapBetweenInvokesInMilliseconds";
          case MetadataField::LambdaPreviousExecutionTimeInMilliseconds:
            return "LambdaPreviousExecutionTimeInMilliseconds";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetadataFieldMapper
    } // namespace Model
  } // namespace CodeGuruProfiler
} // namespace Aws
