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

        static const int ComputePlatform_HASH = HashingUtils::HashString("ComputePlatform");
        static const int AgentId_HASH = HashingUtils::HashString("AgentId");
        static const int AwsRequestId_HASH = HashingUtils::HashString("AwsRequestId");
        static const int ExecutionEnvironment_HASH = HashingUtils::HashString("ExecutionEnvironment");
        static const int LambdaFunctionArn_HASH = HashingUtils::HashString("LambdaFunctionArn");
        static const int LambdaMemoryLimitInMB_HASH = HashingUtils::HashString("LambdaMemoryLimitInMB");
        static const int LambdaRemainingTimeInMilliseconds_HASH = HashingUtils::HashString("LambdaRemainingTimeInMilliseconds");
        static const int LambdaTimeGapBetweenInvokesInMilliseconds_HASH = HashingUtils::HashString("LambdaTimeGapBetweenInvokesInMilliseconds");
        static const int LambdaPreviousExecutionTimeInMilliseconds_HASH = HashingUtils::HashString("LambdaPreviousExecutionTimeInMilliseconds");


        MetadataField GetMetadataFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
