/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/S3DataDistribution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace S3DataDistributionMapper
      {

        static const int FullyReplicated_HASH = HashingUtils::HashString("FullyReplicated");
        static const int ShardedByS3Key_HASH = HashingUtils::HashString("ShardedByS3Key");


        S3DataDistribution GetS3DataDistributionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FullyReplicated_HASH)
          {
            return S3DataDistribution::FullyReplicated;
          }
          else if (hashCode == ShardedByS3Key_HASH)
          {
            return S3DataDistribution::ShardedByS3Key;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3DataDistribution>(hashCode);
          }

          return S3DataDistribution::NOT_SET;
        }

        Aws::String GetNameForS3DataDistribution(S3DataDistribution enumValue)
        {
          switch(enumValue)
          {
          case S3DataDistribution::FullyReplicated:
            return "FullyReplicated";
          case S3DataDistribution::ShardedByS3Key:
            return "ShardedByS3Key";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3DataDistributionMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
