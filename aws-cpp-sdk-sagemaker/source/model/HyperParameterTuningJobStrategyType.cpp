/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobStrategyType.h>
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
      namespace HyperParameterTuningJobStrategyTypeMapper
      {

        static const int Bayesian_HASH = HashingUtils::HashString("Bayesian");
        static const int Random_HASH = HashingUtils::HashString("Random");


        HyperParameterTuningJobStrategyType GetHyperParameterTuningJobStrategyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Bayesian_HASH)
          {
            return HyperParameterTuningJobStrategyType::Bayesian;
          }
          else if (hashCode == Random_HASH)
          {
            return HyperParameterTuningJobStrategyType::Random;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterTuningJobStrategyType>(hashCode);
          }

          return HyperParameterTuningJobStrategyType::NOT_SET;
        }

        Aws::String GetNameForHyperParameterTuningJobStrategyType(HyperParameterTuningJobStrategyType enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterTuningJobStrategyType::Bayesian:
            return "Bayesian";
          case HyperParameterTuningJobStrategyType::Random:
            return "Random";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperParameterTuningJobStrategyTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
