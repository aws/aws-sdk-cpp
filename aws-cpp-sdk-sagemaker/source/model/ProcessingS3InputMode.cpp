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

#include <aws/sagemaker/model/ProcessingS3InputMode.h>
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
      namespace ProcessingS3InputModeMapper
      {

        static const int Pipe_HASH = HashingUtils::HashString("Pipe");
        static const int File_HASH = HashingUtils::HashString("File");


        ProcessingS3InputMode GetProcessingS3InputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pipe_HASH)
          {
            return ProcessingS3InputMode::Pipe;
          }
          else if (hashCode == File_HASH)
          {
            return ProcessingS3InputMode::File;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingS3InputMode>(hashCode);
          }

          return ProcessingS3InputMode::NOT_SET;
        }

        Aws::String GetNameForProcessingS3InputMode(ProcessingS3InputMode enumValue)
        {
          switch(enumValue)
          {
          case ProcessingS3InputMode::Pipe:
            return "Pipe";
          case ProcessingS3InputMode::File:
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

      } // namespace ProcessingS3InputModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
