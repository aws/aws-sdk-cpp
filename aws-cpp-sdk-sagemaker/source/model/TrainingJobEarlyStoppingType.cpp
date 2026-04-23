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

#include <aws/sagemaker/model/TrainingJobEarlyStoppingType.h>
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
      namespace TrainingJobEarlyStoppingTypeMapper
      {

        static const int Off_HASH = HashingUtils::HashString("Off");
        static const int Auto_HASH = HashingUtils::HashString("Auto");


        TrainingJobEarlyStoppingType GetTrainingJobEarlyStoppingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Off_HASH)
          {
            return TrainingJobEarlyStoppingType::Off;
          }
          else if (hashCode == Auto_HASH)
          {
            return TrainingJobEarlyStoppingType::Auto;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingJobEarlyStoppingType>(hashCode);
          }

          return TrainingJobEarlyStoppingType::NOT_SET;
        }

        Aws::String GetNameForTrainingJobEarlyStoppingType(TrainingJobEarlyStoppingType enumValue)
        {
          switch(enumValue)
          {
          case TrainingJobEarlyStoppingType::Off:
            return "Off";
          case TrainingJobEarlyStoppingType::Auto:
            return "Auto";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingJobEarlyStoppingTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
