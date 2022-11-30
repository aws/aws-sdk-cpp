/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceExperimentType.h>
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
      namespace InferenceExperimentTypeMapper
      {

        static const int ShadowMode_HASH = HashingUtils::HashString("ShadowMode");


        InferenceExperimentType GetInferenceExperimentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ShadowMode_HASH)
          {
            return InferenceExperimentType::ShadowMode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceExperimentType>(hashCode);
          }

          return InferenceExperimentType::NOT_SET;
        }

        Aws::String GetNameForInferenceExperimentType(InferenceExperimentType enumValue)
        {
          switch(enumValue)
          {
          case InferenceExperimentType::ShadowMode:
            return "ShadowMode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferenceExperimentTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
