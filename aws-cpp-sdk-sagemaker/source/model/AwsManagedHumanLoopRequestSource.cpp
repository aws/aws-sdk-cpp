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

#include <aws/sagemaker/model/AwsManagedHumanLoopRequestSource.h>
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
      namespace AwsManagedHumanLoopRequestSourceMapper
      {

        static const int AWS_Rekognition_DetectModerationLabels_Image_V3_HASH = HashingUtils::HashString("AWS/Rekognition/DetectModerationLabels/Image/V3");
        static const int AWS_Textract_AnalyzeDocument_Forms_V1_HASH = HashingUtils::HashString("AWS/Textract/AnalyzeDocument/Forms/V1");


        AwsManagedHumanLoopRequestSource GetAwsManagedHumanLoopRequestSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_Rekognition_DetectModerationLabels_Image_V3_HASH)
          {
            return AwsManagedHumanLoopRequestSource::AWS_Rekognition_DetectModerationLabels_Image_V3;
          }
          else if (hashCode == AWS_Textract_AnalyzeDocument_Forms_V1_HASH)
          {
            return AwsManagedHumanLoopRequestSource::AWS_Textract_AnalyzeDocument_Forms_V1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsManagedHumanLoopRequestSource>(hashCode);
          }

          return AwsManagedHumanLoopRequestSource::NOT_SET;
        }

        Aws::String GetNameForAwsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource enumValue)
        {
          switch(enumValue)
          {
          case AwsManagedHumanLoopRequestSource::AWS_Rekognition_DetectModerationLabels_Image_V3:
            return "AWS/Rekognition/DetectModerationLabels/Image/V3";
          case AwsManagedHumanLoopRequestSource::AWS_Textract_AnalyzeDocument_Forms_V1:
            return "AWS/Textract/AnalyzeDocument/Forms/V1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsManagedHumanLoopRequestSourceMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
