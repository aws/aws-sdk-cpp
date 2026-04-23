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

#include <aws/sagemaker/model/HyperParameterTuningJobWarmStartType.h>
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
      namespace HyperParameterTuningJobWarmStartTypeMapper
      {

        static const int IdenticalDataAndAlgorithm_HASH = HashingUtils::HashString("IdenticalDataAndAlgorithm");
        static const int TransferLearning_HASH = HashingUtils::HashString("TransferLearning");


        HyperParameterTuningJobWarmStartType GetHyperParameterTuningJobWarmStartTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IdenticalDataAndAlgorithm_HASH)
          {
            return HyperParameterTuningJobWarmStartType::IdenticalDataAndAlgorithm;
          }
          else if (hashCode == TransferLearning_HASH)
          {
            return HyperParameterTuningJobWarmStartType::TransferLearning;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterTuningJobWarmStartType>(hashCode);
          }

          return HyperParameterTuningJobWarmStartType::NOT_SET;
        }

        Aws::String GetNameForHyperParameterTuningJobWarmStartType(HyperParameterTuningJobWarmStartType enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterTuningJobWarmStartType::IdenticalDataAndAlgorithm:
            return "IdenticalDataAndAlgorithm";
          case HyperParameterTuningJobWarmStartType::TransferLearning:
            return "TransferLearning";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperParameterTuningJobWarmStartTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
