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

#include <aws/sagemaker/model/TrainingInputMode.h>
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
      namespace TrainingInputModeMapper
      {

        static const int Pipe_HASH = HashingUtils::HashString("Pipe");
        static const int File_HASH = HashingUtils::HashString("File");


        TrainingInputMode GetTrainingInputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pipe_HASH)
          {
            return TrainingInputMode::Pipe;
          }
          else if (hashCode == File_HASH)
          {
            return TrainingInputMode::File;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingInputMode>(hashCode);
          }

          return TrainingInputMode::NOT_SET;
        }

        Aws::String GetNameForTrainingInputMode(TrainingInputMode enumValue)
        {
          switch(enumValue)
          {
          case TrainingInputMode::Pipe:
            return "Pipe";
          case TrainingInputMode::File:
            return "File";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingInputModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
